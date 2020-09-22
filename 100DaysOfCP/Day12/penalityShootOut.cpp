#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int chanceA = n;
	    int chanceB = n;
	    int shotA = 0;
	    int shotB = 0;
	    for(int i=0;i<2*n;i++){
	        if(i&1){
	            shotB += (str[i] - '0');
	            chanceB--;
	        }
	        else{
	            shotA += (str[i] - '0');
	            chanceA--;
	        }
	        if(shotB-shotA > chanceA){
	            cout<<(i+1)<<endl;
	            break;
	        }
	        else if(shotA-shotB > chanceB){
	            cout<<(i+1)<<endl;
	            break;
	        }
	        else if((shotA == shotB) && (i == 2*n -1)){
	            cout<<(i+1)<<endl;
	            break;
	        }
	        
	    }
	}
	return 0;
}
