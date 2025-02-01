#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n,single_count1=0,count0=0,ans=0;cin>>n;
        string s,b;cin>>s;
        cin>>b;
        for(int i=0;i<n;i++){
            if(s[i] =='1' && b[i]=='0') single_count1++;
            else if(s[i] == '0' && b[i]=='1') count0++;
        }
        if(count0>=single_count1) ans = count0;
        else ans = single_count1;
        cout<<ans<<endl;
    }
    
    return 0;
}