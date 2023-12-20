#include<bits/stdc++.h>

void solve(string ptr){
     
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
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
        

    return  ;
}
using namespace std;
int main(){
    int t ; 
    cin>> t;
    vector<string> input(t) ;
    for(int i = 0 ; i < t ; i++ ){
        cin>>input[i];
    }
    for(int i = 0 ; i < t; i++){
        string str = input[i];
        solve(input[i]);
        

    }
}
