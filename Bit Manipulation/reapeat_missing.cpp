#include<bits/stdc++.h>
using namespace std;

vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int xr=0;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            xr=xr^arr[i];
            xr=xr^(i+1);
        }
        
        int bitNo=0;
        while(1){
            if((xr&(1<<bitNo))!=0){
                break;
            }
            bitNo++;
        }
        
        
        int zero=0;
        int one=0;
        for(int i=0;i<n;i++){
            if((arr[i]&(1<<bitNo))!=0){
                one=one^arr[i];
            }
            else{
                zero=zero^arr[i];
            }
        }
        
        for(int i=1;i<=n;i++){
            if((i&(1<<bitNo))!=0){
                one=one^i;
            }
            else{
                zero=zero^i;
            }
        }
        
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==zero) cnt++;
        }
        
        if(cnt==2) return {zero,one};
        
        return {one,zero};
    }

int main(){
    vector<int> arr={4,3,6,2,1,1};

    vector<int> result=findTwoElement(arr);

    cout<<"Repeating number is "<<result[0]<<endl;
    cout<<"Missing number is "<<result[1]<<endl;

}