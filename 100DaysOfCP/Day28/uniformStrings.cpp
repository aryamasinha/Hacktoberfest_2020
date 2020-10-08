#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int count = 0;
	    int i = 1;
	    int len = str.length();
	    do{
	        if((i == 0) && ((str[0] == '1' && str[len-1] == '0') || (str[0] == '0' && str[len-1] == '1'))){
	            count++;
	        }
	        if((str[i-1] == '0' && str[i] == '1')|| (str[i-1] == '1' && str[i] == '0')){
	            count++;
	        }
	        i = (i+1)%len;
	    }while(i != 1);
	    if(count <= 2){
	        cout<<"uniform"<<endl;
	    }
	    else{
	        cout<<"non-uniform"<<endl;
	    }
	}
	return 0;
}
