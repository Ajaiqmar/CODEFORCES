#include <iostream>
#include <cmath>

using namespace std;

void removeSmallest()
{
	int n;
	cin >> n;
	
	int arr[n],hashTable[101]={0},count = 0;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		hashTable[arr[i]]+=1;
	}
	
	for(int i=1;i<=100;i++)
	{
		if(i==1 && hashTable[i]>0)
		{
			count+=1;
		}
		else if(hashTable[i]>0 && hashTable[i-1]==0)
		{
			count+=1;
		}
	}
	
	if(count==1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

int main()
{
    int T;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
		removeSmallest();
	}
}
