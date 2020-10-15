#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a[1000];
	int n;
	string P;
	for(int i=0;i<t;i++){
	    cin>>n>>P;
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    if(P=="Dee" && n==1 && a[0]%2==0)
	        cout<<"Dee\n";
	    else
	        cout<<"Dum\n";
	}
	
	return 0;
}
