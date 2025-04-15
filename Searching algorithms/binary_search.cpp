#include<iostream>
using namespace std;
int Binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }


        else if(key>arr[mid]){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int even[5]={12,34,36,39,46};
    int result=Binarysearch(even,5,46);
    cout<<"Element present at index: "<<result<<endl;

    return 0;
}