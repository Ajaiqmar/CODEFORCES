#include <iostream>
 
using namespace std;
 
int main()
{
    int n,m;
    cin >> n >> m;
    
    int v = ((n<m)?n:m);
    if(v%2==0)
    {
        cout << "Malvika" << endl;
    }
    else
    {
        cout << "Akshat" << endl;
    }
    
    return 0;
}
