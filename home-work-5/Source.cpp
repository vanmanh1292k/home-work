////Формула Эвклида
//
//#include<iostream>
//using namespace std;
//
//
//int euclid(int a, int b){
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






////Решето Эратосфена
//
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
//	for (int i = 2; i <= n; i++) {
//		if (a[i] == true) {
//			for (int j = 2 * i; j <= n; j += i) {
//				a[j] = false;
//			}
//		}
//	}
//	for (int i = 2; i <= n; i++) {
//		if (a[i] == true) {
//			cout << i << " ";
//		}
//	}
//	system("pause");
//}





////Обработка текстовый файлов ( Твой вариант 25 )
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void dem(string s, string n) {
//	int t = 0;
//	for (int i = 0; i < s.size(); i++) {
//		int k = 0;
//		for (int j = 0; j < n.size(); j++) {
//			if (s[i] == n[0] && s[i+j] == n[j]) {
//				k++;
//			}
//		}
//		if (k == n.size()) {
//			t++;
//		}
//		else {
//			k = 0;
//		}
//	}
//	cout << "number of second string occurrences in first string: " << t;
//}
//int main() {
//	string s, n;
//	cout << "enter the first string: ";
//	getline(cin, s);
//	cout << "enter the second string: ";
//	getline(cin, n);
//	dem(s, n);
//	return 0;
//}