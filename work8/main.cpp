#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
typedef double (*uf)(double, double, int &);

void tabl(double, double, double, double, uf);
double y(double, double, int &);
double s(double, double, int &);

int main()
{
    cout << setw(8) <<"x"<< setw(15) <<"y(x)"<< setw(10) << "k" << endl;
    tabl(1,2.5,0.1,0.00001,y);
    cout << endl;
    cout << setw(8) <<"x"<< setw(15) <<"s(x)"<< setw(10) << "k" <<endl ;
    tabl(1,2.5,0.1,0.00001,s);
    return 0;
}

void tabl(double a, double b, double h, double eps, uf fun)
{
    int k=0;
    double sum;
    for (double x=a; x<b+h/2; x+=h)
    {
        sum=fun(x,eps,k);
        cout << setw(8) << x << setw(15) << sum << setw(10) << k << endl;
    }
}

double y(double x, double eps, int &k)
{
    const double PI = 3.141592653589793;
    return (3*pow(x,2) - 6*PI*x + 2* pow(PI,2))/12;
}

double s(double x, double eps, int &k)
{
    double a,c,sum;
    sum=c=x;
    k=1;
    while (abs(c)>eps)
    {
        c = cos(k*x)/pow(k,2);
        sum += c;
        k++;
    }
    return sum;
}
