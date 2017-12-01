//Leon Johnson Discrete Math project1 ----- GCD---

#include<iostream>
using namespace std;


int main() {
	
	int a, b; // declares the variables of your GCD

	cout << "Please enter one number: "; cin >> a;

	cout << "Please enter one number smaller than the first number: "; cin >> b;

	while (b > a) {

		cout << "Your number is too big, please try again "; cin >> b; cout<< "\n";
	}// this way b follows the formula "a>b>0"



	if (a == 0 && b == 0) {
		cout << "GCD is undefined" << endl;
		return -1;
	}

	if (b == 0) {

		cout << "gcd is " << a << endl;
		return -1;
	}

	//a = bq +r -- GCD equation

	int r,q;
	
	q = a / b;

	r = a - (b*q);

	
	while (r != 0) {

		// b= rq2 +r2 -- this is the evualtion process for how the formula works.
		
			a=b;
			b=r;
			q = a / b;
			r = a - (b*q);	
	}


	cout << "gcd is: " <<abs(b) << endl; // cout answer
	
	return 0;
}