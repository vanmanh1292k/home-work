
//#include<iostream>
//#include<math.h>
//using namespace std;

//задание ИМЯ
//int main()
//{
//	cout << "My name is Manh, Nguyen Van Manh!" << endl;
//
//	system("pause");
//	return 0;
//}



//задание АРИФМЕТИКА
//int main()
//{
//	float a, b;
//	
//	cout << "First number: ";
//	cin >> a;
//
//	cout << "Second number: ";
//	cin >> b;
//
//	cout << "Sum: " << a + b << endl;
//	cout << "Subtract: " << a - b << endl;
//	cout << "Multipl: " << a * b << endl;
//	
//	if (b == 0) {
//		cout << "Div: Error!";
//	} else {
//		cout << "Div: " << a / b << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//задание УРАВНЕНИЕ
//int main()
//{
//	float b, c, x;
//	cout << "Input b = ";
//	cin >> b;
//	cout << "Input c = ";
//	cin >> c;
//	if (b == 0) {
//		if (c == 0) {
//			cout << "Innumerable roots" << endl;
//		}
//		else {
//			cout << "Non root" << endl;
//		}
//	}
//	else {
//		cout << "One root: x = " << -c / b << endl;
//	}
//	return 0;
//}



//задание ЁЩЕ УРАВНЕНИЕ
//int main()
//{
//	double a, b, c, x, x1, x2, y;
//	cout << "The quadratic equation 2: ax^2 + bx + c = 0" << endl << "Input a b c = ";
//	cin >> a >> b >> c;
//	if (a == 0) {
//		if (b == 0) {
//			if (c == 0)
//				cout << "Innumerable roots" << endl;
//			else {
//				cout << "Non root" << endl;
//			}
//		}
//		else {
//			x = -c / b;
//			cout << "One root: x =" << x << endl;
//		}
//	}
//	else {
//		y = b * b - 4 * a * c;
//		if (y < 0)
//			cout << "Non root" << endl;
//		else if (y == 0) {
//			x = -b / (2 * a);
//			cout << "Double roots: x1 = x2 = " << x << endl;
//		}
//		else {
//			x1 = (-b - sqrt(y)) / (2 * a);
//			x2 = (-b + sqrt(y)) / (2 * a);
//			cout << "Two roots:" << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
//		}
//	}
//	return 0;
//}


//задание Лампа со шторой
//int main()
//{
//	bool window, day, lamp;
//
//	cout << "Window open(1) or close(0)? (0/1): ";
//	cin >> window;
//	cout << "Day(1) or night(0)? (0/1): ";
//	cin >> day;
//	cout << "Lamp turn on(1) or turn off(0)? (0/1): ";
//	cin >> lamp;
//
//	if ((window && day) || lamp)
//	{
//		cout << "The room is light" << endl;
//	}
//	else
//	{
//		cout << "This room so dark" << endl;
//	}
//
//	system("pause");
//	return 0;
//}
