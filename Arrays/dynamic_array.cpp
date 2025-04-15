#include<iostream>
using namespace std;

//Create variable size array
// int getsum(int *arr , int n){
//     int sum=0;

//     for(int i=0 ; i<n ;i++){
//         sum+=arr[i];
//     }

//     return sum;
// }


// int main(){

//     int n;
//     cin>>n;

//     int *arr=new int[5];

//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }

//     int ans=getsum(arr , n);

//     cout<<"Answeer is "<<ans<<endl;

//     return 0;
// }

//when same no. of rows and columns
// int main(){
//     int n;
//     cin>>n;
//     int **arr=new int*[n];
//     for(int i=0; i<n ;i++){
//         arr[i]=new int[n];
//     }
//      // taking input
//     for(int i=0; i<n ;i++){
//         for(int j=0 ; j<n ; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0; i<n ;i++){
//         for(int j=0 ; j<n ; j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }

// }


// when different no. of rows and columns
int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;


    int **arr=new int*[row];
    for(int i=0; i<row ;i++){
        arr[i]=new int[col];
    }
     // taking input
    for(int i=0; i<row ;i++){
        for(int j=0 ; j<col ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<row ;i++){
        for(int j=0 ; j<col ; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    //releasing memory
    for(int i=0 ;i<row ;i++){
        delete[] arr[i];
    }

    delete[]arr;

}
