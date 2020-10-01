// insertion sort
#include <iostream>
using namespace std;

int main()
{
	int a[]={5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);

	for(int i=1;i<n;i++){
		int index=i;
		for(int j=i-1;j>=0;j--){
			if(a[j]>a[index]){
				swap(a[index],a[j]);
				index--;
			}
			else{
				break;
			}
		}
	}

for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}

	
	return 0;
}