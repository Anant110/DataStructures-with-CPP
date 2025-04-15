// #include<iostream>
// using namespace std;

// bool search(int arr[],int n,int key)
// {
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return 1;
//         }

//     }
//         return 0;
// }

// int main(){
//     int arr[10]={8,9,3,5,7,1,0,4,45,89};
//     int key;
//     cout<<"Enter the element to be searched"<<endl;
//     cin>>key;

//     bool found=search(arr,10,key);
//     if(found){
//         cout<<"Element to be present"<<endl;
//     }
//     else{
//         cout<<"Element is absent"<<endl;
//     }

//     return 0;


// }

#include<iostream>
using namespace std;
int main(){
    int arr[100],size,key,index,i;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the elements you want"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            index=i;
        }
    }
    if(arr[index]==key){
        cout<<"Element is present at index: "<<index;
    }
    else{
        cout<<"Element is not present";
    }
}