#include <iostream>

using namespace std;

int d = 0;
void Tower(int n, char a, char b, char c) {
	if (n == 1) {
		if (d % 5 == 0) cout << endl;
		cout << "\t" << a << "=>" << c << " "; d++; // neu n = 1 thi dich chuyen a => c
		return; 
	}
	// neu n > 1 thi thuc hien lan luot cac buoc
	Tower(n - 1, a, c, b); // dich chuyen n-1 dia tu a => b
	Tower(1, a, b, c); // dich chuyen dia thu n tu a => c
	Tower(n - 1, b, a, c); // dich chuyen n-1 dia tu b => c
}
int main() {
	char a = '1', b = '2', c = '3';
	int n;
	cout << "Enter n = ";
	cin >> n;
	Tower(n, a, b, c);
}