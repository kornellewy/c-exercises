#include <iostream> 
#include <stdlib.h> 
using namespace std;

int main()
{
	float i;
	cout << "dawaj temp w farenhajtach" << endl;
	cin >> i;
	cout << i << "[F]" << endl;
	i = (i-32)*(5.0/9.0);
	cout << i << "[C]" << endl;
}
