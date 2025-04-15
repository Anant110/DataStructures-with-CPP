#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    cout<<"Reverse array is"<<endl;
    for(int i=(n-1);i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}