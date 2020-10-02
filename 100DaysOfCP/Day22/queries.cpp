#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n,k;
	    cin>>n>>k;
	    long int q[n];
	   for(long int i=0;i<n;i++){
	       cin>>q[i];
	   }
	   long int countDays = 0;
	   long int rem = 0;
	   for(long int i=0;i<n;i++){
	       rem += q[i];
	       if(rem >= k){
	           rem -=k;
	       }
	       else{
	           countDays = i+1;
	           break;
	       }
	       countDays++;
	   }
	   if(rem >= k){
	       countDays += (rem/k)+1;
	   }
	   cout<<countDays<<endl;
	}
	return 0;
}
