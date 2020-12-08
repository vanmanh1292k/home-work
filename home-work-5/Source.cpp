//#include<iostream>
//
//using namespace std;
//
////Algorithm Eculide
//int euclid(int a, int b)
//{
//
//	return (b == 0) ? a : euclid(b, a % b);
//}
//
//int main()
//{
//	int a, b;
//	cout << "Please input first number: ";
//	cin >> a;
//	cout << "Please input second number: ";
//	cin >> b;
//
//	cout << "Greatest common divisor: " << euclid(a, b) << endl;
//
//	system("pause");
//	return 0;
//}



//#include<iostream>
//
//using namespace std;
//
//int main() {
//	bool a[100];
//	int n;
//	cin >> n;
//	for (int i = 0; i <= n; i++) {
//		a[i] = true;
//	}
//
//	for (int i = 2; i <= n; i++) {
//		if (a[i] == true) {
//			for (int j = 2 * i; j <= n; j += i) {
//				a[j] = false;
//			}
//		}
//	}
//
//	for (int i = 2; i <= n; i++) {
//		if (a[i] == true) {
//			cout << i << " ";
//		}
//	}
//	system("pause");
//}