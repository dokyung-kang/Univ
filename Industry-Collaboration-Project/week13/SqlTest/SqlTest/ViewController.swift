//
//  ViewController.swift
//  SqlTest
//
//  Created by DDWU on 12/19/24.
//

import UIKit
import SQLite3

class ViewController: UIViewController {

    let DB_NAME = "my_db.sqlite"
    let TABLE_NAME = "my_table"
    let COL_ID = "id"
    let COL_NAME = "name"
    
    var db:OpaquePointer? = nil
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func btnOpenDatabase(_ sender: UIButton) {
        
        let dbFile = try! FileManager.default.url(for: .documentDirectory, in: .userDomainMask, appropriateFor: nil, create: false)
            .appendingPathComponent(DB_NAME)
        
        if sqlite3_open(dbFile.path, &db) == SQLITE_OK {
            print("Open!!!")
            print(dbFile)
        } else {
            print("Failed!!!")
        }
    }
    
    @IBAction func btnCreateTable(_ sender: UIButton) {
        let createTableString = """
            CREATE TABLE IF NOT EXISTS \(TABLE_NAME) ( \(COL_ID) INTEGER PRIMARY KEY AUTOINCREMENT, \(COL_NAME) TEXT);
"""
        
        print("TABLE SQL: \(createTableString)")
        
        if sqlite3_exec(db, createTableString, nil, nil, nil) == SQLITE_OK {
            print("The table is created")
        } else {
            let error = String(cString: sqlite3_errmsg(db)!)
            print("Table Creation Error: \(error)")
        }
    }
    
    @IBAction func btnInsert(_ sender: UIButton) {
        var insertStmt: OpaquePointer?
        
        if sqlite3_prepare_v2(db, "insert into \(TABLE_NAME) values (null, ?)", -1, &insertStmt, nil) == SQLITE_OK {
            
            let SQLITE_TRANSIENT = unsafeBitCast(-1, to: sqlite3_destructor_type.self)

            if sqlite3_bind_text(insertStmt, 1, "test1", -1, SQLITE_TRANSIENT) != SQLITE_OK {
                let errmsg = String(cString: sqlite3_errmsg(db)!)
                print("Text Binding Failure: \(errmsg)")
                return
            }
            
            if sqlite3_step(insertStmt) == SQLITE_DONE{
                print("Successfully inserted")
            } else {
                print("insert error")
            }
            
            sqlite3_finalize(insertStmt)
        } else {
            print("Insert statment is not prepared.")
        }
    }
    
    let name = "test1"
    
    @IBAction func btnSelectAll(_ sender: UIButton) {
            let sql = "select * from \(TABLE_NAME);"
        
        var queryResult: OpaquePointer?
        
        if sqlite3_prepare(db, sql, -1, &queryResult, nil) != SQLITE_OK{
            let errmsg = String(cString: sqlite3_errmsg(db)!)
            print("Reading Error : \(errmsg)")
            return
        }
        
        while(sqlite3_step(queryResult) == SQLITE_ROW){
            let id = sqlite3_column_int(queryResult, 0)
            let name = String(cString: sqlite3_column_text(queryResult, 1))
            print("id: \(id) name: \(name)")
        }
        
        sqlite3_finalize(queryResult)
    }
    
    @IBAction func btnUpdate(_ sender: UIButton) {
        let query = "update \(TABLE_NAME) set \(COL_NAME) = ? where \(COL_ID) = ?;"
        
        var stmt: OpaquePointer?
        
        if sqlite3_prepare(db, query, -1, &stmt, nil) != SQLITE_OK {
            let errmsg = String(cString: sqlite3_errmsg(db)!)
            print("error preparing update: \(errmsg)")
            return
        }
        
        let SQLITE_TRANSIENT = unsafeBitCast(-1, to: sqlite3_destructor_type.self)
        
        if sqlite3_bind_text(stmt, 1, "ios", -1, SQLITE_TRANSIENT) != SQLITE_OK {
            let errmsg = String(cString: sqlite3_errmsg(db)!)
            print("Text Binding Failure: \(errmsg)")
            return
        }
        
        if sqlite3_bind_int(stmt, 2, 1) != SQLITE_OK {
            let errmsg = String(cString: sqlite3_errmsg(db)!)
            print("Integer Binding Failure: \(errmsg)")
            return
        }
        
        if sqlite3_step(stmt) != SQLITE_DONE {
            let errmsg = String(cString: sqlite3_errmsg(db)!)
            print("Update Failure: \(errmsg)")
            return
        }
        
        print("Successfully updated")
        
        sqlite3_finalize(stmt)
    }
    
    @IBAction func btnDelete(_ sender: UIButton) {
        let query = "delete from \(TABLE_NAME) where \(COL_ID) = ?"
        var deleteStmt: OpaquePointer?
        
        if sqlite3_prepare(db, query, -1, &deleteStmt, nil) != SQLITE_OK{
            let errmsg = String(cString: sqlite3_errmsg(db)!)
            print("error preparing stmt: \(errmsg)")
            return
        }
        
        bindIntParams(deleteStmt!, no: 1, param: 11)
        
        if sqlite3_step(deleteStmt) != SQLITE_DONE{
            let errmsg = String(cString: sqlite3_errmsg(db)!)
            print("Delete Failure: \(errmsg)")
            return
        }
        
        sqlite3_finalize(deleteStmt)
    }
    
    func bindTextParams(_ stmt: OpaquePointer, no: Int, param: String){
        let SQLTIE_TRANSIENT = unsafeBitCast(-1, to: sqlite3_destructor_type.self)
        
        if sqlite3_bind_text(stmt, Int32(no), param, -1, SQLTIE_TRANSIENT) != SQLITE_OK{
            let errmsg = String(cString: sqlite3_errmsg(db)!)
            print("Text Binding failure: \(errmsg)")
            return
        }
    }
    
    func bindIntParams(_ stmt: OpaquePointer, no: Int, param: Int){
        if sqlite3_bind_int(stmt, Int32(no), Int32(param)) != SQLITE_OK{
            let errmsg = String(cString: sqlite3_errmsg(db)!)
            print("Text Binding failure: \(errmsg)")
            return
        }
        
    }
    
    @IBAction func btnDropTable(_ sender: UIButton) {
        if sqlite3_exec(db, "drop table if exists \(TABLE_NAME)", nil, nil, nil) != SQLITE_OK{
            let errmsg = String(cString: sqlite3_errmsg(db)!)
            print("Drop Error: \(errmsg)")
            return
        }
    }
    
    @IBAction func btnCloseDatabase(_ sender: UIButton) {
        sqlite3_close(db)
    }
    
}

