#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;
int N, k, t, s, r, OK;
int a[10001]={};
int X[10001];
void in(){
	for (int i=1; i<=N; i++) cout<<X[i];
	cout<<" ";
}

// quay lui

//void Try (int i){
//	for (int j=1; j<=n; j++){
//		if (a[j]==0){
//			b[i]=j;
//			a[j]=1;
//			if (i==n) in();
//			else Try(i+1);
//			a[j] = 0;
//		}
//	}
//}

void Next_Permutation(void) {
	int j = N-1; // Xuat phat tu phan tu N-1
	while ( j>0 && X[j]> X[j+1]) j --;  //Tìm j sao cho X[j]>X[j+1]
	if (j>0) { //Neu i chua vuot qua phan tu cuoi cùng
		int k =N; // xuat phat tu k = N
		while ( X[j] > X[k] ) k --; // Tìm k sao cho X[j] <X[k]
		int t = X[j]; X[j] = X[k]; X[k] = t; //doi cho X[j] cho X[k]
		int r = j +1, s = N;
		while ( r <=s ) { //lat nguoc doan tu j +1 d?n N
			t = r; r = s; s=t;
			r ++; s --;
		}
	}
	else OK =0; //neu den hoan vi cuoi cùng
}

int main(){
	test(){
		cin>>N;
	//	Try(1);
		while (OK){
			for (int i=1; i<=N; i++) cout<<X[i];
			cout<<" ";
			Next_Permutation;
		}
		cout<<endl;
	}	
	return 0;
}

