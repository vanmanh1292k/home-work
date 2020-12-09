////4.1
//#include<iostream>
//#include<stdio.h>
//#include<fstream>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//	int a[10];
//	ofstream fileOutput("c");
//
//	if (fileOutput.fail())
//	{
//		cout << "File cannot open!" << endl;
//		return 0;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Please input number " << i + 1 << ":";
//		cin >> a[i];
//		fileOutput << a[i];
//		fileOutput << "\t";
//	}
//
//	fileOutput.close();
//
//	ifstream fileInput("D:\\project\\c");
//	string data;
//
//	if (fileInput.fail())
//	{
//		cout << "Cannot open this file!" << endl;
//		return 0;
//	}
//
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		sum += a[i];
//	}
//	cout << "Sum of file: " << sum << endl;
//	fileInput.close();
//
//	system("pause");
//	return 0;
//}





////4.2
//#include <iostream>
//
//using namespace std;
//int sign(double x)
//{
//	if (x > 0)
//		return 1;
//	else if (x == 0)
//		return 0;
//	else
//		return -1;
//}
//int main()
//{
//	double x;
//	cout << "Enter x = "; cin >> x;
//	cout << "Sign(x) = " << sign(x) << endl;
//	return 0;
//}


////4.3
//#include<iostream>
//#define pi 3.14
//using namespace std;
//
//int squareRectangle(int a, int b)
//{
//	return a * b;
//}
//
//float squareTriangle(int a, int h)
//{
//	return (float)1 / 2 * h * a;
//}
//
//double squareCircle(int r)
//{
//	double Pi = 3.14;
//	return Pi * r * r;
//}
//
//int main()
//{
//	int choose;
//	cout << "What area do you want calculate?" << endl;
//	cout << "1. Rectangle" << endl;
//	cout << "2. Triangle" << endl;
//	cout << "3. Circle" << endl;
//
//	cout << "Please input your answer (1/2/3): ";
//	cin >> choose;
//
//	switch (choose)
//	{
//	case 1:
//	{
//		int a, b, s;
//		cout << "Please input length of Rectangle: ";
//		cin >> a;
//		cout << "Please input width of Rectangle: ";
//		cin >> b;
//		cout << "Square of Rectangle = " << squareRectangle(a, b) << endl;
//		break;
//	}
//	case 2:
//	{
//		int a, h;
//		cout << "Please input high of triangle: ";
//		cin >> h;
//		cout << "Please input triangle bottom: ";
//		cin >> a;
//		cout << "Square of triangle = " << squareTriangle(a, h) << endl;
//		break;
//	}
//	case 3:
//	{
//		int r;
//		cout << "Please input radius of circle: ";
//		cin >> r;
//		cout << "Square of Circle = " << squareCircle(r) << endl;
//		break;
//	}
//	default:
//		break;
//	}
//
//	system("pause");
//	return 0;
//}



////4.4
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int i, j;
//	for (i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 20; j++)
//		{
//			if (i > 0 && i < 7 && j >= 0 && j < 8)
//			{
//				cout << " * ";
//			}
//			else
//			{
//				cout << "___";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}




////4.5
//#include <stdio.h>
//#include <math.h>
//#define WIDTH 60
//#define HEIGHT 20
//#define X WIDTH/2
//#define Y HEIGHT/2
//#define XMAX WIDTH-X-1
//#define XMIN -(WIDTH-X)
//#define YMAX HEIGHT-Y
//#define YMIN -(HEIGHT-Y)+1
//
//char grid[HEIGHT][WIDTH];
//
//int plot(int x, int y);
//void init_grid(void);
//void show_grid(void);
//
//int main()
//{
//	float x, y;
//	init_grid();
//	for (x = -3.14156; x <= 3.14156; x += 0.1)
//	{
//		y = sin(x);
//		plot(rintf(x * 10), rintf(y * 8)); // phóng to chieu x: 10 lan , chieu y: 8 lan
//	}
//	show_grid();
//	return 0;
//}
//
//
//int plot(int x, int y)
//{
//	if (x > XMAX || x < XMIN || y > YMAX || y < YMIN)
//		return(-1);
//
//	grid[Y - y][X + x] = '*'; // ve do thi sin
//	return(1);
//}
//
//
//void init_grid(void)
//{
//	int x, y;
//
//	for (y = 0; y < HEIGHT; y++)
//		for (x = 0; x < WIDTH; x++)
//			grid[y][x] = ' '; // ve không gian bieu do
//	/* draw the axis */
//	for (y = 0; y < HEIGHT; y++)
//		grid[y][X] = '|'; // ve truc dung
//	for (x = 0; x < WIDTH; x++)
//		grid[Y][x] = '-'; // ve truc ngang
//	grid[Y][X] = '+';
//}
//
//
//void show_grid(void)
//{
//	int x, y;
//
//	for (y = 0; y < HEIGHT; y++)
//	{
//		for (x = 0; x < WIDTH; x++)
//			putchar(grid[y][x]);
//		putchar('\n'); // xuong dong
//	}
//}



////4.6
//#include <iostream>
//#include <cstring>
//#include <conio.h>
//#define MAX 35
//using namespace std;
//
//int main() {
//	int len, i, k, a[MAX];
//	char lama[MAX];
//	cout << "Roman numerals ---- I V X L C D M" << endl;
//	cout << "Enter Roman numerals: ";
//	cin.getline(lama, 20);
//	len = strlen(lama);
//	for (i = 0; i < len; i++) {
//		if (lama[i] == 'I')
//			a[i] = 1;
//		else if (lama[i] == 'V')
//			a[i] = 5;
//		else if (lama[i] == 'X')
//			a[i] = 10;
//		else if (lama[i] == 'L')
//			a[i] = 50;
//		else if (lama[i] == 'C')
//			a[i] = 100;
//		else if (lama[i] == 'D')
//			a[i] = 500;
//		else if (lama[i] == 'M')
//			a[i] = 1000;
//		else
//		{
//			cout << "Input is false" << endl;
//			break;
//		}
//	}
//	k = a[len - 1]; // gan k bang gia trọ ki tu lâm dung cuoi
//	for (i = len - 1; i > 0; i--) // cho i chay tu cuoi len dau
//	{
//		if (a[i] > a[i - 1])
//			k = k - a[i - 1];
//		else if (a[i] == a[i - 1] || a[i] < a[i - 1])
//		{
//			k = k + a[i - 1];
//		}
//	}
//	cout << "\nValue = " << k << endl;
//	
//	return 0;
//}



////4.7
//#include <iostream> 
//
//using namespace std;
//
//int main() {
//	int m, s = 1, i, c, j;
//	cout << "Input m = "; cin >> m;
//	cout << "Input i = "; cin >> i;
//	cout << "Input c = "; cin >> c;
//	cout << "Random: ";
//	for (j = 0; j < 100; j++) 
//	{
//		s = (m * s + i) % c;
//		cout << s << "  ";
//	}
//	return 0;
//}


////4.8
//#include <iostream>
//#include <iomanip>
//#define MAX 35
//using namespace std;
//
//
//void InputMatrix(double a[][MAX], int x, int y) 
//{
//	int i, j;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			cout << "[" << i + 1 << "," << j + 1 << "] = "; cin >> a[i][j];
//		}
//	}
//}
//
//
//void OutputMatrix(double a[][MAX], int x, int y) {
//	int i, j;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void NhanMatrix(double a[][MAX], double b[][MAX], double c[][MAX], int x, int y, int z) {
//	int i, j, k;
//	double sum;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < z; j++) {
//			sum = 0;
//			for (k = 0; k < y; k++) {
//				sum = sum + a[i][k] * b[k][j];
//			}
//			c[i][j] = sum;
//		}
//	}
//}
//
//void MaxMinA(double a[][MAX], int x, int y) {
//	double max = a[0][0];
//	double min = a[0][0];
//	int i, j, m = 0, n = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			if (j == 0) 
//			{
//				if (a[i][j] > max) 
//				{
//					max = a[i][j];
//					m = i;
//				}
//				if (a[i][j] < min) 
//				{
//					min = a[i][j];
//					n = i;
//				}
//			}
//		}
//	}
//	cout << "1." << endl;
//	cout << "The seller - prodavets " << m + 1 << " earned the most money = " << max << endl;
//	cout << "The seller - prodavets " << n + 1 << " earned the least money = " << min << endl;
//	cout << endl;
//}
//
//void MaxMinB(double a[][MAX], int x, int y) {
//	double max = a[0][1];
//	double min = a[0][1];
//	int i, j, m = 0, n = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			if (j == 1) {
//				if (a[i][j] > max) {
//					max = a[i][j];
//					m = i;
//				}
//				if (a[i][j] < min) {
//					min = a[i][j];
//					n = i;
//				}
//			}
//		}
//	}
//	cout << "The seller - prodavets " << m + 1 << " gets the most commissions = " << max << endl;
//	cout << "The seller - prodavets " << n + 1 << " gets the least commissions = " << min << endl;
//}
//
//void SumA(double a[][MAX], int x, int y) {
//	double s = 0;
//	int i, j;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			if (j == 0) {
//				s += a[i][j];
//			}
//		}
//	}
//	cout << "Total money earned S1 = " << s << endl;
//}
//
//
//void SumB(double a[][MAX], int x, int y) {
//	double s = 0;
//	int i, j;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			if (j == 1) {
//				s += a[i][j];
//			}
//		}
//	}
//	cout << "Total money commission S2 = " << s << endl;
//}
//
//
//void SumC(double a[][MAX], int x, int y) {
//	double s = 0;
//	int i, j;
//	for (i = 0; i < x; i++) {
//		double h = 2 * a[i][0];
//		for (j = 0; j < y; j++) {
//			h -= a[i][j];
//		}
//		s += h;
//	}
//	cout << "Total money passed through the hands of sellers S3 = " << s << endl;
//}
//
//
//int main() {
//	double a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
//	int m = 3, n = 4, p = 2;
//	/*cout << "Input m = "; cin >> m;
//	cout << "Input n = "; cin >> n;
//	cout << "Input p = "; cin >> p;*/
//	cout << "Enter Matrix A:" << endl;
//	InputMatrix(a, m, n);
//	cout << "Enter Matrix B:" << endl;
//	InputMatrix(b, n, p);
//	NhanMatrix(a, b, c, m, n, p);
//	cout << "Matrix A:" << endl;
//	OutputMatrix(a, m, n);
//	cout << "Matrix B:" << endl;
//	OutputMatrix(b, n, p);
//	cout << "C = A x B " << endl;
//	OutputMatrix(c, m, p);
//	MaxMinA(c, m, p);
//	MaxMinB(c, m, p);
//	SumA(c, m, p);
//	SumB(c, m, p);
//	SumC(c, m, p);
//	return 0;
//}


////4.9
//#include <iostream>
//#include <cstring>
//#include <algorithm> //copy arr
//
//using namespace std;
//const char MAX = 50;
//const char C55 = 55;
//const char C48 = 48;
//
//
//void Conver10ToAll(int n, int b) { // Dec to All, n la so, con b la he co so can chuyen sang
//	if (n > 0 && b >= 2 && b <= 16) {
//		int i;
//		char arr[MAX];
//		int count = 0; // cho bien dem = 0
//		int m;
//		while (n > 0) {
//			if (b > 10) 
//			{
//				m = n % b;
//				if (m >= 10) 
//				{
//					arr[count] = (char)(m + C55);
//					count++;
//				}
//				else {
//					arr[count] = (char)(m + C48);
//					count++;
//				}
//			}
//			else 
//			{
//				arr[count] = (char)((n % b) + C48);
//				count++;
//			}
//			n = n / b;
//		}
//		for (i = count - 1; i >= 0; i--) 
//		{
//			cout << arr[i];
//		}
//		cout << endl;
//	}
//	else {
//		cout << "Input is false" << endl;
//	}
//}
//
//void DaoNguoc(char a[], int n) {
//	int i;
//	for (i = 0; i < n / 2; i++) {
//		int temp = a[i];
//		a[i] = a[n - 1 - i];
//		a[n - 1 - i] = temp;
//	}
//}
//
//void CharToInt(char a[], int b[], int n) {
//	int i;
//	for (i = 0; i < n; i++) {
//		if (a[i] == 'A')
//			b[i] = 10;
//		else if (a[i] == 'B')
//			b[i] = 11;
//		else if (a[i] == 'C')
//			b[i] = 12;
//		else if (a[i] == 'D')
//			b[i] = 13;
//		else if (a[i] == 'E')
//			b[i] = 14;
//		else if (a[i] == 'F')
//			b[i] = 15;
//		else
//			b[i] = (int)a[i] - 48;
//	}
//}
//
//double ConvertAllTo10(int a[], int n, int x) {
//	int i;
//	double s = 0;
//	for (i = 0; i < n; i++) {
//		s += a[i] * pow(x, i);
//	}
//	return s;
//}
//
//void In(char a[], int n) {
//	int i;
//	for (i = 0; i < n; i++) {
//		cout << a[i];
//	}
//}
//
//int main() {
//	int a, x, y, len;
//	char k[MAX], kin[MAX];
//	int l[MAX];
//	double s;
//	cout << "    A     =>    B" << endl;
//	cout << "      x           y" << endl;
//	cout << "Enter x (2 <= x <= 16) " << endl;
//	cout << "x = "; cin >> x;
//	if (x >= 2 && x <= 16) {
//		if (x == 10) {
//			cout << "\nEnter A (A > 0)" << endl;
//			cout << "A = "; cin >> a;
//			cout << "\nEnter y (2 <= x <= 16) " << endl;
//			cout << "y = "; cin >> y;
//			cout << endl;
//			cout << "    " << a << "     =     ";
//			Conver10ToAll(a, y);
//			cout << "      " << x << "             " << y << endl;
//		}
//		else {
//			cout << "\nEnter A (A > 0)" << endl;
//			cout << "A = ";
//			cin.ignore();
//			cin.getline(k, 30);
//			len = strlen(k);
//			copy_n(k, len, kin); // copy arr
//			DaoNguoc(k, len);
//			CharToInt(k, l, len);
//			cout << "\nEnter y (2 <= x <= 16) " << endl;
//			cout << "y = "; cin >> y;
//			s = ConvertAllTo10(l, len, x);
//			cout << endl;
//			cout << "    ";
//			In(kin, len);
//			cout << "     =     ";
//			Conver10ToAll(s, y);
//			cout << "      " << x << "             " << y << endl;
//		}
//	}
//	else {
//		cout << "Input is false" << endl;
//	}
//	return 0;
//}
