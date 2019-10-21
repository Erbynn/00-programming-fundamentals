#include <unistd.h>
#include <iostream>
<

using namespace std;

int main(){
	char buffer [BUFSIZE];
	ssize_t length;
	
	while( (length = read(0, buffer, BUFSIZE)) > 0){
		write(1, buffer, length);
		cout;
	}

	return(0);	
}
