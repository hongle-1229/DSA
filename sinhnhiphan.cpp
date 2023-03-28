#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;
int a[100001];
int n, ok;
void khoitao(){
	for (int i=1; i<=n; i++) a[i]=0;
}
//void Try (int n){
//	int i=n;
//	while (i>0 && a[i]==1){
//		a[i]=0;
//		i--;
//	}
//	if (i==n) ok=0;
//	else a[i]=1;
//}


void in(int n){
	for (int i=1; i<=n; i++) cout<<a[i];
	cout<<' ';
}

// Quay lui
void Try ( int i ) {
	for (int j =0; j<=1; j++){
		a[i] = j;
		if ( i ==n) in(n);
		else Try (i+1);
	}
}
int main(){
	test(){
		cin>>n;
//		ok=1;
//		khoitao();
//		while(ok){
//			for (int i=1; i<=n; i++) cout<<a[i];
//			cout<<endl;
//			Try(n);
//		}
		khoitao();
		Try(1);
		cout<<endl;
	}
	return 0;
}

