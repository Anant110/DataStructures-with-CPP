// #include<iostream>
// using namespace std;

// bool checkpalindrone(string str,int i,int j){
//     if(i>j){
//         return true;
//     }

//     if(str[i]!=str[j]){
//         return false;
//     }

//     else{
//         return checkpalindrone(str,i+1,j-1);
//     }

// }

// int main(){
//     string name="121";
//     cout<<endl;

//     bool ispalindrone=checkpalindrone(name,0,name.length()-1);

//     if(ispalindrone){
//         cout<<"It is a palindrone"<<endl;
//     }
//     else{
//         cout<<"It is not a palindrone"<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
// 	int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         int sum=0;
//         for(int i=0;i<n-1;i++){
//             cin>>arr[i];
//             sum=(sum+(arr[0]*arr[i+1]));
//             cout<<sum<<endl;
//         }
        
//     }
    
// 	return 0;
// }


#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    char lucky=s[6];
    cout<<lucky<<endl;
}