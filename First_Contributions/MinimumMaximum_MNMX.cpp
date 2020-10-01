#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        long long N;
        cin>>N;
        int array[N];
        for(int i=0;i<N;i++)
        cin>>array[i];
        sort(array,array+N);
        long long sum=array[0]*(N-1);
        cout<<sum<<endl;
    }
	return 0;
}
