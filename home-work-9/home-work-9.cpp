//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void func(const int& number) {
//    int bik, korova, input;
//    do {
//        cin >> input;
//        bik = korova = 0;
//
//        for (int i = 1000; i != 0; i /= 10) {
//            if ((input / i % 10) == (number / i % 10))
//                bik++;
//        }
//        for (int i = 1000; i != 0; i /= 10) {
//            for (int j = 1000; j != 0; j /= 10)
//            {
//                if (i != j && (input / i % 10) == (number / j % 10))
//                    korova++;
//            }
//        }
//        cout << "kolichestvo bikov: " << bik << " kolichestvo korov: " << korova << endl;
//
//    } while (bik < 4);
//
//}
//int main()
//{
//    srand(time(NULL));
//    bool bmap[10];
//    for (int i = 0; i != 10; i++) bmap[i] = true;
//    int n, number = 0;
//    for (int i = 1; i != 10000; i *= 10)
//    {
//        do {
//            n = 1 + rand() % 9;
//        } while (bmap[n] == false);
//        bmap[n] = false;
//        number += i * n;
//    }
//    cout << number << endl;
//
//    func(number);
//
//    return 0;
//}



#include <iostream>
#include <stdio.h>
using namespace std;

void getNum(char* comp)
{
    char a[10];
    for (int i = 0; i < 10; i++) a[i] = 48 + i;
    for (int i = 0; i < 4; i++)
    {
        int n = rand() % (10 - i);
        comp[i] = a[n];
        for (int j = n; j < 9; j++) a[j] = a[j + 1];
    }
    cout<<comp<<endl;
}
int BullCow(char* comp, char* my, int& c)
{
    int b = 0;
    c = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (comp[i] == my[j])
            {
                c++;
                if (i == j) b++;
            }
    return b;
}
void main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Rus");
    srand(unsigned(time(0)));
    char comp[5] = "";
    getNum(comp);
    int b, c;
    do
    {
        cout << "Число: ";
        char my[5] = "";
        gets_s(my);
        b = BullCow(comp, my, c);
        cout << "Быки: " << b << "  коровы: " << c << endl;
    } while (b < 4);
    system("pause");
    return;
}