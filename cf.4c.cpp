#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<string,int> dict;
    while(t--){
        string s;
        cin>>s;
        if(dict[s]==0){
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<dict[s]<<endl;
        }
        ++dict[s];
    }
    return 0;
}