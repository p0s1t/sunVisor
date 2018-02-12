//attribute.cpp

#include<iterator>

#include"attribute.h"

using namespace std;

#define pb push_back

Attribute::Attribute(){

/*
	first, initialize attribute container
	
	attributes ignored:

	indexing starts at 1

	site ID (1)

	Time of Max Wind Speed (16)
	Pan (24)
	Evap (25)
	Water Temp (26)
	Par (29)
	Total Par (30)
	Time of max rain (36)
	Time of max rain2 (38)
	Leaf wetness (39)
	Wetness frequency (40)		

*/

//all temps in Celsius

//solar radiation is target, vector index 18 -- (attribute # 27)

a.pb("null");//place holder for index position 0
a.pb("year");//Julian year
a.pb("jDay");//Julian day
a.pb("time");//in minutes, starting at 00 for 12:00 midnight
a.pb("jDayT");//Julian Day plus hour/2400
a.pb("airTemp");//air temperature
a.pb("humid");//humidity as a percentage of total air (i.e. 100% = full on raining)
a.pb("dew");//dew point, temperature at which water consolidates to liquid
a.pb("vPress");//vapor pressure in kiloPascals
a.pb("vPressDef");//vapor pressure deficit in kPa
a.pb("bPress");//barometric pressure in kPa
a.pb("windS");//wind speed in meters per second
a.pb("windD");//wind direction (between 0-360 degrees, 0 being true north)
a.pb("stdDev");//standard deviation of wind direction from norm
a.pb("maxWind");//maximum wind speed in meters per second
a.pb("soil2");//soil temperature at 2 cm
a.pb("soil5");//soil temp at 5 cm
a.pb("soil10");//soil temp at 10 cm
a.pb("soil20");//soil temp at 20 cm
a.pb("solarRad");//solar radiation in Watts per square meter //smog
a.pb("tSolarRad");//total solar radiation in kiloJoules per square meter//smog
a.pb("netRad");//net radiation in watts per square meter//smog
a.pb("rain");//net rainfall in time period, in mm
a.pb("rain2");//second rainfall measurement, in mm
a.pb("maxRain");//maximum rainfall, in mm
a.pb("maxRain2");//second max rainfall measurement
a.pb("battV");//battery voltage, in volts
a.pb("fuelTemp");//fuel temperature
a.pb("fuelMoist");//fuel moisture, as a percentage (0-100%)



}


vector<int> Attribute::getUnwantedAttributes(){

//indexes all represent unnecessary attributes from data set
int unwantedAttributes[11] = {1,16,24,25,26,29,30,36,38,39,40};

vector<int> unwanted(begin(unwantedAttributes), end(unwantedAttributes));

return unwanted;

}

Attribute::~Attribute(){}

//get the container based on a set of predetermined attribute indexes

// 15minformat_new.pdf <-- form with indexes for reference

vector<string> * Attribute::getAts(vector<int> indexes){

vector<string> requestedAts;

	//ranged for loop
	for(auto it: indexes){

	//put attributes from master list into requested list per their index
	
	requestedAts.pb(a.at(it));

	}//end for


	 vector<string> * p =  &requestedAts;

			return p;

}//end getAts for requested indexes

//same for *all* attributes
vector<string> *  Attribute::getAllAts(){

	vector<string> * p = &a;

	return p;

}//end getAllAts
