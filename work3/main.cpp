#include <iostream>
#include <iomanip>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    double a = 0.1; //условие
    double b = 1;   //условие
    double h = (b-a)/10; //условие
    int n = 80; //условие

    double x = a;   // Начало интервала
    double y;   // Y(x)
    double s;   // S(x)
    double p;   // Множитель для S(x_i)

    cout << setw(15) << "X" << setw(15) << "Y(x)" << setw(15) << "S(x)" << endl;
    // Выполняем алгоритм, пока выполняется условие
    do
    {
        p=1;
        s=1;
        for (int i=1; i<=n; i++)
        {
            p *= -1*pow(2*x,2)/(2*i); // (-1)^n * (((2x)^2n) / (2n)!)
            s += p; // S(x_i)
        }
        y=2*(pow(cos(x),2) - 1); // Y(x)
        cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
        x += h; // Увеличиваем х на один шаг
    }
    while (x <= b+h/2);


    cout << endl;
    return 0;
}
