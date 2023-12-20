#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; 
    cin>>t; 
    vector<string>str; 
    for(int i = 0 ; i < t; i++){
        cin>>str[i];
    }
    unordered_map<char, int> umap ;
    umap['a'] = 0 ;
    umap['b'] = 1 ;
    umap['c'] = 2 ;
    vector<string>ans ;
    for(int i =0 ; i < str.size(); i++){
        string ptr = str[i];
        unordered_map<char, int> pmap;
        for(int j = 0; j< ptr.length(); j++){
            pmap[ptr[j]] = j ;
            // cout<<pmap[ptr[i]]<<" ";
        }
        int count = 0 ; 
        for(int j = 0 ; j < 3; j++){
            if(pmap[ptr[j]] == umap[ptr[j]] )
            count++;
        }
        if(count >= 1){
            ans.push_back("YES");
        }
        else
            ans.push_back("NO");
    }
    for(int i = 0 ; i < ans.length(); i++){
        ans[i]<<endl;
    }
    return 0;
}