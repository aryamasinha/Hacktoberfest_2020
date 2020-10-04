#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,sum=0;
	cin>>t;
	int a[t];

	for(int i=0;i<t;i++){
	    cin>>a[i];
	    int count=10;
	    
	    while(a[i]%count != a[i]){
	        sum+=(a[i]%count)/(count/10);
	        count*=10;
	        }
	        sum+=(a[i]%count)/(count/10);
	        cout<<sum<<endl;
	        sum=0;
	}
	return 0;
}