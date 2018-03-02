#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	float S[] = { 2,3,4,5,6,7 };
	float total;

	cout << "Write the size of Array :";
	cin >> n;

	cout << "Write the Array number (Do Not Duplication):";
	for (int i = 0; i < n; i++)
		cin >> S[i];

	total = 0;
	for (int m = 0; m < n; m++)
		total += S[m];

	cout << "Sum of Array is" << total;
	return 0;
}