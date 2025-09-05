// #include<bits/stdc++.h>
// using namespace std;

// void subs(int ind,vector<int>& ds,int arr[],int n){
//     if(ind==n){
//         for(auto it:ds){
//             cout<<it<<" ";
//         }
//         if(ds.size()==0){
//             cout<<"{}";
//         }
//     cout<<endl;
//     return;
//     }
//     ds.push_back(arr[ind]);

//     //picked the element
//     subs(ind+1,ds,arr,n);
//     ds.pop_back();

//     //not picket the element
//     subs(ind+1,ds,arr,n);

// }

// int main(){
//     int arr[]={3,1,2};
//     int n=3;
//     vector<int>ds;
//     subs(0,ds,arr,n);
// }

#include<bits/stdc++.h>
using namespace std;

void subsequence(int arr[],int n,int ind,vector<int>& result){
    if(ind>=n){
        if(result.size()==0){
            cout<<"{}";
            cout<<endl;
        }
        for(auto it:result){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    result.push_back(arr[ind]);

    //picking the part
    subsequence(arr,n,ind+1,result);
    result.pop_back();

    //not picking the part
    subsequence(arr,n,ind+1,result);
}

int main(){
    int arr[]={4,5,8,9};

    int n=4;
    vector<int> result;
    subsequence(arr,n,0,result);
}