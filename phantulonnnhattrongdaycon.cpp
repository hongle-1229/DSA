#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;
int sapxep(int a[], int l, int h){
	int p=a[h];
	int i=(l-1);
	for (int j=l; j<h; j++){
		if (a[j]<=p) {
			i++;
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	int tem=a[i+1];
	a[i+1]=a[h];
	a[h]=tem;
	return i+1;
}
void sortt(int a[], int l, int h){
	if (l<h){
		int pi=sapxep(a, l , h);
		sortt(a, l , pi-1);
		sortt(a, pi+1, h);
	}
}
int main(){
	test(){
		int n, k;
		cin>> n>>k;
		int a[n+1];
		for (int i=0; i<n; i++) cin>>a[i];
		sapxep(a[20], 1, n-1);
		int s=n-(n-k+1);
		for (int i=n-1; i>=s; i--){
			cout<<a[i];
		}
	}
	return 0;
}

