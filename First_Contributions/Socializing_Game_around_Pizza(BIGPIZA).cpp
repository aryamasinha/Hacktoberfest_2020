#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[10003];bool b[10003];
	a[0]=0;
	a[1]=0;
	a[2]=1;
	a[3]=1;
	int j=0;
	for(int i=4;i<=10001;i++)
	{
		for(int j=0;j<i+1;j++)
		b[j]=0;
		for(j=0;j<(i+1)/2;j++) {
		    b[a[j]^a[i-2-j]]=1;
		}
		j = 0;
		while(b[j])
		{
			j++;
		}
		a[i] = j;

	}
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(a[n])
		cout<<"Arjuna"<<endl;
		else
		cout<<"Bhima"<<endl;
	}
	return 0;
}
