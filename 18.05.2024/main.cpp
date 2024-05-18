#include <iostream>
using namespace std;

int main() {
	int input, sum, arr[7];
	sum = 0;
	
	for (int i = 1; i <= 6; i++) {
		cout << "Enter profit for " << i << " month: ";
		cin >> input;
		arr[i] = input;
	}
	for (int i = 1; i <= 6; i++) {
		sum += arr[i];
	}

	cout << sum << endl;
}