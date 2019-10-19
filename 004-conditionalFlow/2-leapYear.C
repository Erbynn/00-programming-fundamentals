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
	cin >> d.day >> d.month >> d.year ;

	if(d.year % 4 == 0){
		if(d.year % 100 == 0){
			if(d.year % 4 == 0){
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

}

