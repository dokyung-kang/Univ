package ddwucom.mobile.finalreport.data

class SimpleDiaryDao {
    private val diarys = ArrayList<DiaryDto>()

    init {
        diarys.add( DiaryDto(1, "대학입학", "2021/03/02", "맑음", "대학교", "에이티즈 - wave", "오늘 대학교에 입학했다. 나는 이제 대학생이다."))
        diarys.add( DiaryDto(2, "동아리 들어감", "2021/12/26", "눈", "대학교", "마마무 - 음오아예", "동아리 들어간다.") )
        diarys.add( DiaryDto(3, "새해", "2022/01/01", "눈", "집", "엑소 - 첫눈", "와 새해다") )
        diarys.add( DiaryDto(4, "와 여름방학이다ㅏㅏㅏㅏ", "2022/06/20", "맑음", "홍대", "에프엑스 - 피노키오", "친구들 만나서 신나게 놀았다.") )
        diarys.add( DiaryDto(5, "동기들이랑 영화봄", "2023/06/20", "비", "CGV", "세븐틴 - 손오공", "엘리멘탈 봤는데 너무 재밌었다. 원소들의 특징을 창의적으로 잘 살린 것 같다.") )
    }

    fun getAllDiarys() : ArrayList<DiaryDto> {
        return diarys
    }

    fun addNewDiary(newDiaryDto : DiaryDto) {
        diarys.add(newDiaryDto)
    }

    fun modifyDiary(pos: Int, modifyDiaryDto : DiaryDto) {
        diarys.set(pos, modifyDiaryDto)
    }

    fun removeDiary(removeDiaryDto : DiaryDto) {
        val index = diarys.indexOf(removeDiaryDto)
        diarys.removeAt(index)
    }

    fun getDiaryByPos(pos : Int) = diarys.get(pos)
}