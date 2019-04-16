#include <iostream>
#include <vector>
#include "Eigen/Dense"

using namespace std;
using Eigen::MatrixXd;

double fun1(double x)
{
    double y = x*x*x - 4.0;
    return y;
}

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
    double y = x*x - 4.0;
    return y;
}

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
    // start value 1 rows 2 cols
    MatrixXd x(2,1);
    x(0,0) = 1.0;
    x(1,0) = 1.0;


    // x1 0
    double x1 = x(0,0);
    // x2 0
    double x2 = x(1,0);
    // def matrix
    MatrixXd m(2,2);
    // 1 row
    m(0,0) =  pochodna1(x1);
    m(0,1) =  pochodna1(x2);
    // 2 row
    m(1,0) = pochodna2(x1);
    m(1,1) =  pochodna2(x2);
    // invert calculation J-1
    MatrixXd J(2,2);
    J(0,0) = m(1,1);
    J(1,1) = m(0,0);
    J(0,1) = (-1.0)*m(0,1);
    J(1,0) = (-1.0)*m(1,0);
    J *= (1.0/(m(0,0)*m(1,1) - m(0,1)*m(1,0)));
    // calculate y for x1 and x2
    MatrixXd y(2,1);
    y(0,0) = fun1(x1);
    y(1,0) = fun2(x2);
    x = x - J*y;

    cout << x << endl;
    return 0;
}
