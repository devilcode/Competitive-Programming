#include<iostream>
#include<cstdio>

using namespace std;

int scan_d() {
	int ip=getchar_unlocked(),ret=0;
	for(;ip<'0'||ip>'9';ip=getchar_unlocked());
	for(;ip>='0'&&ip<='9';ip=getchar_unlocked())
		ret=ret*10+ip-'0';

	return ret;
}

int main() {
    ios_base::sync_with_stdio(0);
    
    int t,n;
    //cin>>t;
    t = scan_d();
    
    while(t--) {
        //cin>>n;
        n = scan_d();
        
        if(n%2 == 0 or n%3 == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }    
    return 0;
}    
