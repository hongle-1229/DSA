#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;
string s;
int Try(){
	int n=s.length();
	stack<char> st;
	for (int i=0; i<n; i++) 
		if (s[i]=='(' or s[i] == '[' or s[i]=='{')
			st.push(s[i]);
		else {
			if (st.empty()) return 0;
			char in=st.top(), out=s[i];
			if (in=='(' and out==')') st.pop();
			else if (in=='[' and out==']') st.pop();
			else if (in=='{' and out=='}') st.pop();
			return 0;
		}
}
int main(){
	test(){
		cin>>s;
		if (Try()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

