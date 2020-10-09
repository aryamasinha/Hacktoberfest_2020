#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long t;
	cin >> t;
	while (t--)
	{
        long long n,a,b;
        cin>>n;
        //a=n;
        b=n%10;
        for(a=n;a>=10;a=a/10);
        cout<<a+b<<endl;
	}
	return 0;
}

