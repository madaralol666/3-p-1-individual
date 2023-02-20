#include <iostream>
#include "test.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    test a;
    double b, v;
    int c;
    unsigned int Z, V;
    cin >> b >> c;
    cout << a.PowDI(b, c) << endl;
    cin >> b >> v;
    cout << a.PowDD(b, v) << endl;
    cin >> Z >> V;
    cout << a.DoubleInt(Z, V) << endl;

}
