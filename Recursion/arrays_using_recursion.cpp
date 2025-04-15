// #include<iostream>
// using namespace std;

// bool issorted(int *arr,int size){
//     if(size==0 || size==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         bool remainingpart=issorted(arr+1,size-1);
//         return remainingpart;
//     }
// }


// int main(){
//     int arr[5]={7,10,15,20,34};
//     int size=5;

//     int ans=issorted(arr,size);

//     if(ans){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted"<<endl;
//     }

    
// }

//Sum of array using recursion
// #include<iostream>
// using namespace std;

// int getsum(int *arr,int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return arr[0];
//     }
//     else{
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum=sum+arr[i];
//         }
//         return sum;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans=getsum(arr,n);
//     cout<<ans<<endl;

//     return 0;
// }

