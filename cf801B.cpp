#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

#define maxn 100007
using namespace std;

long long item[maxn];
long long client[maxn];
int main(){
    memset(item,0,sizeof(item));
    memset(client,0,sizeof(item));
    int n;
    int f;
    cin>>n>>f;
    vector<long long> unfull;
    long long sum = 0 ;
    for(int i=0;i<n;++i){
        cin>>item[i]>>client[i];
        if(item[i]<client[i]){
            unfull.push_back(min(2*item[i],client[i])-item[i]);
        }
        sum += min(item[i],client[i]);
        
    }
    sort(unfull.begin(),unfull.end());
    for(int i=0;i<min(f,(int)unfull.size());++i){
        sum+=unfull[unfull.size()-1-i];
    }
    cout<<sum<<endl;
    return 0;
}