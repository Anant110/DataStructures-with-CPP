#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> result(n);
    for(int i=0;i<n;i++){
        result.push_back(1);
    }
    int orig=2;
    int k=orig;
    int sign=1;
    for(int i=2;i<=n;i++){
        if(i==2){
            while(k<=n){
            if(k%i==0){
            if(result[i-1]==1){
                result[i-1]=0;
            }            
            }
            k++;
        }
        k=orig+sign;
        sign++;
        }
        else{
            while(k<=n){
                if(k%i==0){
                    if(result[i-1]==1){
                        result[i-1]=0;
                    }
                    else if(result[i-1]==0){
                        result[i-1]=1;
                    }
                }
                k++;
            }
        k=orig+sign;
        sign++;
        }
    }

    for(int i=0;i<n;i++){
        if(result[i]==1){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
}