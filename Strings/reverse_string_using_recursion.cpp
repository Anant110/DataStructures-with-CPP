// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void reverse(string& str,int i,int j){
//     if(i>j){
//         return;
//     }
//     swap(str[i],str[j]);
//     i++;
//     j--;

//     reverse(str,i,j);
// }

// int main(){
//     string name="prashasti";

//     reverse(name,0,name.length()-1);

//     cout<<name<<endl;
// }
int main(){
    string str="hello";
    reverse(str.begin(),str.end());
    cout<<str;
}

// #include <bits/stdc++.h>

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    // Write your code here.
// }
