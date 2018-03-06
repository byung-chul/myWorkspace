#include<iostream>

using namespace std;

int fib(int x) {
	if (x <= 1) {
		return x;
	}
	else {
		return fib(x - 1) + fib(x - 2);
	}
}

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	int x ;

	cout << "Please enter number :";
	cin >> n;
	
	cout << "The Fibonacci number of " << n << " is " << fib(n) << "\n";

	return 0;
}