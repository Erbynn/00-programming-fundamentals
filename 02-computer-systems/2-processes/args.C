#include<iostream>
#include<vector>

using namespace std;

int main( int argc, char *argv[]){	
	
	vector<string> argument(argv, argv + argc);	// better than array since just wanna acess var without skipping to another
	
	// argc ... arg counter

	for( auto arg : argument ){	
		cout << arg << endl;
	}
}
