//Problem link : https://codeforces.com/problemset/problem/1042/A

#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,m;cin>>n>>m;
        int arr[n],k = m,div=0,res=0;
        int maxNum=0, minNum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxNum = max(arr[i],maxNum);
        }int sum=0;
        for(int i=0;i<n;i++){
            int diff=0;
            diff = maxNum-arr[i];
            arr[i] += diff;
            k -= diff;sum += arr[i];
        }if(k>0){
            div = k/n;
            res = k%n;
            if(res!=0) minNum = maxNum+div+1;
            else minNum = maxNum+div;
        }else minNum = maxNum;
        cout<<minNum<<" "<<maxNum+m<<endl;

}