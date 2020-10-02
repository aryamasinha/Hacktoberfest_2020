#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
	cin>>n;
	long int sum = 0;
	while(n != 0){
	    sum += n%10;
	    n = n/10;
	}
	cout<<sum<<endl;
    }
	
	return 0;
}
