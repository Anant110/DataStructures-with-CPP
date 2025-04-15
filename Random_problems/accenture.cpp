// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int cnt=0;
//     for(int i=a;i<=b;i++){
//         int n=i;
//         while(n!=0){
//             int k=n%10;
//             if(k==1 || k==9 || k==4){
//                 n=n/10;
//                 if(n==0){
//                     cnt++;
//                     break;
//                 }
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     cout<<cnt<<endl;
//     return 0;
// }


// #include <stdio.h>
// int main () {
// int a=3, *b = &a;
// printf ("%d", a**b) ;
// }

// int main ()
// {
// int a[]={2,4, 6, 8, 10};
// int i, sum=0, *b=a+4;
// for(i=0;i<5;i++)
// {
// sum+=(*b-i) -* (b-i);
// }
// printf("%d\n",sum);

// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         int m=(2*b-a);
//         int n=(2*a-b);

//         if(m%3==0 && m>=0 && n%3==0 && n>=0){
//             cout<<"YES";
//         }
//         else{
//             cout<<"NO";
//         }

//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={2,2,4,4,6,7,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     unordered_map<int,int> mpp(n);
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         cout<<it.first<<":"<<it.second<<" ";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     unordered_map<int,int> mpp;
//     int cnt=0;
//     for(int i=0;i<s.size();i++){
//         if(mpp.find(s[i])==mpp.end()){
//             mpp[s[i]]++;
//             cnt+=2;
//         }
//         else{
//             cnt+=1;
//         }  
//     }
//     cout<<cnt;
// }



//  #include<bits/stdc++.h>
//  using namespace std;  
//  int main(){
//     string str[]={"char_7","char_8","char_9"};
//     int n=sizeof(str)/sizeof(str[0]);
//     for(int i=0;i<n;i++){
//         string res=str[i];
//         for(int i=0;i<res.size();i++){
//             if(isdigit(res[i])){
//                 cout<<res[i];
//             }
//         }
//     }
//  }



#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string str="AAB";
//     int n=str.size();
//     int cnt=0;
//     do{
//         cnt++;
//     }
//     while(next_permutation(str.begin(),str.end()));
//     cout<<cnt;
// }

int main(){
    int k=10%2;
cout<<k;
}