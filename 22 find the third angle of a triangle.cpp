#include <iostream> 
#include <stdlib.h> 
using namespace std;

int main()
{
	float first_angle, second_angle, third_angle;
	cout << "dawaj rozmiary kontow" << endl;
	cin >> first_angle;
	cin >> second_angle;
	cout << second_angle << " i kurla " << first_angle << endl;
	third_angle = 180.0 - first_angle - second_angle;
	cout << "trzeci to kurla:" << third_angle << endl;
}
