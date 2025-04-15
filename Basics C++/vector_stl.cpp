// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     cout<<"size->"<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"size->"<<v.capacity()<<endl;

    
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for (const auto &x: v)
      sort(v.begin(), v.end());
   for (const auto &x: v)
      cout << x << ' ';
       
    return 0;
}