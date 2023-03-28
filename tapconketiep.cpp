#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;

/* 
- Duyet tu cuoi len dau, tìm vi trí dau tien chua dat max,
giá tri max=n-k+i
- Neu khong tìm duoc vi trí do thì dang là tap con cuoi cùng, 
tap tiep theo se là tap con dau tien
- Neu tìm duoc thì tang giá tri chua dat max do len 1,
các giá tri phía sau nó duoc tính theo cong thuc
giá tri sau = giá tri truoc do + 1
*/
int n,k;
int a[100];
//void sinh(){
//	int i=k;
//	while (i>0 and a[i]==n-k+i) i--;
//	if (i<=0) 
//		for (int j=1; j<=k; j++) a[j]=i;
//	else {
//		a[i]++;
//		for (int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
//	}
//}
//void in(){
//	for (int i=1; i<=k; i++) cout<<a[i]<<" ";
//	cout<<endl;
//}
void solve(){
	int n,k;
	cin>>n>>k;
	int a[n+1];
	for (int i=1; i<=k; i++) cin>>a[i];
	int i=k;
	while (i>0 && a[i]==n-k+i) i--; // tim a[i] != n-k+i
	if (i<=0){
		for (int i=1; i<=k; i++){ 
			cout<<i<<" ";
		}
		cout<<endl;
	}
	else {
		a[i]++;
		for (int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}	
		for (int i=1; i<=k; i++) cout<<a[i]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
		
	}
	return 0;
}

