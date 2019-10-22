#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argcv[]){
	const char *ckey="COLOR";
        const char *cvalue="blue";

        int retvalue = setenv(ckey, cvalue, 0);
        cout << retvalue << endl;

        cout << getenv(ckey) << endl;

	cout << "done" << endl;

}
