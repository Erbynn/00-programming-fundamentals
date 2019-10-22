#include <iostream>
#include <vector>

using namespace std;

struct Date{
	int year;
	int month;
	int day;
};


int main(){
	Date myDate{};
	myDate.year = 1996;
	myDate.month = 10;
	myDate.day = 20;
	
	// just to prevent WarningError=unused-but-set-var (ie myDate)
	cout <<"My B'Day Date(yymmdd): " << myDate.year << myDate.month << myDate.day << endl;
	
	Date date1{};
	date1.year = 1934;
	date1.month = 3;
	date1.day = 6;

	Date date2{};
	date2.year = 1934;
	date2.month = 3;
	date2.day = 10;

	// determing later date
	if(date1.year > date2.year){
		cout << date1.year << "-" << date1.month << "-" << date1.day << endl;
	} 
	else if(date1.year < date2.year){
		cout << date2.year << "-" << date2.month << "-" << date2.day << endl;
	}
	else{
		if(date1.month > date2.month){
			cout << date1.year << "-" << date1.month << "-" << date1.day << endl;
		}
		else if(date1.month < date2.month){
			cout << date2.year << "-" << date2.month << "-" << date2.day << endl;
		}
		else{
			if(date1.day > date2.day){
				cout << date1.year << "-" << date1.month << "-" << date1.day << endl;
			}
			else if(date1.day < date2.day){
				cout << date2.year << "-" << date2.month << "-" << date2.day << endl;
			}
			else{
				cout << "Same date :)" << endl;
			}
		}
	}


	// vector 
	Date xDate{};
	xDate.year = 1996;
	xDate.month = 4;
	xDate.day = 6;

	Date yDate{};
	yDate.year = 2000;
	yDate.month = 5;
	yDate.day = 6;

	Date zDate{};
	zDate.year = 1474;
	zDate.month = 7;
	zDate.day = 8;

	vector<Date> dateVec{xDate, yDate, zDate};
	cout << "yDate year before: " << dateVec[1].year << endl ;	

	
	// date replacement/reassignment
	dateVec[1].year = 1984;
	dateVec[1].month = 2;
	dateVec[1].day = 18;
	cout <<"yDate year now: " << dateVec[1].year << endl;
	

	// pointer with struct 
	Date *newDateptr;
	
	Date newDate{};
	newDate.year = 2010;
	newDate.month = 10;
	newDate.day = 20;

	newDateptr = &newDate;
	
	cout << "Before: " << (*newDateptr).year << endl; 	// dereferencing to access the newDate instance  
	(*newDateptr).year = 2012;
	cout << "After: " << (*newDateptr).year << endl;

	
	return 0;

	}


