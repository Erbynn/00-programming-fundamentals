#include <iostream>

using namespace std;

int main(){
	int i{2};
	cout << "i: " << i << endl;
	cout << "i++: " << i++ << endl;
	cout << "i: \n" << i << endl;
	cout << "++i" << ++i << endl;
	cout << "i" << i << endl;

	int total = 5 >> 1;
	cout << "5 right shifted by 1: " << total << endl;
	int total2{-5};
	cout << "~5: " << total2 << endl;
	
	//int c = 5;
	//c >> 3;	//doesnt work with statement on left side
	//cout << "c: " << c << endl;

	int h{3};
	int j{2};
	int k = j++ * ++h;
	cout << k << endl;

	float p{5.40};
	int f = static_cast<int>(p);;
	cout << p << " " << f << endl;

	int p2{6};
	float f2 = static_cast<float>(p2); // not working
	cout << p2 << " " << f2 << endl;

	float foo {3.4f};
        double a = double {foo}; // fxnal casting works on promotion, not demotion
	cout << "casted: " << a << endl;
        
	//int aa = 5;
        //float bb = float {a}; // fxnal cast failed on demotion or narrowing
        //cout << aa << endl;

}
