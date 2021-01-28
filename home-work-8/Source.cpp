#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int Sum = 0;
	int* arr;
	arr = new int[3];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		Sum += arr[i];
	}
	cout << Sum;
	delete[]arr;
	return 0;
}