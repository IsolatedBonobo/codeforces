#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ; 
    cin>>n ;
    vector<int>effi(n-1);
    for(int i = 0 ; i < n - 1 ; i++)    
        cin>>effi[i];

    int ans = 0 ;
    for(int i = 0 ; i < n-1; i++)
        ans += effi[i];

    ans = ans * (-1);
    cout<<ans<<endl;
}
int main(){
    int t; 
    cin>>t;
    for(int i = 0 ; i < t; i++){
        solve();
    }
    return 0;
}