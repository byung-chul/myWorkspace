#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	int x;
	int s[1000];

	cout << "Please enter the array's length :";
	cin >> n;
	
	for (int x = 0; x < n; x++) {
			cout << "Please enter numbers as sorted :";
			cin >> s[x];
	}

	cout << "Please enter number which you want to find :";
	cin >> x;

	int low = 1;
	int mid;
	int high = n;
	int location = 0;

	while (low <= high && location == 0) {
		mid = (low + high) / 2;
		if (x == s[mid]) {
			location = mid;
		}
		else if (x < s[mid]) {
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}			
	}

	cout << "Where the " << x << " is " << location+1 << "\n";

	return 0;
}