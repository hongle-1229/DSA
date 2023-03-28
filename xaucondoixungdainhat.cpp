#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;

int main(){
	int n=s.size();
	int x, y, max=INT_MIN;
	bool f[1005][1005];
	memset(f, falsem sizeof(f));
	for (int i=n-1; i>=0; i--){
		for (int j=i; j<=n-1; j++){
			if (i==j) f[i][j]=true;
			else if (s[i]==s[j]){
				if (j-i==1) f[i][j]=true;
				else f[i][j]=f[i+1][j-1];
			}
			if (f[i][j] && j-i+1 >max) max=j-i+1;
		}
	}
	cout <<max<<endl;
	return 0;
}

