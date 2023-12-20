#include<bits/stdc++.h>
using namespace std;
void cards(vector<int>&arr, int &score, int count){
    if(count > arr.size() - 1){
        return ;
    }

    if(count % 2 != 0){
        score+= arr[count];
        
        // recursive call with decreasing that array 
    }
    else{
        // recursive call with decreasing that array 
        
    }

}
void find(){
    int n ; 
    cin >> n; 
    vector<int>arr(n);
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int ans = 0 ;
    cards(arr, ans);
    cout<<ans<<endl;
}
int main(){
    int t ; 
    cin>>t; 
    for(int i = 0 ; i < t; i++){
        findunion();
    }
    return 0;
}