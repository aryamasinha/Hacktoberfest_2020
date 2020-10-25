#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int x=0;
	int fans[t];
	while(x!=t)
	{
		float x1,x2,x3,v1,v2;
		cin>>x1>>x2>>x3>>v1>>v2;
		float t1=(x3-x1)/v1;
		float t2=(x2-x3)/v2;
		if(t1<t2)
		{
			fans[x]=1;
		}
		else if(t1>t2)
		{
			fans[x]=2;
		}
		else{
			fans[x]=0;
		}
		x++;
	}
	x=0;
	while(x!=t)
	{
		if(fans[x]==1)
		{
			cout<<"Chef"<<endl;
		}
		else if(fans[x]==2)
		{
			cout<<"Kefa"<<endl;
		}
		else{
			cout<<"Draw"<<endl;
		}
		x++;
	}
}