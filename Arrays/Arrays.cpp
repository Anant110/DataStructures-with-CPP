#include<iostream>
using namespace std;
int getmax(int num[],int size){
    int max=INT_MIN;
    for(int i=0;i<=size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getmin(int num[],int size){
    int min=INT_MAX;
    for(int i=0;i<=size;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}

int main(){
    // char ch[5]={'a','b','f','h','i'};
    // cout<<ch[4]<<endl;
    // cout<<"All the values of array is:"<<endl;
    // for(int i=0;i<=4;i++){
    //     cout<<ch[i]<<endl;
    // }
    // cout<<"Printing DONE"<<endl;

    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<=size;i++){
        cin>>num[i];
    }
    cout<<"Max Value is:"<<getmax(num,size)<<endl;
    cout<<"Min Value is:"<<getmin(num,size)<<endl;

}