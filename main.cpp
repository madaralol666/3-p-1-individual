#include <iostream>
#include "test.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    test a;
    unsigned int wada;
    while (!(cin >> wada))
    {
        if (cin.good() < 0)
        {
            cin.clear();
            system("cls");
            while (cin.get() != '\n');

        }
        else
        {
            cin.clear();
            system("cls");
            while (cin.get() != '\n');
        }

    };
    cout << "Введите номер задания: ";
    int exercise;
    cin >> exercise;
    switch (exercise) {
    case 1:
        cout << "------1------" << endl;
        double b; int c;
        cout << "1 значение: " && cin >> b;
        cout << "2 значение: " && cin >> c;
        cout << a.PowDI(b, c) << endl;
        break;
    case 2:
        cout << "------2------" << endl;
        double d, m;
        cout << "1 значение: " && cin >> d;
        cout << "2 значение: " && cin >> m;
        cout << a.PowDD(d, m) << endl;
        break;
    case 3:
        cout << "------3------" << endl;
        unsigned int f, g;
        cout << "1 значение: " && cin >> f;
        cout << "2 значение: " && cin >> g;
        cout << a.DoubleInt(f, g) << endl;
        break;
    case 4:
        cout << "------4------" << endl;
        unsigned int h, j;
        cout << "Номинал: " && cin >> h;
        cout << "Количество: " && cin >> j;
        a.IcountMoney(h, j);
        break;
    default:
        cout << "Такой задачи нет." << endl;
        return 0;
    }
}