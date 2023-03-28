#include <bits/stdc++.h>
#define test() int t; cin>>t; while (t--)
using namespace std;
string s;
void sinh(){
	cin>>s;
	int i=s.size()-1;
	while (s[i]=='1' and i>=0) i--;
	if (i<0){
		for (int j=0; j<s.size(); j++) cout<<'0';
		cout<<endl;
	}
	else {
		s[i]='1';
		for (int j=i+1; j<s.size(); j++) s[j]='0';
		cout<<s<<endl;
	}
}
int main(){
	test(){
		sinh();
	}
	return 0;
}

