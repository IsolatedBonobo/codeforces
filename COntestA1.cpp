#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin>>t; 
    vector<string>str;
    cout<<"I am running"<<endl;
    // for(int i = 0 ; i < t; i++){
    //     str.push_back()
    // }
    unordered_map<char, int> map ;
    map['a'] = 0;
    map['b'] = 1;
    map['c'] = 2;
    for(int i =0 ; i < t; i++){
        cin>>str
        cout<<"I am running"<<endl;
        string ptr = str[i];
        unordered_map<char, int> pmap;
        for(int j = 0; j< ptr.length(); j++){
            pmap[ptr[j]] = j ;
            // cout<<pmap[ptr[i]]<<" ";
        }
        int count = 0 ; 
        for(int j = 0 ; j < ptr.length(); j++){
            if(pmap[ptr[j]] == map[ptr[j]] ){
                count++;
            }
        }
        if(count >= 1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
        
    }
    
}