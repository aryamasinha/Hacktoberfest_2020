#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string st;
	    cin>>st;
	    int n=st.length();
	    int dp[n+1][27][27]={0};
	   for(int i=1;i<=n;i++)
	   {
	       for(int j=1;j<=26;j++)
	       {
	           for(int k=1;k<=26;k++)
	           {
	               int ascii=st[i-1]-'a'+1;
	               dp[i][j][k]=max(dp[i][j][k],dp[i-1][j][k]);
	               if(j<=ascii)
	               dp[i][ascii][k]=max(dp[i][ascii][k],dp[i-1][j][k]+1);
	               if(k>=ascii)
	               dp[i][j][ascii]=max(dp[i][j][ascii],dp[i-1][j][k]+1);
	               
	           }
	       }
	   }
	   
	   int m=0;
	   for(int i=1;i<=26;i++)
	    for (int j=1;j<=26;j++)
	        m=max(m,dp[n][i][j]);
	        
	  cout<<m<<endl;
	   
	    
	}
	
	return 0;
}
