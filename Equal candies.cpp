Problem source : https://codeforces.com/problemset/problem/1676/B


#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;cin>>n;int arr[n+3];
        long long minimum = INT_MAX;
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];if(arr[i]<minimum) minimum=arr[i];
        }for(int i=0;i<n;i++){
            sum += arr[i] - minimum;
        }cout<<sum<<endl;
    }return 0;
}
