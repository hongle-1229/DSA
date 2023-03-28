#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;

bool check=false;

void sinh(int a[], int n){
	bool ok=false;
	for (int i=n-1; i>=0; i--){
		if (a[i]==0){
			ok=true;
			a[i]=1;
			for (int j=i+1; j<n; j++) a[j]=0;
			break;
		}
	}
	if (ok==false) check=true;
}
bool ktra(int a[], int m[], int n, int k){
	int sum=0;
	for (int i=0; i<n; i++){
		if (m[i]==1) sum += a[i];
	}
	if (sum==k) return true;
	return false;
}

void in(int a[], int m[], int n){
	for (int i=0; i<n; i++){
		if (m[i]==1) cout<<a[i]<<" ";
	}
	cout <<endl;
}
int main(){
	int n, k;
	cin>>n>>k;
	int a[n+1];
	for (int i=0; i<n; i++) cin>>a[i];
	int m[100]={0};
	int dem=0;
	while (check==false){
		if (ktra(a,m,n, k)) {
			in(a,m,n);
			dem++;
		}
		sinh(m, n);
	}
	cout<<dem;
	return 0;
}

