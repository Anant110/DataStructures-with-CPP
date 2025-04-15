// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     // int choti=factorial(n-1);
//     // int badi=n*choti;
    
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cin>>n;

//     int ans=factorial(n);
//     cout<<ans<<endl;
    
// }

//program of power of 2

// #include<iostream>
// using namespace std;

// int power(int n){
//     if(n==0){
//         return 1;
//     }

//     return 2*power(n-1);
// }


// int main(){
//     int n;
//     cin>>n;
//     int ans=power(n);
//     cout<<ans<<endl;
// }

//Tail recursion

// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;

//     print(n-1);
// }


// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     print(n);

//     return 0;
// }

//Head recursion
#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }

    print(n-1);
    
    cout<<n<<endl;
}


int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);

    return 0;
}