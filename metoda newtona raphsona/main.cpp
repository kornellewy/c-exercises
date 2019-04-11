#include <iostream>
#include <vector>

using namespace std;

double fun1(double x)
{
    double y = x*x*x - 4.0;
    return y;
}-

double pochodna1(double x)
{
    double h = 1.0/100000.0;
    double fx =fun1(x);
    h = h + x;
    double fxh = fun1(h);
    double p = (fxh - fx)/h;
    return p;
}

double fun2(double x)
{
    double y = x*x*x - 4.0;
    return y;
}-

double pochodna2(double x)
{
    double h = 1.0/100000.0;
    double fx =fun2(x);
    h = h + x;
    double fxh = fun2(h);
    double p = (fxh - fx)/h;
    return p;
}

int main()
{
    cout.precision(30);
    double p_x = pochodna1(3.0);
    cout << p_x << endl;
    return 0;
}
