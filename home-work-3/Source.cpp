﻿//задание ЗАЕМ
#include <iostream>
#include<fstream> //For task 3 and 4
#include<sstream>
#include <math.h>
using namespace std;
int main()
{
	float m, S, p, n, r;
	cout << "caculator monthly payment! " << endl;
	cout << "Enter S: " << endl;
	cin >> S;
	cout << "Enter n: " << endl;
	cin >> n;
	cout << "Enter p: " << endl;
	cin >> p;

	r = p / 100;

	m = float(S * r * pow(1 + r, n)) / (12 * ((pow(1 + r, n) - 1)));

	cout << "monthly payment: " << m << endl;

	system("pause");
	return 0;
}



//задание ССУДА
#include<iostream>
#include<fstream> //For task 3 and 4
#include<sstream>
#include <math.h>

using namespace std;
int main()
{
	double p, s, m, n, m0, r;

	cout << "Please input a loan (S): ";
	cin >> s;
	cout << "Please input monthly payment (m): ";
	cin >> m;
	cout << "Please input loan for how many year (n): ";
	cin >> n;

	for (int i = 1; i < 10000; i++)
	{
		p = (double)i / 100;
		r = p / 100;
		m0 = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
		if (m0 > m)
		{
			break;
		}
	}

	cout << "The interest rate (p): " << p << endl;

	system("pause");
	return 0;
}



//#include<iostream>
#include<fstream> //For task 3 and 4
#include<sstream>

using namespace std;
int main()
{
	fstream file;
	file.open("text.txt");
	if (!file)
	{
		cerr << "file cannot be opened!";
		return 1;
	}

	while (!file.eof())
	{
		char c;
		file.get(c);
		cout << c;
	}
	cout << endl;

	file.close();

	system("pause");
	return 0;
}



//

#include<iostream>
#include<fstream> //For task 3 and 4
#include<sstream>

using namespace std;
int main()
{
	string data;
	fstream file;

	file.open("text.txt");
	if (!file)
	{
		cerr << "file cannot be opened!" << endl;
		return 1;
	}

	while (!file.eof())
	{
		getline(file, data);

		for (int i = 0; i < data.size(); i++)
		{
			if (isdigit(data[i]))
			{
				cout << data[i];
			}
		}
	}

	file.close();
	system("pause");
	return 0;
}


//


#include<iostream>
#include<sstream>

using namespace std;
int main()
{
	int i, j;
	char data[30];


	cout << "Please input 30 ramdom digits: ";
	for (int i = 0; i < 30; i++)
	{
		cin >> data[i];
	}
	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 30 - i - 1; j++)
		{
			if ((int)data[j] > (int)data[j + 1])
			{
				char temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 30; i++)
	{
		cout << data[i] << "\t";
	}

	system("pause");
	return 0;
}
