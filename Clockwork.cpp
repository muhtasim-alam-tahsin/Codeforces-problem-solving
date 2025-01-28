#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x,flag=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<=2*i || x<=2*(n-i-1)) flag = 1;
        }if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}