#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
void fun(vector<pair<int,int> > a){
    int len=a.size();
    for(int i=0;i<len/2;++i){
        cout<<a[i].second<<" "<<a[len-1-i].second<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<int, int> > a;
    for(int i=0;i<n;++i){
        pair<int,int> tmp;
        cin>>tmp.first;
        tmp.second=i+1;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    fun(a);
    return 0;
}