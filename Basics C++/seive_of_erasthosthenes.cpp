// #include<bits/stdc++.h>
// using namespace std;

// //Seive of erasthosthenes

// int main(){
//     int n;
//     cin>>n;
//     int prime[n+1];
//     for(int i=2;i<=n;i++){
//         prime[i]=1;
//     }

//     for(int i=2;i*i<=n;i++){
//         if(prime[i]==1){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=0;
//             }
//         }
//     }

//     for(int i=2;i<=n;i++){
//         if(prime[i]==1){
//             cout<<i<<" ";
//         }
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int isprime[31];

void seive(){
    fill(isprime,isprime+31,true);
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i*i<31;i++){
        if(isprime[i]==true){
            for(int j=i*i;j<31;j+=i){
                isprime[j]=false;
            }
        }
    }
}
int main(){
    seive();
    for(int i=0;i<31;i++){
        if(isprime[i]==true){
            cout<<i<<" ";
        }
    }
}