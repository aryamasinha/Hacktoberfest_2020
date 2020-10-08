#include<iostream>
using namespace std;
int a[200];
int main()
{
    int t,n,i,j,temp,x,m;
    cin>>t;

    while(t--)
    {
        cin>>n;
        a[0]=1;
        m=1;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<m;j++)
            {
                x=a[j]*i+temp;
                a[j]=x%10;
                temp=x/10;
            }
            while(temp!=0)
            {
                a[m]=temp%10;
                temp/=10;
                m++;
            }
        }
        for(i=m-1;i>=0;i--)
        {
            cout<<a[i];
        }
        cout<<"\n";
    }
    return 0;
}
