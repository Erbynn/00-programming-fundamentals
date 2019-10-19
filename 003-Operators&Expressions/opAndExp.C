#include <iostream>

using namespace std;

int main(){

	// left shift by 1
	int result =  2 << 1;
	cout << "2 squared: " << result << endl;


	// pre-increment
	int i{6};
	cout << "i: " << i << endl;
	// ++i, ++i
	cout << "i+2: " << (++i, ++i) << endl;


	// *= assignment operator
	int num{4}; 
	num *= 6, cout <<"num: " << num << endl; // comma operator usage(ie, doesnt one thing one at a time 
 
	
	// right associative of assignment operator
	int sum, sigma;
	int total = sum = sigma = 3;	// better way of doing int i=3, int j=3, int k=3;
	cout << "sum: " << sum << " sigma: " << sigma << " total: " << total << endl;
	

	// type casting
	float fnum{5.3f};
	cout << "fnum: " << fnum << endl;

	//int *inumptr;
	//inumptr = dynamic_cast<int*>(&fnum);	//not workiing
	//cout << "ptr: " << *inumptr << endl;

	auto inum = (int) fnum;
	cout << "inum: " << inum << endl;

}
