#include <iostream>

using namespace std;

int main(){

	// left shift by 1
	int result =  2 << 1;
	cout << "2 squared: " << result << endl;

	//pre-increment
	int i{6};
	cout << "i: " << i << endl;
	++i, ++i;
	cout << "i+2: " << (++i, ++i) << endl;
}
