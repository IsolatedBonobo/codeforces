#include<bits/stdc++.h>
using namespace std;

void diffuseBomb(){
    int b, a, n;
    cin>>a>>b>>n;

    vector<int>tool(n);
    for(int i = 0 ; i < n; i++){
        cin>>tool[i];
    }
    int ans = 0 ; 
    int timer = b ;
    while(timer > 0){
        ans++ ;
        // choose a tool wisely 
        for(int i = 0 ;i < n; ){
            if(tool[i] == -1){
                i++;
                continue;
            }
            // when timer is just to end 
            if(timer == 1 && (timer + tool[i]) < a){
                timer += tool[i];
                tool[i] = -1;
                break;
            }
            else if(timer == 1 && !(timer + tool[i]) < a) {
                timer = a ; 
                tool[i] = -1;
                break;
            }
            if((timer + tool[i]) < a){
                timer += tool[i];
                tool[i] = -1;
                break;
            }
            i++;
        }
        timer--;
        
    }
    
    cout<<ans<<endl;
    
}
int main(){
    int t ; 
    cin>>t;
    for(int i = 0 ; i < t; i++){
        diffuseBomb();
    }
    return 0;
}