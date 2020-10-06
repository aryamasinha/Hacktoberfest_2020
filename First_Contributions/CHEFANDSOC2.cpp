#include <iostream>
using namespace std;

int main() {
   
    int t;
    cin>>t;
    int i,j,k;
    
    for(i=0;i<t;i++)
    {
        int n,m,s;
        cin>>n>>m>>s;
        int am[m+1];
        am[0]=0;
        
        for(j=1;j<=m;j++)
        {
            cin>>am[j];
        }
        int arr[n+1][m+1];
        
       
        
        for(j=1;j<=n;j++)
        {
         arr[j][0]=0;   
        }
        
         arr[s][0]=1;
        for(j=1;j<=m;j++)
        {
            for(k=1;k<=n;k++)
            {   int x,y;
               x=k-am[j];
               y=k+am[j];
                if(k-am[j]>0 && k+am[j]<=n)
                arr[k][j]=(arr[x][j-1]+arr[y][j-1])%1000000007;
                else if(k-am[j]<=0 && k+am[j]>n)
                arr[k][j]=0;
                else if(k-am[j]<=0 )
                arr[k][j]=arr[y][j-1]%1000000007;
                else 
                arr[k][j]=arr[x][j-1]%1000000007;
                
            }
        }
        
        
      
        
        
        for(j=1;j<=n;j++)
        {
            cout<<arr[j][m]<<" ";
        }
        
        cout<<endl;
    }
    
   
	return 0;
}
