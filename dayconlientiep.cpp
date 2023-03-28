#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for (int i=0; i<n; i++) cin>>a[i];
	int nhat = -1;
	for (int i=1; i<n; i++) nhat=max(nhat, a[i]);
	int ans=0, dem=0;
	for (int i=0; i<n; i++){
		if (a[i]==nhat) dem++;
		else {
			ans=max(ans, dem);
			dem=0;
		}
	}
	cout<<max(ans, dem);
	return 0;
}

