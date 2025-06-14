#include<iostream>
#include<queue>
using namespace std;

// class heap{
// public:

//     int arr[100];
//     int size=0;

//     void insert(int val){
//         size=size+1;
//         int index=size;
//         arr[index]=val;

//         while(index>1){
//             int parent=index/2;

//             if(arr[parent]<arr[index]){
//                 swap(arr[parent],arr[index]);
//                 index=parent;
//             }
//             else{
//                 return;
//             }
//         }
//     }

//     void deleteFromHeap(){
//         if(size==0){
//             cout<<"Notihing to delete"<<endl;
//             return;
//         }
//         // step 1: Put last element into the first index element
//         arr[1]=arr[size];
//         // step 2: rempve the last element from the tree
//         size--;

//         // step 3 :take root node form its correct position
//         int i=1;
//         while(i<size){
//         int leftIndex=2*i;
//         int rightIndex=2*i+1;

//         if(leftIndex<size && arr[i]<arr[leftIndex]){
//             swap(arr[i],arr[leftIndex]);
//             i=leftIndex;
//         }
//         else if(rightIndex<size && arr[i]<arr[rightIndex]){
//             swap(arr[i],arr[rightIndex]);
//             i=rightIndex;
//         }
//         else{
//             return;
//         }
//     }
//     }

//     void print(){
//         for(int i=1;i<=size;i++){
//             cout<<arr[i]<<" ";
//         }cout<<endl;
//     }

// };
// void heapify(int arr[],int n,int i){
    
//     int largest=i;
//     //for 0 base indexing
//     // int left=2*i+1;
//     // int right=2*i+2;
//     int left=2*i;
//     int right=2*i +1;
//     //left<=n because of base 1 indexing if 0 base indexing then left<n same as for right
//     if(left<=n && arr[largest]<arr[left]){
//         largest=left;
//     }
//     if(right<=n && arr[largest]<arr[right]){
//         largest=right;
//     }
//     if(largest!=i){
//         swap(arr[largest],arr[i]);
//         heapify(arr,n,largest);
//     }
// }
// void heapsort(int arr[],int n){
//     int size=n;
//     while(size>1){
//         swap(arr[size],arr[1]);
//         size--;

//         heapify(arr,size,1);
//     }
// }

int main(){
    // heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.print();

    // h.deleteFromHeap();
    // h.print();

    // int arr[6]={-1,54,53,55,52,50};
    // int n=5;
    // for(int i=n/2;i>0;i--){
    //     heapify(arr,n,i);
    // }
    // cout<<"Printing the array now"<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    // heapsort(arr,n);
    // cout<<"Printing the heap sorted array"<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;


    //max Heap using STL
    priority_queue<int> pq;

    pq.push(89);
    pq.push(90);
    pq.push(56);
    pq.push(78);


    cout<<"Print the top element is "<<pq.top()<<endl;
    pq.pop();

    cout<<"Print the top element is "<<pq.top()<<endl;
    cout<<"Size is "<<pq.size()<<endl;


    //min heap using STL
    priority_queue<int,vector<int>,greater<int> > minheap;

    minheap.push(89);
    minheap.push(90);
    minheap.push(56);
    minheap.push(78);
                                                             
    cout<<"Print the top element is "<<minheap.top()<<endl;
    minheap.pop();

    cout<<"Print the to element is "<<minheap.top()<<endl;
    cout<<"Size is "<<minheap.size()<<endl;

    return 0;
}