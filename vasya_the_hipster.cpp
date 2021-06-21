#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b;
	cin >> a >> b;
	
	int fashionable = ((a<b)?a:b);
	int nonFashionable = ((a-fashionable)+(b-fashionable))/2;
	
	cout << fashionable << " " << nonFashionable;
	
	return 0;
}
