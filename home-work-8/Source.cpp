//Обработка текстовый файлов ( Твой вариант 29 )
#include<iostream>
#include<string>

using namespace std;

void sapxep(string s) {
	int p;
	for (int i = 0; i < s.size(); i++) {
		for (int j = i+1; j < s.size(); j++){
			if (s[i] > s[j]) {
				p = s[i];
				s[i] = s[j];
				s[j] = p;
			}
		}
	}
	cout << s;
	//for (int i = 0; i < s.size(); i++) {
	//	cout << s[i];
	//}
}
int main() {
	string s;
	cout << "enter string: ";
	getline(cin, s);
	sapxep(s);
	return 0;
}


// Задачи для подготовки к экзамену.Структурные числа. Числа Фибоначчи .
#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    cout << "F" << n << " : " << Fibonacci(n);
    return 0;
}