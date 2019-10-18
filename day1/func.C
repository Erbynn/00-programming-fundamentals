#include <iostream>

/* 
This program takes two numbers as input and prints the sum three times
Date: Thurs, 17th Oct, 2019
*/

int getnum(){
	int num;
	std::cin >> num;
	return num;
}
	


int main(){
	std::cout << "Enter two number: \n";
	int sum;
	int x = getnum();
	int y = getnum();
	
	sum = x + y;
	
	int counter = 0;
	while(counter < 3){
		std::cout << "Sum: " << sum << std::endl;
		counter++;
	}
	}


