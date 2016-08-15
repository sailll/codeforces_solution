#include <cstdio>
#include <iostream>
using namespace std;
long long up(long long a,long long b)
{
	if(a%b==0) return a/b;
	else return a/b+1;
}
int main(){
	long long n,m,a;
	cin>>n>>m>>a;
	long long width=up(n,a);
	long long len=up(m,a);
	cout<<width*len<<endl;
	return 0;
}