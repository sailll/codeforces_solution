#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int a[10000];
int fun(){
    int maxin=1;
    int tmp=1;
    for(int i=1;i<n;++i){
        if(a[i]>a[i-1]){
            ++tmp;
            maxin=max(tmp,maxin);
        }
        else{
            maxin=max(tmp,maxin);
            tmp=1;
        }
    }
    return maxin;
}
void input(){
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
}
int main(){
    cin>>n;
    input();
    cout<<fun()<<endl;
    return 0;
}