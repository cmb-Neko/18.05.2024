#include <iostream>
using namespace std;

int main() {
	int arr[10];

	for (int i = 1; i <= 10; i++) {
		arr[i] = i;
	}
	for (int i = 10; i >= 1; i--) {
		cout << arr[i];
	}
}