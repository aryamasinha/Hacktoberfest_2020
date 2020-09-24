#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    int vertical = 0;
	    int horizontal = 0;
	    if(a[0] == 'L'){
	        horizontal--;
	    }
	     if(a[0] == 'R'){
	        horizontal++;
	    }
	     if(a[0] == 'U'){
	        vertical++;
	    }
	     if(a[0] == 'D'){
	         vertical--;
	    }
	    for(int i=1;i<n;i++){
	        if(a[i] == 'L' && (a[i-1] != 'L' && a[i-1] != 'R' )){
	            horizontal--;
	        }
	        else if(a[i] == 'R' && (a[i-1] != 'L' && a[i-1] != 'R' )){
	            horizontal++;
	        }
	        else if(a[i] == 'U' && (a[i-1] != 'U' && a[i-1] != 'D' )){
	            vertical++;
	        }
	        else if(a[i] == 'D' && (a[i-1] != 'U' && a[i-1] != 'D' )){
	            vertical--;
	        }
	    }
	    cout<<horizontal<<" "<<vertical<<endl;
	}
	return 0;
}
