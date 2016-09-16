#include <cstdio>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;

int abs(int x){
    return x>0?x:-x;
}
int main(){
    string s;
    cin>>s;
    if(s.length()%2!=0){
        printf("-1\n");
        return 0;
    }
    int dp[256];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<s.length();++i){
        dp[s[i]]++;
    }
    int aver1=(dp['L']+dp['R'])/2;
    int aver2=(dp['U']+dp['D'])/2;
    int ans=0;
    ans+=abs(dp['L']-aver1)+abs(dp['D']-aver2)+abs(dp['R']-aver1)+abs(dp['U']-aver2);
    printf("%d\n",ans/2);
    return 0;
}
