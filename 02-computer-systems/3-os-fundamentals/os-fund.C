#include <iostream>
#include <sys/stat.h>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]){	
	struct stat sb;

	if(argc != 2){	
		cerr << "usage: " << argv[0] << " <pathname> " << endl;
		exit(1);
	}	
	
	// if fails
	if(lstat(argv[1], &sb) == -1){
		perror("lstat"); //print error
		exit(1);
	}
	
	cout << "File type: ";

	switch(sb.st_mode & S_IFMT){	
		case S_IFDIR: cout << "Directory" << endl;
			break;
		case S_IFLNK: cout << "Symbolic link" << endl;
			break;
		case S_IFREG: cout << "Regular file" << endl;
			break;
		default: cout << "Maybe something else" << endl;
	}

	
	cout << setw(14) << "inode number: " << sb.st_ino << endl;
	cout << setw(14) << "Mode: " << sb.st_mode << endl;
	cout << setw(14) << "Owner: " << sb.st_uid << endl;
	cout << setw(14) << "Last access time: " << sb.st_atime << endl;

	exit(0);
}
