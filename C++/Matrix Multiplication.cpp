#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	int a[100][100];
	int b[100][100];
	int c[100][100];

	cout << "Please enter Matrix's dimension. :";
	cin >> n;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cout << "Please enter Matrix A's row member";
			cin >> a[y][x];
		}
	}

	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cout << "Please enter Matrix B's row member";
			cin >> b[y][x];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c[i][j] = 0;
			for (int k = 0; k < n; k++) {
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}

	for (int e = 0; e < n; e++) {
		for (int f = 0; f < n; f++) {
		
			if (f == n - 1)
				cout << c[e][f] <<"\n";
			else
				cout << c[e][f] << ", ";
		}
	}
	return 0;
}