#include <iostream>

using namespace std;

struct Date{
	int year;
	int month;
	int day;
};


int main(){
	cout << "Enter date with format (dd mm yy): " << endl;
	
	Date usrDate{};
	cin >> usrDate.day >> usrDate.month >> usrDate.year;
	
	Date curDate;
	curDate.year = 2019;
	curDate.month = 10;
	curDate.day = 18;

	if(usrDate.year > curDate.year){
		cout << "Date is after today's " << endl;
	}
	else if(usrDate.year < curDate.year){
                cout << "Date is before today's " << endl;
       	}
        else {
        	if(usrDate.month > curDate.month){
                	cout << "Date after today's" << endl;
		}
		else if(usrDate.month < curDate.month){
			cout << "Date before today's" << endl;
		}
		else{
			if(usrDate.day > curDate.day){
				cout << "Date after today's" << endl;
			}
			else if(usrDate.day < curDate.day){
				cout << "Date before today's" << endl;
			}
			else {
				cout << "Date is today's" << endl;
			}
		}

	}
}
