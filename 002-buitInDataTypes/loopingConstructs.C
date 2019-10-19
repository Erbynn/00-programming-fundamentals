#include <iostream>
#include <vector>

using namespace std;

struct Date{
	int year;
	int month;
	int day;
};


int main(){
	Date d1{};
	d1.year = 1233;
	d1.month = 10;
	d1.day = 3;

	Date d2{};
	d2.year = 2010;
	d2.month = 5;
	d2.day = 4;

	Date d3{};
	d3.year = 1944;
	d3.month = 5;
	d3.day = 6;

	vector<Date> myVec{d1, d2, d3};

	for( auto v: myVec ){
		cout << v.day << "-" << v.month << "-" << v.year <<  endl;
	}

	for( auto v: myVec ){
		cout << v[1].year << endl ;
 
		//if ( (v[0].year < v[1].year) && (v[0].year < v[2]) )
		//cout << v.day << "-" << v.month << "-" << v.year <<  endl;
	}
	


}
