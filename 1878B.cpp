#include<bits/stdc++.h>
using namespace std;
void fun(){
    int n ; 
    cin>>n ;
    vector<int>arr(n);
    int element = 1 ;
    for(int i = 0 ;i < n ;i++){
        arr[i] = element;
        element++;
    }
    for(int i = 0 ; i < n - 2 ; i++){
        
    }
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    // int t;
    // cin>> t; 
    // for(int i = 0 ; i < t; i++){
    //     fun();
    // }
    int n ; 
    cin>>n ;
    vector<int>arr(n);
    int element = 1 ;
    for(int i = 0 ;i < n ;i++){
        arr[i] = element;
        element++;
    }
    for(int i = 0 ; i < n - 2 ; i++){
        int element1 = arr[i];
        while((3 * arr[i + 2]) % (arr[i] + arr[i +1]) == 0){
            arr[i] = element1++;
            arr[i+1] = arr[i]++;
            arr[i+2] = arr[i+1]++;
        }
    }
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}