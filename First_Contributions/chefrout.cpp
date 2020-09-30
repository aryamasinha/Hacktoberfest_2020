#include <iostream>

#include <bits/stdc++.h> 
using namespace std;

int main()
{
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    string s; 
	    cin >> s;
        int count = 0;
        int n = s.length();
        for(int i = 0;i < n-1;i++)
        {
            if(s[i]=='C')
            {
                if(s[i+1] == 'E' || s[i+1] == 'S' || s[i+1]=='C')
                    count++;
            }
            else if(s[i] == 'E')
            {
                if(s[i+1]=='S' || s[i+1]=='E')
                    count++;
            }
            else if(s[i]=='S')
            {
                if(s[i+1]=='S')
                    count++;
            }
        }
        if(count==s.size()-1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
	return 0;
}

