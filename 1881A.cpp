#include<bits/stdc++.h>
using namespace std;
bool check(string x, string s){
    if(x.length() < s.length())
    return false;
    int index ;
    for(int i =0 ; i < x.length(); i++){
        if(s[0] == x[i]){
        index = i ;
        break;
        }
    }

    int count = 0 ; 
    int j = 0 ;
    
    while(index < x.length() && j < s.length()){
        // if(index >= x.length())
        // return false;
        if(s[j] != x[index]){
            return false ;
        }

        index++;
        j++;
        count++;

    }
    // cout<<j<<endl;
    if(j  < s.length()){
    return false;
    }
    else
    return true;

    
}
void getans(){
    int n, m ;
    cin>>n>>m;
    string x ;
    cin>>x ;
    string s ;
    cin>>s;
    int ans = 0 ; 
    if(check(x, s)){
        
        cout<<"0"<<endl;
        return ;
    }
    bool checker = false ;
    
    while(n <= m){
        ans++;
        for(int i = 0 ; i < n; i++){
            x.push_back(x[i]);
        }
        // cout<<x<<endl;
        n = x.length();
        checker = check(x, s);
    }


    if(checker != true){
        cout<<"-1 is ans"<<endl;
    }else
    cout<<ans<<" is ans"<<endl;
}
int main(){
    int t; 
    cin>>t ;
    for(int i =0 ;i < t; i++)
        getans();
    // string s;
    // cin>>s ;
    // string x; 
    // cin>>x; 
    // s.push_back('a');
    // s.push_back('z');
    // s.push_back('b');
    // cout<<s.length()<<endl;
    // cout<<x.length()<<endl;
    // if(s.length() > x.length()){
    //     cout<<1;
    // }else
    // cout<<0;
    return 0;
}