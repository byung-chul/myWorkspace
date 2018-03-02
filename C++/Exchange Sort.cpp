#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	float S[1000];
	int a;

	cout << "Write the size of Array :";
	cin >> n;

	cout << "Write the Array number (Do Not Duplication):";
	for (int i = 0; i < n; i++)
		cin >> S[i];

	for (int m = 0; m < n; m++){
		for (a = m + 1; a < n; a++) {
			if (S[a] < S[m]) {
				float temp = S[a];
				S[a] = S[m];
				S[m] = temp;
				for (int j = 0; j < n; j++){
				}
			}
		}
	}		
	cout << "Sorted Array is" << endl;
	for (int j = 0; j < n; j++)
		if (j != n - 1)
			cout << S[j] << ",";
		else
			cout << S[j] << endl;
	return 0;
}