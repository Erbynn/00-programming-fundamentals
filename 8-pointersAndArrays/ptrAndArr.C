#include <iostream>

using namespace std;

int main(){
	int arr[] = {2, 4, 6};
	cout << &arr[0] << endl;

	int *p{arr};
	cout << p << endl;
	
	// equal
	cout << *arr << endl;
	cout << *p << endl;	
	
}
