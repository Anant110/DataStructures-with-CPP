//Linear search using recursion

// #include<iostream>
// using namespace std;

// int linearsearch(int *arr,int n){
//     if(n==0){
//         return 0;
//     }
//     int element;
//     if(arr[0]==element){
//         return arr[0];
//     }
//     else{
//         for(int i=0;i<n;i++){
//             if(arr[i+1]==element){
//                 return i;
//             }
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int element;
//     cout<<"Element to be found"<<endl;
//     cin>>element;

//     int ans=linearsearch(arr,n);
//     cout<<ans<<endl;

//     return 0;

// }

// Another method
#include<iostream>
using namespace std;

bool linearsearch(int *arr,int size,int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        int remainingpart=linearsearch(arr+1,size-1,k);
        return remainingpart;
    }
}


int main(){
    int arr[6]={23,56,34,12,78,90};
    int size =6;
    int key=32;
    bool ans=linearsearch(arr,size,key);

    if(ans){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }

}