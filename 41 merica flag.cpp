#include <iostream> 
using namespace std;

int main()
{
	for(int i=1;i<19;++i)
	{
		if(i<10)
		{
			if(i%2==1)//nie podzielne przez 2
			{
				cout << "* * * * * * ==================================" <<endl;	
			}
			if(i%2==0)//podzielne przez 2
			{
				cout << " * * * * *  ==================================" <<endl;	
			}
		}
		if(i>=10)
		{
			cout << "==============================================" <<endl;
		}			
	}
	return 0;
}

