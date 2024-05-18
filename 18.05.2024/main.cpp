#include <iostream>
using namespace std;

int main() {
	int input, perimeter, arr[5];
	perimeter = 0;
	for (int i = 1; i <= 5; i++) {
		cout << "Enter " << i << " side: ";
		cin >> input;
		arr[i] = input;
	}
	for (int i = 1; i <= 5; i++) {
		perimeter += arr[i];
	}
	cout << perimeter;
}