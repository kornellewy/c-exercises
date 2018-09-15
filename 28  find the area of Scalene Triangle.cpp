#include <iostream> 
#include <stdlib.h> 
#include <math.h>
using namespace std;

int main()
{
	float a,b,c,s,area;
	cout << "dawaj rozmiary bokow trojkata w float" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << a << " tyle podales dla a "  << endl;
	cout << b << " tyle podales dla b "  << endl;
	cout << c << " tyle podales dla c "  << endl;
	s = 0.5 * (a + b+ c);
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout << area << " tyle to powieszchnia "  << endl;
}
