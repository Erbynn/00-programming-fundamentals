#include <iostream>

using namespace std;

struct Date{
	int year;
	int month;
	int day;
};


int main(){
	cout << "Enter date with format ddmmyy: " << endl;
	
	Date d{};
	cin >> d.day >> d.month >> d.year;
	
	// lazy operator usage
	if ((d.year > 2019) && (d.month > 10) && (d.day > 18)) {
		cout << "Date is after today's " << endl;
	}
	else{
		cout << "Date is before today's " << endl;
	}


	// leap year
	if( (d.year % 4 == 0) && (d.year % 100 == 0) && (d.year % 400 == 0) ) {
		cout << "It's a leap year." << endl;
	} 
	else { 
		cout << "It's NOT a leap year. " << endl;
	}

	
	// using switch case	
	string postfix;
	
	cout << "here" << endl;

	switch(d.day){
		case 1:
		case 21:
		case 31: 
			postfix = "st";
			break;
	
		case 2:
		case 22:
			postfix = "nd";
			break;

		case 3:
			postfix = "rd";
			break;
		default: 
			postfix = "th";
			break;
	}

	switch(d.month){
		case 1: 
			cout << d.day << "postfix" << " January " << d.year << endl;
			break;
		case 2:
			cout << d.day << "postfix" << " February " << d.year << endl;
			break;
	}


}
