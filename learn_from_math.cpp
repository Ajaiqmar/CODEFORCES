#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int n;
	  cin >> n;
	  
	  if(n%2==0)
	  {
	  	cout << 4 << " " << n-4;
	  }
	  else
	  {
	  	for(int i=4;i<n;i+=2)
	  	{
	  		if((n-i)%3==0)
	  		{
	  			cout << i << " " << (n-i);
	  			break;
	  		}
	  	}		
	  }
}
