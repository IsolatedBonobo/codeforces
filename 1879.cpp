#include<bits/stdc++.h>
using namespace std;

int wieghtlift(){
    int n ; 
    cin>> n ; 
    
    vector<int>strength(n);
    vector<int>endurance(n);

    for(int i = 0 ; i < n ;i++){
        cin>>strength[i];
        cin>>endurance[i];
    }

    int p1e = endurance[0];

    // step 1
    int maxe = INT_MIN;
    int maxs = INT_MIN;
    for(int i = 0 ;i < n;i++){
        if(endurance[i] > maxe){
            maxe = endurance[i];
            maxs = strength[i];
        }
    }
    // step 2
    maxs++;
    // step3 
    if(strength[0] > maxs)
        cout<<maxs<<endl;
    else
        cout<<"-1"<<endl;

}
int main(){
    
    int t ; 
    cin>>t ; 
    vector<int>ans(t);

    for(int i = 0 ; i < t; i++){
        wieghtlift();
        
    }
    
    // for(int i = 0 ;i < t; i++){
    //     ans[i]<<endl;
    // }
    return 0;
}