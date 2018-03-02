#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	int S[] = { 2,3,4,5,6,7 };
	int x;
	int location;

	cout << "Write the size of Array :";
	cin >> n;

	cout << "Write the Array number (Do Not Duplication):";
	for (int i = 0; i < n; i++)
		cin >> S[i];

	cout << "Write number to find. :";
	cin >> x;

	location = 0;
	while (location <= n && S[location] != x)
		location++;
	if (location > n)
		location = 0;
	
	cout << "The index of " << x << "is" <<location+1;

	return 0;
}