// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> result(3);
//     int n=3;
//     for(int i=0;i<n;i++){
//         cin>>result[i];
//     }
//     string s;
//     cin>>s;
//     for(int i=0;i<n;i++){
//         if(s=="Red"){
//             cout<< min(result[i+1],result[i+2]);
//             break;
//         }
//         else if(s=="Green"){
//             cout<< min(result[i],result[i+2]);
//             break;
//         }
//         else{
//             cout<< min(result[i],result[i+1]);
//             break;
//         }
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x1,x2,x3,y1,y2,y3;
//     cin>>x1>>y1;
//     cin>>x2>>y2;
//     cin>>x3>>y3;
//     int a,b,c;
//     a=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
//     b=((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
//     c=((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1));
//     if(a+b==c || b+c==a || a+c==b) {
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   vector<string> str(n);
//   int k=str.size();
//   for(int i=0;i<n;i++){
//     cin>>str[i];
//   }
// //   if(k<=2) cout<<"Yes"<<endl;
//   int cnt=0;
//   for(int i=0;i<k-1;i++){
//     if(str[i]=="sweet" && str[i+1]=="sweet" ){
//         cout<<"No"<<endl;
//         cnt++;
//         break;
//     }
//     else{
//         continue;
//     }
//   }
//   if(cnt==0){
//     cout<<"Yes"<<endl;
//   }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int k;
//   cin>>k;
//   if(k%4==0 && k%100!=0) cout<<366<<endl;
//   else if(k%100==0 && k%400==0) cout<<366<<endl;
//   else cout<<365<<endl;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   unordered_map<int,int> mpp;
//   vector<int> arr(n);
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   for(int i=0;i<n;i++){
//     mpp[arr[i]]=i+1;
//   }
//   sort(arr.begin(),arr.end());
//   int k=arr[n-2];
//   cout<<mpp[k]<<endl;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   string s;
//   string str;
//   for(int i=0;i<n;i++){
//     cin>>s[i];
//   }
//   for(int i=0;i<n;i++){
//     if(s[i]=='P'){
//       if(str[i-1]!='S'){
//         str[i]='S';
//       }
//       else{
//         str[i]='P';
//       }
//     }
//     else if(s[i]=='R'){
//       if(str[i-1]!='P'){
//         str[i]='P';
//       }
//       else{
//         str[i]='R';
//       }
//     }
//     else if(s[i]=='S'){
//       if(str[i-1]!='R'){
//         str[i]='R';
//       }
//       else{
//         str[i]='S';
//       }
//     }
//   }
//   for(auto x:str){
//     cout<<x;
//   }
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;  // Read the entire string at once
    
//     string str(n, ' ');  // Initialize the result string with spaces of size n
    
//     // Handle the first character
//     if (s[0] == 'P') {
//         str[0] = 'S';
//     } else if (s[0] == 'R') {
//         str[0] = 'P';
//     } else if (s[0] == 'S') {
//         str[0] = 'R';
//     }

//     // Handle the remaining characters
//     for (int i = 1; i < n; i++) {
//         if (s[i] == 'P') {
//             if (str[i-1] != 'S') {
//                 str[i] = 'S';
//             } else {
//                 str[i] = 'P';
//             }
//         } else if (s[i] == 'R') {
//             if (str[i-1] != 'P') {
//                 str[i] = 'P';
//             } else {
//                 str[i] = 'R';
//             }
//         } else if (s[i] == 'S') {
//             if (str[i-1] != 'R') {
//                 str[i] = 'R';
//             } else {
//                 str[i] = 'S';
//             }
//         }
//     }
//     int cnt=0;
//     for(int i=0;i<n;i++){
//       if(str[i]!=s[i]){
//         cnt++;
//       }
//     }
//     cout<<cnt;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,t,a;
//     cin>>n>>t>>a;
//     int res=abs(t-a);
//     int sum=t+a;
//     int rem=n-sum;
//     if(rem>res) cout<<"No"<<endl;
//     else{
//         cout<<"Yes"<<endl;
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;

// // int main(){
// //   string s;
// //   cin>>s;
// //   string res="";
// //   for(int i=0;i<s.size();i++){
// //     if(s[i]!='.'){
// //       res+=s[i];
// //     }
// //   }
// //   cout<<res;
// // }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     string c;
//     vector<pair<int,char>> mypair;
//     for(int i=0;i<b;i++){
//         pair<int,char> temp;
//         cin>>temp.first;
//         cin>>temp.second;
//         mypair.push_back(temp);
//     }
//     for(int i=0;i<b;i++){
//         c[mypair[i].first-1]=mypair[i].second;
        
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     int cnt1=0;
//     int cnt2=0;
//     int cnt3=0;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='1'){
//             cnt1++;
//         }
//         else if(s[i]=='2'){
//             cnt2++;
//         }
//         else if(s[i]=='3'){
//             cnt3++;
//         }
//     }
//     if(cnt1==1 && cnt2==2 && cnt3==3){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={1,2,3};
//     cout<<arr[-1];
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int fcnt=0;
    if(n%2==0) fcnt++;
    int size=n/2;
    int cnt=0;
    for(int i=1;i<=size;i++){
        int k=2*i-1;
        int g=2*i;
        if(s[k-1]==s[g-1]) cnt++;
    }
    if(cnt==size) fcnt++;
    unordered_map<char,int> mpp;
    for(int i=0;i<n;i++){
        mpp[s[i]]++;
    }
    int cntt=0;
    for(auto it:mpp){
        if(it.second==2){
            cntt++;
        }
    }
    if(cntt==mpp.size()) fcnt++;

    if(fcnt==3) cout<<"Yes";
    else cout<<"No";
}

