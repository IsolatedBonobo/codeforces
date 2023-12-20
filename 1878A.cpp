#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
void mostcommon(){
    int n ;
    cin>>n; 
    int k ;
    cin>>k ;
    vector<int>arr(n);
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n; i++){
        if(arr[i] == k){
            cout<<"YES"<<endl;
            return ;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>> t; 
    for(int i = 0 ; i < t; i++){
        mostcommon();
    }
    return 0;
}