#include <bits/stdc++.h> 
using namespace std;

vector<string> validip(string ipAddress){
    string temp="";
    stringstream ss(ipAddress);
    vector<string> result;
    while(getline(ss,temp,'.')){
        result.push_back(temp);
    }
    return result;
}
int isValidIPv4(string ipAddress) {
    // Write your code here.
    vector<string> ip=validip(ipAddress);
    int n=ip.size();
    if(n>4 || n<4) return false;
    else{
        for(int i=0;i<n;i++){
            int m=stoi(ip[i]);
            cout<<m<<endl;
        }
    }
    return 0;
}