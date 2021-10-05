#include <iostream>
using namespace std;

bool isPrime(int c) {
	for(int i=2;i<=c/2;i++) {
		if(c%i==0) {
			return false;
		}
	}
	return true;
}

bool isMultiple(int c) {
	if(c%5==0) {
		return true;
	}
	return false;
}

int main() {
	int a=0,b=1,c;
	//hard coding the range of fibonaaci series to 20 values
	for(int i=1;i<=20;i++) {
		c=a+b;
		a=b;
		b=c;
		//checking on whether the number is prime or it is a multiple of 5 or not
		if(isPrime(a) || isMultiple(a)) {
			cout<<0<<' ';
		}
		else {
			cout<<a<<' ';
		}
	}
}
