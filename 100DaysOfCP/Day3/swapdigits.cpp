#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int max = a+b;
        int a1 = a/10;
        int a2 = a%10;
        int b1 = b/10;
        int b2 = b%10;
        if((a1 != 0) && (b1 != 0)){
            int x = (a1*10+b1) + (a2*10+b2);
            int y = (b2*10+a2) + (b1*10+a1);
            int z = (b1*10+a2) + (a1*10+b2);
            max = (x > max)?x:max;
            max = (y > max)?y:max;
            max = (z > max)?z:max;
        }
        else if((a1 == 0) && (b1 != 0)){
            int x = b1 + (a2*10+b2);
            int y = b2 + (b1*10+a2);
            max = (x > max)?x:max;
            max = (y > max)?y:max;
        }
         else if((a1 != 0) && (b1 == 0)){
            int x = a1 + (b2*10+a2);
            int y = a2 + (a1*10+b2);
            max = (x > max)?x:max;
            max = (y > max)?y:max;
        }
        cout<<max<<endl;
    }
	return 0;
}
