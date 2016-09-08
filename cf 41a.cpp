#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int main(){
	string s;
	string t;
	bool ans=true;
	cin>>s>>t;
	if(s.length()==t.length()){
		for(int i=0;i<s.length();++i){
			if(s[i]!=t[t.length()-i-1]){
				ans=false;
				break;
			}
		}
	}
	else ans=false;
	if(ans) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}