#include <iostream>
#include <vector>

using namespace std;

struct Date{
	int year;
	int month;
	int day;
};

void printInfo(Date d){
	cout << d.year << "-" << d.month << "-" << d.day << endl;
}


int main(){
	Date myDate{};
	myDate.year = 1996;
	myDate.month = 10;
	myDate.day = 20;

	Date aDate{2030, 7, 2};
	Date bDate{2030, 8, 2};


	if(aDate.year < bDate.year){
		printInfo(bDate);
	} 
	else if(aDate.year >  bDate.year) { 
		printInfo(aDate);
	}
	else {
		if(aDate.month < bDate.month){
			printInfo(bDate);
		}
		else if(aDate.month > bDate.month){
			printInfo(aDate);
		}
		else{
			if(aDate.day < bDate.day){ printInfo(bDate); } 
			else if(aDate.day > bDate.day){ printInfo(aDate); } 
		}
	}


	// vector 
	Date erbynnDate{1984, 3, 1};
	Date pkDate{1474, 5, 4};
	Date johnDate{2019, 3, 20};

	vector<Date> dateVec{erbynnDate, pkDate, johnDate};

	cout << dateVec[1].year << endl ;	

	dateVec[1].year = 1984;
	dateVec[1].month = 2;
	dateVec[1].day = 18;

	printInfo(dateVec[1]);

	return 0;

	}


