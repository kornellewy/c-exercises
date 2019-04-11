#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;
// function
double fun(double x)
{
    // here write your function
    double y = (x*x) - 2;
    return y;

}
// get data form user
double input_data()
{
    double x;
    cout << "x please: " << endl;
    cin >> x;
    return x;
}
// main fun of method bi
int main()
{
    double anser = 0;
    // get data form user
    double x0 = input_data();
    double x1 = input_data();
    cout << "x0: " << x0 << endl;
    cout << "x1: " << x1 << endl;
    double y0 = fun(x0);
    double y1 = fun(x1);
    cout << "y0: " << y0 << endl;
    cout << "y1: " << y1 << endl;
    // we start vector and add x0 and x1 to him
    vector<double> tab;
    tab.push_back(x0);
    tab.push_back(x1);
    // accuracy
    double e = 0.001;
    double error = 1;
    // safe check for while loop
    int max_iterations = 10;
    int i = 0;
    while(e < error)
    {
        // get last 2 elements of vector
        int vec_size = tab.size();
        double x0 = tab[vec_size-2];
        double x1 = tab[vec_size-1];
        if ((fun(x1) - fun(x0)) != 0)
        {
            double x2 = x1 - (fun(x1) * (x1 - x0))/(fun(x1) - fun(x0));
            error = abs(x2 - x1);
            tab.push_back(x2);
            anser = x2;
        }
        // safe check for while loop
        if (i == max_iterations)
        {
            cout << "method end because max limit";
            break;
        }
        i += 1;
    }
    cout << anser;
    return 0;
}


