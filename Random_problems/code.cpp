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
//     int rem=0;
//     int a;
//     cin>>a;
//     int sum=0;
//     while(a!=0){
//         rem=(a%10);
//         sum+=rem;
//         a/=10;
//     }
//     cout<<sum;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int sum=0;
//     int cnt=0;
//     int rem=0;
//     while(a!=0){
//         if(cnt%2==0){
//             rem=a%10;
//             sum+=rem;
//             a/=10;
//             cnt++;
//         }
//         else{
//             rem=a%10;
//             sum-=rem;
//             a/=10;
//             cnt++;
//         }
//     }
//     cout<<sum;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==k){
//             cout<<i;
//             cnt++;
//         }
//     }
//     if(cnt==0){
//         cout<<-1;
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 1234;
//     int q, r, rn;
//  q=n , rn = 0;
// while(q > 0){
//     r = q % 10;
// rn = rn + r^3;
// q=q/10;
// }
// cout<< rn;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     set<int> st;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }
//     int cnt=0;
//     vector<int> result(st.begin(),st.end());
//     int k=result.size();
//     int ele=result[k-2];
//     for(int i=0;i<n;i++){
//         if(arr[i]==ele){
//             cnt++;
//         }
//     }
//     cout<<cnt;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str[]={"file_8","file_10","file_11","file_2"};
//     int n=sizeof(str)/sizeof(str[0]);
//     string result;
//     int res=0;
//     int mini=INT_MIN;
//     for(int i=0;i<n;i++){
//         string phi=str[i];
//         for(int j=0;j<phi.size();j++){
//             if(isdigit(phi[j])){
//                 res=res*10+(phi[j]-'0');
//             }
//         }
//         if(res>mini){
//             result=phi;
//             mini=res;
//         }
//         res=0;
//     }
//     cout<<mini;
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i;
//     i=1;
//     i+=2*i++;
//     printf("%d",i);
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // int arr[]={-2,-4,-9,1,6,7,-5,-3,2,-6};
//     // int n=sizeof(arr)/sizeof(arr[0]);
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int i=0;
//     int j=0;
//     while(j<n){
//         while(i<n && arr[i]<0){
//             i++;
//         }
//         j=i;
//         while(j<n && arr[j]>=0){
//             j++;
//         }
//         if(j<n) swap(arr[i],arr[j]);
//         i++;
//     }
//     for(auto it:arr){
//         cout<<it<<" ";
//     }
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hello world";
    int j=s.size()-1;
    string str;
    string result;
    while(j>=0){
        while(j>=0 && s[j]!=' '){
            str+=s[j];
            j--;
        }
        int i=str.size()-1;
        while(i>=0){
            result+=str[i];
            i--;
        }
        if(j>0) result+=" ";
        str.clear();
        j--;
    }
    cout<<result;
}


// #include<bits/stdc++.h>
// using namespace std;

// bool ispalin(int a){
//     int k=a;
//     int res=0;
//     while(k!=0){
//         res=res*10+(k%10);
//         k/=10;
//     }
//     if(res==a) return true;
//     return false;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     vector<int> ans;
//     int cnt=0;
//     for(int i=a;i<=b;i++){
//         int palin=i;
//         if(ispalin(palin)){
//             cnt++;
//             ans.push_back(palin);
//         }
//         if(cnt==2){
//             break;
//         }
//     }
//     for(auto it:ans){
//         cout<<it<<" ";
//     }
// }