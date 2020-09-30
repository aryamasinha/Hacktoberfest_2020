#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int res;
	    double hardness , c_strength , t_strength;
	    cin>>hardness>>c_strength>>t_strength;
	    if((hardness > 50)  && (c_strength < 0.7) && (t_strength > 5600)){
	        res =10;
	    }
	    else if((hardness > 50)  && (c_strength < 0.7)){
	        res =9;
	    }
	    else if((c_strength < 0.7) && (t_strength > 5600)){
	        res =8;
	    }
	    else if((hardness > 50) && (t_strength > 5600)){
	        res =7;
	    }
	    else if((hardness > 50)  || (c_strength < 0.7) || (t_strength > 5600)){
	        res =6;
	    }
	    else{
	        res = 5;
	    }
        cout<<res<<endl;	    
	}
	return 0;
}
