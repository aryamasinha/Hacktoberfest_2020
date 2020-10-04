#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	int n, i, a, b, odd, even;
	cin >> n;
	for (i=0;i<n;i++) 
	{
	    cin >> a >> b;
	    odd=sqrt(a);
	    even=odd*(odd+1);
    	if(even>b)
    	{
    	    cout << "Limak" << "\n";
    	}
    	else
    	{
    	    cout << "Bob" << "\n";
    	}
	}
	return 0;
}
