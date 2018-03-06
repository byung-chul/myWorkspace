#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	int s[1000];

	cout << "Please enter number(non negative interger) :";
	cin >> n;
	
	s[0] = 0;
	s[1] = 1;
	for (int i = 2; i <= n; i++) {
		s[i] = s[i - 1] + s[i - 2];
	}

	cout << "The Fibonacci number of " << n << " is " << s[n] << "\n";

	return 0;
}