#include <iostream>
#include <Date.H>

using namespace std;

int main(){	
	Date userDate{};

	userDate = getDate();
	prettPrint(userDate);	
}
