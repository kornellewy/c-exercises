#include <iostream> 
#include <stdlib.h> 
using namespace std;

int main()
{
	float km_h, mile_h;
	cout << "dawaj predkosc km/h w float" << endl;
	cin >> km_h;
	cout << km_h << " tyle podales "  << endl;
	mile_h = 0.62137 * km_h;
	cout << "predkosc w milach na godzine :" << mile_h << endl;
}
