#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
	int a, b, i=1;
	cin>>a>>b;
	while(a>=0 &&b>=0){
		a=a-i;
		b=b-(i+1);
		if(a<0)
		cout<<"Bob"<<endl;
		else if(b<0)
		cout<<"Limak"<<endl;
		i=i+2;
	}
	}
	return 0;
}