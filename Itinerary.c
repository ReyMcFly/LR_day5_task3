Itinerary()
{
	
	web_reg_save_param_ex(
		"ParamName=City1",
		"LB=leaves ",
		"RB=  for",
		"Ordinal=1",
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=City2",
		"LB=leaves ",
		"RB=  for",
		"Ordinal=2",
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=City3",
		"LB=leaves ",
		"RB=  for",
		"Ordinal=3",
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=ID1",
		"LB=name=\"flightID\" value=\"",
		"RB=\"",
		"Ordinal=1",
		LAST);
		
	web_reg_save_param_ex(
		"ParamName=ID2",
		"LB=name=\"flightID\" value=\"",
		"RB=\"",
		"Ordinal=2",
		LAST);
		
	web_reg_save_param_ex(
		"ParamName=ID3",
		"LB=name=\"flightID\" value=\"",
		"RB=\"",
		"Ordinal=3",
		LAST);	

	/* Itinerary */

	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	/* Delete ticket without London */

	if (strcmp("London", lr_eval_string("{City1}")) != 0) {

	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA,
		"Name=1", "Value=on", ENDITEM, 		
		"Name=flightID", "Value={ID1}", ENDITEM, 
		"Name=flightID", "Value={ID2}", ENDITEM, 
		"Name=flightID", "Value={ID3}", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=removeFlights.x", "Value=42", ENDITEM, 
		"Name=removeFlights.y", "Value=8", ENDITEM, 
		LAST);
		
	}
	
	if (strcmp("London", lr_eval_string("{City2}")) != 0) {

	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value={ID1}", ENDITEM,
		"Name=2", "Value=on", ENDITEM, 		
		"Name=flightID", "Value={ID2}", ENDITEM,
		"Name=flightID", "Value={ID3}", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=removeFlights.x", "Value=42", ENDITEM, 
		"Name=removeFlights.y", "Value=8", ENDITEM, 
		LAST);
		
	}
	
	if (strcmp("London", lr_eval_string("{City3}")) != 0) {

	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value={ID1}", ENDITEM, 
		"Name=flightID", "Value={ID2}", ENDITEM, 
		"Name=3", "Value=on", ENDITEM, 
		"Name=flightID", "Value={ID3}", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=removeFlights.x", "Value=42", ENDITEM, 
		"Name=removeFlights.y", "Value=8", ENDITEM, 
		LAST);
		
	}

	return 0;
}