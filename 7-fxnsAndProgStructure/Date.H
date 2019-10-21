#include <iostream>

using namespace std;

struct Date{
	int year;
	int month;
	int day;
};


int main(){
	cout << "Enter date with format ddmmyy: " << endl;

	Date usrDate{};
	cin >> usrDate.day >> usrDate.month >> usrDate.year;

	Date curDate;
	curDate.year = 2019;
	curDate.month = 10;
	curDate.day = 18;

	if(usrDate.year > curDate.year){
		cout << "Date is after today's" << endl;
	}
	else if(usrDate.year < curDate.year){
                cout << "Date is before today's" << endl;
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


	if(usrDate.year % 4 == 0){
		if(usrDate.year % 100 == 0){
			if(usrDate.year % 4 == 0){
				cout << "leap year...yaaye" << endl;
			}
			else{
				cout << "not leap year...sheesh" << endl;
			}
		}
		else{
			cout << "leap year...tadaa" << endl;
		}
	}
	else{ 
		cout<<"not leap year...yikes! :(" << endl;
	}


	string postfx;		// cannot be declared after the setup
	switch(usrDate.day){
		case 1:
		case 21:
		case 31: postfx = "st";
			 break;
		case 2:
		case 22: postfx = "nd";
			 break;
		case 3:
		case 23: postfx = "rd";
			 break;
		default: postfx = "th";
			 break;
	}
	

	int year = usrDate.year;
	int day = usrDate.day;

	switch(usrDate.month){
                        case 1: cout << day << postfx << " January " << year << endl;
                                break;
                        case 2: cout << day << postfx << " February " << year << endl;
                                break;
                        case 3: cout << day << postfx << " March " << year << endl;
                                break;
                        case 4: cout << day << postfx << " April " << year << endl;
                                break;
                        case 5: cout << day << postfx << " May " << year << endl;
                                break;
                        case 6: cout << day << postfx << " June " << year << endl;
                                break;
                        case 7: cout << day << postfx << " July " << year << endl;
                                break;
                        case 8: cout << day << postfx << " August " << year << endl;
                                break;
                        case 9: cout << day << postfx << " September " << year << endl;
                                break;
                        case 10: cout << day << postfx << " October " << year << endl;
                                break;
                        case 11: cout << day << postfx << " November " << year << endl;
                                break;
                        case 12: cout << day << postfx << " December " << year << endl;
                                break;
                        default: cout << "Sorry...invalid month" << endl;
                                break;
                }


}


