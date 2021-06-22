#include <iostream>
#include <cmath>
 
using namespace std;
 
 
int main()
{
    int k,r;
	  cin >> k >> r;
	  
	  for(int i=1;i<=10;i++)
	  {
	  	int denominations = (k*i)%10;
	  	if(denominations == r || denominations == 0)
	  	{
	  		cout << i;
	  		break;
	  	}
	  }
}
