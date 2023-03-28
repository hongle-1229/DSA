#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;
string s;
int solve(){
	int n=s.length(), ok=0;
	stack<int> st;
	st.push(-1);
	for (int i=0; i<n; i++){
		if (s[i]=='(') st.push(i);
		else {
			st.pop();
			if (!st.empty()){
				int j=st.top();
				ok=max(ok, i-j);
			}
			else st.push(i);
		}
	}
	return ok;
}
int main(){
		test(){
			cin>>s;
			cout<<solve()<<endl;
		}
	return 0;
}

