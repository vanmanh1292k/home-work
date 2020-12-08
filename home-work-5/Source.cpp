#include<iostream>

using namespace std;

int euclid(int a, int b)
{
	return (b == 0) ? a : euclid(a, a % b);
}


int main() {
	int a, b;
	cin >> a >> b;
	cout << "Greatest common divisor: " << euclid(a, b) << endl;

	system("pause");
	return 0;
}
//