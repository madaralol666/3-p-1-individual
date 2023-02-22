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
    double b, v, s;
    int c, x, n;

    switch (exercise) {
    case 1:
        cout << "------1------" << endl;
        cout << "1 значение: " && cin >> b;
        cout << "2 значение: " && cin >> c;
        cout << a.PowDI(b, c) << endl;
        break;
    case 2:
        cout << "------2------" << endl;

        cout << "1 значение: " && cin >> b;
        cout << "2 значение: " && cin >> v;
        cout << a.PowDD(b, v) << endl;
        break;
    case 3:
        cout << "------3------" << endl;
        cout << "1 значение: " && cin >> c;
        cout << "2 значение: " && cin >> x;
        a.DoubleInt(c, x);
        break;
    case 4:
        cout << "------4------" << endl;
        cout << "Номинал: " && cin >> c;
        cout << "Количество: " && cin >> x;
        a.IcountMoney(c, x);
        break;
    case 5:
        cout << "------5------" << endl;
        cout << "Стоимость товара: " && cin >> c;
        cout << "Количество: " && cin >> x;
        a.CountProduct(c, x);
        break;
    case 6:
        cout << "------6------" << endl;
        cout << "Калорийность продукта на 100 Г: " && cin >> c;
        cout << "Масса: " && cin >> b;
        a.CountCCal(c, b);
        break;
    case 7:
        cout << "------7------" << endl;
        cout << "Число левого диапазона: " && cin >> b;
        cout << "Число правого диапазона: " && cin >> v;
        cout << "Число проверки: " && cin >> s;
        cout << a.Diapason(b, v, s);
        break;
    case 8:
        cout << "------8------" << endl;
        cout << "Число левого диапазона: " && cin >> b;
        cout << "Число правого диапазона: " && cin >> v;
        cout << "Число проверки: " && cin >> s;
        cout << a.DiapasonPlus(b, v, s);
        break;
    case 9:
        cout << "------9------" << endl;
        cout << "Часы: " && cin >> c;
        cout << "Минуты: " && cin >> x;
        a.Timepuk(c,x);
        break;
    case 10:
        cout << "------10------" << endl;
        cout << "X: " && cin >> b;
        cout << "Y: " && cin >> v;
        cout << "Расстояние от начала координат до точки: " << a.CalcXY(b, v);
        break;
    case 11:
        cout << "------11------" << endl;
        cout << "Оклад: " && cin >> b;
        cout << "КОл-во отработанных дней: " && cin >> c;
        a.CalcSalary(b, c);
        break;
    case 12:
        cout << "------12------" << endl;
        cout << "Длит. разговора в минутах " && cin >> v;
        cout << "Стоимость разговора/мин " && cin >> b;
        a.CalcPhoneCall(v, b);
        break;
    case 13:
        cout << "------13------" << endl;
        cout << "Целая часть числа: " && cin >> v;
        cout << "Дробная часть числа: " && cin >> b;
        cout << "Число для умножжения: " && cin >> b;
        a.DoubleMultiply(b,v,s);
        break;
    case 15:
        cout << "------15------" << endl;
        cout << "Целая часть числа: " && cin >> c;
        cout << "Дробная часть числа: " && cin >> x;
        cout << "Число для умножжения: " && cin >> n;
        a.IntMultiply(c, x, n);
        break;
    default:
        cout << "Такой задачи нет." << endl;
        return 0;
    }
}