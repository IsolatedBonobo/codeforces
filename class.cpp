#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
string solve(string ptr){
    string ans = ""; 
    unordered_map<char, int> map ;
    map['a'] = 0;
    map['b'] = 1;
    map['c'] = 2;

    unordered_map<char, int> pmap;
    for(int i = 0; i< ptr.length(); i++){
        pmap[ptr[i]] = i ;
            // cout<<pmap[ptr[i]]<<" ";
    }
    int count = 0 ; 
    for(int j = 0 ; j < 3; j++){
        if(pmap[ptr[j]] == map[ptr[j]] )
            count++;
    }
    if(count >= 1){
        ans.push_back('Y');
    }
    else
        ans.push_back('N');
                

    return ans ;
}
void saksham(){
    int n ;
    cin>>n ;
    vector<int>h(n);
    for(int i = 0 ; i < n; i++){
        cin>>h[i];
    }
    // solving for ltr
    for(int i = 0 ; i < n; i++){
        
        int count = 0 ; 
        int k = i - 1;
        // yeh maine piche ka sambhal liya 
        while(k >= 0){
            // cout<<"i am ok"<<endl;
            if(h[k] == h[i])
            count++;
            if(h[k] > h[i])
            break;

            k--;
        }
        int j = i + 1 ;
        while(j < n){
            if(h[j] == h[i])
            count++;
            if(h[j] > h[i])
            break;

            j++;
        }
        cout<<count<<" ";
    }
}
int main(){
    
    int t; 
    cin>>t ; 

    for(int i = 0 ;i < t ; i++){
        saksham();
    }
    vector<int>h(n);
    for(int i = 0 ; i < n; i++){
        cin>>h[i];
    }
    saksham(h, n);
    
    return 0;
}
