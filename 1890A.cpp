#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&arr){

}
void solve(){
    int n ; 
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n; i++)
        cin>>arr[i];

    for(int i = 0 ;i < n - 2 ;i++){
        if(arr[i] == arr[i + 1])
        swap(arr[i+1], arr[i+2]);
    }
    int k = arr[0] + arr[1], count = 0 ;
    for(int i = 0 ; i < n - 2; i++){
        if(arr[i] + arr[i+1] == arr[i+1] + arr[i+2])
        count++ ;
    }
    if(count == n -1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main(){
    int t ; 
    cin>>t; 
    for(int i = 0 ; i < t; i++)
    solve();
    return 0;
}