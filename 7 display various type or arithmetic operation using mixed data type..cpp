#include <iostream> 
#include <stdlib.h> 
using namespace std;
int main()
{
	int i, a, b;
	for( i = 1; i <= 10; i++ )
	{
		a = rand() % 100 + 1;
		b = rand() % 100 + 1; 
		cout << a << " + " << b << "=" << a+b << endl;
		cout << a << " - " << b << "=" << a-b << endl;
		cout << a << " * " << b << "=" << a*b << endl;
		cout << a << " / " << b << "=" << a/b << endl;
	}
	return 0;
}
