#include<bits/stdc++.h>
using namespace std;


int isCorrect(char s[], int n);

int main(){
	int t,n;
	char s[100005];

	cin>>t;
	while(t--){
		scanf("%s",&s);
		n = strlen(s);
		if(isCorrect(s,n)) printf("yes\n");
		else printf("no\n");
	}
}

int isCorrect(char s[], int n){
	if(n == 0) return false;

	int i=0;

	while(i<n && s[i] == 'C') i++;
	if(i == n) return true;

	while(i<n && s[i] == 'E') i++;
	if(i == n) return true;
	if(s[i] == 'C') return false;

	while(i<n && s[i] == 'S') i++;
	if(i == n) return true;
	if(s[i] == 'C' || s[i] == 'E') return false;

}
