#include <iostream>
#include <string>
#include "test.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    test a;
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
        int f, g;
        cout << "1 значение: " && cin >> f;
        cout << "2 значение: " && cin >> g;
        a.DoubleInt(f, g);
        break;
    case 4:
        cout << "------4------" << endl;
        unsigned int h, j;
        cout << "Номинал: " && cin >> h;
        cout << "Количество: " && cin >> j;
        a.IcountMoney(h, j);
        break;
    case 5:
        cout << "------5------" << endl;
        int i, l;
        cout << "Стоимость товара: " && cin >> i;
        cout << "Количество: " && cin >> l;
        a.CountProduct(i, l);
        break;
    case 6:
        cout << "------6------" << endl;
        int o;
        double p;
        cout << "Калорийность продукта на 100 Г: " && cin >> o;
        cout << "Масса: " && cin >> p;
        a.CountCCal(o, p);
        break;
    case 7:
        cout << "------7------" << endl;
        double u;
        double v;
        double q;
        cout << "Число левого диапазона: " && cin >> u;
        cout << "Число правого диапазона: " && cin >> v;
        cout << "Число проверки: " && cin >> q;
        cout << a.Diapason(u, v, q);
        break;
    case 8:
        cout << "------8------" << endl;
        cout << "Число левого диапазона: " && cin >> u;
        cout << "Число правого диапазона: " && cin >> v;
        cout << "Число проверки: " && cin >> q;
        cout << a.DiapasonPlus(u, v, q);
        break;
    case 9:
        cout << "------9------" << endl;
        cout << "Число левого диапазона: " && cin >> i;
        cout << "Число правого диапазона: " && cin >> l;
        a.Timepuk(i,l);
        break;
    case 10:
        cout << "------10------" << endl;
        cout << "X: " && cin >> d;
        cout << "Y: " && cin >> m;
        cout << "Расстояние от начала координат до точки: " << a.CalcXY(d, m);
        break;
    default:
        cout << "Такой задачи нет." << endl;
        return 0;
    }
}