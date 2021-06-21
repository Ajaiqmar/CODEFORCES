#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
	  cin >> n;
	  
	  int arr[n];
	  for(int i=0;i<n;i++)
	  {
	  	cin >> arr[i];
	  }
	  
	  int min = arr[0],max = arr[0],ans = 0;
	  for(int i=1;i<n;i++)
	  {
	  	if(arr[i]>max || arr[i]<min)
	  	{
	  		ans += 1;
	  	}
	  	
	  	if(arr[i]>max)
	  	{
	  		max = arr[i];
	  	}
	  	
	  	if(arr[i]<min)
	  	{
	  		min = arr[i];
	  	}
	  }
	  
	  cout << ans;
	  
    return 0;
}
