#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int sum;
	cin>>sum;
	int a[n][2];
	memset(a,0,sizeof(a));
	int mini=0;
	int maxi=0;
	for(int i=0;i<n;++i){
		cin>>a[i][0]>>a[i][1];
		mini+=a[i][0];
		maxi+=a[i][1];
	}
	if(sum<mini||sum>maxi){
		cout<<"NO"<<endl;
		return 0;
	}
	else{
		cout<<"YES"<<endl;
		for(int i=0;i<n;++i){
			while(a[i][1]>a[i][0]&&maxi>sum){
				--a[i][1];
				--maxi;
			}
			cout<<a[i][1]<<" ";
		}
		cout<<endl;
	}
	return 0;
}