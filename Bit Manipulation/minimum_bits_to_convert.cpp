#include<bits/stdc++.h>
using namespace std;


int main(){
    int start,goal;
    cin>>start>>goal;
    int ans=start^goal;
    int cnt=0;
    //count the number of set bits  //32 becoz it is given that it is integer
    for(int i=0;i<32;i++){
        if(ans & (1<<i)){
            cnt+=1;
        }                                           
    }
    cout<<cnt;
}
