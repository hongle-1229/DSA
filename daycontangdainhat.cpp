#include <bits/stdc++.h>
#include <algorithm>
#define test() int t; cin>>t; while (t--)
using namespace std;
int n, a[10001];
vector<int> l(n,1); // vector co n phan tu mang gia tri =1
int main(){
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++){
		for (int j=0; j<i; j++){
			if (a[i] > a[j])
				l[i]= max(l[i], l[j] +1);
		}
	}
	cout<< max_element(l.begin(), l.end());
	// tim ra phan tu lon nhat trong mang l[]
	return 0;
}

/* 	mang L[] là do dài day con tang dài nhat
	L[i] =1, voi (0<=i<n)
	neu : a[i] > a[j] => cho vao day con tang dan
	L[i] = max (L[i], L[j] +1)
	(voi j < i )
	duyet tung phan tu dung truoc i (j)
*/
