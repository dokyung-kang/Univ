function getCustomerInfo() {
	var phone = $("#phone").val();
	if (phone == "") {
		$("#address").val("");
		$("#order").val("");
	}
	else {
		$.ajax({
	 		type: "GET",
			url: "lookupCustomer_json.jsp?phone=" + phone,
			// url: "lookupCustomer2.jsp?phone=" + phone,
			/* 또는 url: "lookupCustomer.jsp", 
				data: {"phone": phone}, */  
			dataType: "text",
			success: updatePage,
			error: function(jqXHR) {
				var message = jqXHR.getResponseHeader("Status");
				if ((message == null) || (message.length <= 0)) {
					alert("Error! Request status is " + jqXHR.status);
				} else {
					alert(message);	
				}
			}
		});
	}
}

function updatePage(result) {
	alert("response: " + result);
	
	var customer = JSON.parse(result);
	
	var address = customer.name + "\n"
				+ customer.address.street + "\n";
	
	/* Update the HTML web form */
	$("#address").val(address);
	$("#order").val(customer.recentOrder);
}

function submitOrder() {
	var phone = $("#phone").val();
	var address = $("#address").val();
	var order = $("#order").val();
	var data = {"phone": phone, "address": address, "order": order};
	var json = JSON.stringify(data);
	console.log(json)
	
	$.ajax({
 		type: "POST",
		url: "placeOrder_json.jsp",
		contentType: "application/json; charset=UTF-8", // default
		data: json,	
		dataType: "text",
		success: showConfirmation,
		error: function(jqXHR) {
			var message = jqXHR.getResponseHeader("Status");
			if ((message == null) || (message.length <= 0)) {
				alert("Error! Request status is " + jqXHR.status);
			} else {
				alert(message);	
			}
		}
	});
}

function showConfirmation(response) {
	// Create some confirmation text
	var p = document.createElement("p");
	p.innerHTML = `Your order should arrive within ${response} minutes. Enjoy your pizza!`;
	var span = document.createElement("span");
	$(span).append(p);
	$("#main-page > span").remove();
	$("#main-page").append(span);
	
	// Or you can replace the form with the confirmation as below:
	// $("#order-form").replaceWith(p);	
}