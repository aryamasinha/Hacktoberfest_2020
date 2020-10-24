#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int x=0;
	bool fans[t];
	while(x!=t)
	{
		fans[x]=true;
		string st;
		cin>>st;
		int c=0,e=0,s=0;
		int i=0;
		while(st[i+1]!='\0')
		{
			if(st[i]=='E')
			{
				if(st[i+1]=='C')
				{
					fans[x]=false;
					break;
				}
			}
			else if(st[i]=='S')
			{
				if(st[i+1]=='E' || st[i+1]=='C')
				{
					fans[x]=false;
					break;
				}
			}
			i++;
		}
		x++;
	}
	x=0;
	while(x!=t)
	{
		if(fans[x])
		{
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
		x++;
	}
}