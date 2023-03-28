#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;
int n, k, a[10001], oke;
void khoitao(){
	for (int i=1; i<=k; i++) a[i]=i;
}
void Try(){
	int i=k;
	while (i>0 && a[i]==n-k+i) i--; // tim a[i] != n-k+i
	if (i>0){
		a[i]=a[i]+1; // phan tu thu i
		for (int j=i+1; j<=k; j++){ // phan tu thu i+1
			a[j]=a[j-1]+1;
		}
	}
	else oke=0;
}
int main(){
	cin>>n>>k;
	oke=1;
	khoitao();
	while (oke){
		for (int i=1; i<=k; i++) cout<<a[i];
		cout<<' ';
		Try();
	}
	return 0;
}

