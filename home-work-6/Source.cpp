//// Задачи для подготовки к экзамену. Ряды .
//#include <iostream>
//
//using namespace std;
//
//double ConvertAllTo10(int arr[], int n) {
//	double s = 0;
//	for (int i = 0; i < n; i++) {
//		s += arr[i] * pow(5, n - i - 1);
//	}
//	return s;
//}
//
//
//void Convert10ToAll(double c, int arr[], int m) {
//	int x;
//	for (int i = 0; i < m; i++) {
//		if (c  == 0) {
//			return;
//		}
//		else {
//			x = c / pow(2, i);
//			arr[i] = x % 2;
//		}
//	}
//	for (int i = m-1; i >= 0; i--) {
//		cout << arr[i];
//	}
//}
//
//int main() {
//	int arr1[100];
//	int arr2[100];
//	int n;
//	double s ;
//	cout << "Enter the number of elements in the array: ";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << "element ( 0<= x <=4 )  " << i << ":";
//		cin >> arr1[i];
//	}
//	cout << "base 5: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr1[i];
//	}
//	s = ConvertAllTo10(arr1, n);
//	cout << endl << "base 10: " << ConvertAllTo10(arr1, n) << endl;
//
//	int m;
//	cout << "m=3(s<8), m=4(s<16), m=5(s<32), m=6(s<64), m=7(s<128), m=8(s<256), m=9(s<512)...." << endl;
//	cin >> m;
//	cout << "base 2: ";
//	Convert10ToAll(s,arr2,m);
//
//	return 0;
//}
