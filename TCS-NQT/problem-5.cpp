#include<bits/stdc++.h>
using namespace std;

int main(){
    int small = INT_MAX;
    int second_small = INT_MAX;
    int arr[]={4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }

    }
   cout<< second_small<<endl;
   cout<< small;  
}