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




//// Задачи для подготовки к экзамену. файлы.
//#include<iostream>
//#include<stdio.h>
//#include<fstream>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//	string a[1000];
//	int n;
//	cout << "enter the line number: ";
//	cin >> n;
//	ofstream fileOutput("c");
//
//	if (fileOutput.fail())
//	{
//		cout << "File cannot open!" << endl;
//		return 0;
//	}
//
//	cout << "Please enter your text " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		fileOutput << a[i];
//		fileOutput << "\t";
//	}
//
//	fileOutput.close();
//
//	ifstream fileInput("C:\\Users\\Ngvmanh129\\source\\repos\\home-work\\home-work-6\\c");
//	string data;
//
//	if (fileInput.fail())
//	{
//		cout << "Cannot open this file!" << endl;
//		return 0;
//	}
//
//	string s;
//	int t = 0;
//	for (int i = 0; i < n; i++){
//		s = a[i];
//		int k = 1;
//		for (int j = 0; j < s.size(); j++) {
//			if (s[j] < s[j + 1]) {
//				k++;
//			}
//		}
//		if (k == s.size()) {
//			t++;
//		}
//		else {
//			k = 1;
//		}
//	}
//	cout << "Number of lines of text characters incrementally: "<< t << endl;
//
//	fileInput.close();
//
//	system("pause");
//	return 0;
//}


//// Задачи для подготовки к экзамену.Структурные числа. Числа Фибоначчи .
//#include <iostream>
//using namespace std;
//int Fibonacci(int n)
//{
//    if (n == 1 || n == 2)
//        return 1;
//    return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//    int n;
//    cout << "nhap n: ";
//    cin >> n;
//    cout << "F" << n << " : " << Fibonacci(n);
//    return 0;
//}
