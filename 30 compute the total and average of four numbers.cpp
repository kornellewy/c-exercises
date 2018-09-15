#include <iostream> 
#include <stdlib.h> 
#include <math.h>
using namespace std;

int main()
{
	int a,b,c,d;
	cout << "prosze podac 4 liczby od dzielone enterem" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	float s;
	s = (a+b+c+d)/4.0;
	cout << "suma liczb to " << (a+b+c+d) << endl;
	cout << "sredia liczb to " << s << endl;
	return 0;
}

