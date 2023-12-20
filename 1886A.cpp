#include<bits/stdc++.h>
using namespace std;
void solve1(){
    int n ;
    cin>>n ;
    int x = 1 , y = 2, z = n - x - y;
    while(n != 0){
        if(x % 3 == 0 || y % 3 == 0 || z % 3 == 0 ){
            if(y < z){
                y+=x;
                z--;
            }else{
                x++;
                y = 1;
                z = n - x - y;
            }
            
        }
        else if(x != y && y!= z && x != z){
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
            return ;
        }
    n--;
    }
    cout<<"NO"<<endl;
}
bool finder(queue<int>q, int var){
    while(!q.empty()){
        if(q.front() == var)
            return true;
        q.pop();
    }
    return false;
}
void solve(){
    int n ; 
    cin>>n;
    queue<int>ans ;
    int count = 1 ; 
    while(count < 3){
        int var = 1 ;
        bool flag = false ;
        while(flag != true){
            n -= var; 
            if(n % 3 == 0 || finder(ans, var) || var % 3 == 0){
                n += var ;
                var ++;
            }else{
                flag = true;
            }
        }        
        if(count == 1){
            ans.push(var);

        }else{
            if(!(finder(ans, var)) && !(finder(ans, n))){
                ans.push(var);
                ans.push(n);
            }
        }
        count++;
    }
    if(ans.size() == 3){
        cout<<"YES"<<endl;
        while(!ans.empty()){
            cout<<ans.front()<<" ";
            ans.pop();
        }
        cout<<endl;
        
    }else{
        cout<<"NO"<<endl;
    }

        
}
int main(){
    int t ; 
    cin>>t ;
    for(int i = 0 ; i < t; i++)
        solve1();
    return 0;
}