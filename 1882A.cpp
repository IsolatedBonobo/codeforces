#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ; 
    cin>>n ;
    vector<int>a(n);
    for(int i = 0 ; i < n ;i++){
        cin>>a[i];
    }
    // step 1 ;
    vector<int>b(n);
    for(int i = 0 ;i < n; i++){
        b[i] = i + 1;
    }
    for(int i = 0 ; i < n; i++){
        if(a[i] == b[i]){
            for(int j = i ; j< n; j++){
                b[j]++;
            }
        }
    }
    cout<<b[n-1]<<endl;
}
int main(){
    int t; 
    cin>>t; 
    for(int i = 0 ; i < t; i++){
        solve();
    }
    return 0;
}