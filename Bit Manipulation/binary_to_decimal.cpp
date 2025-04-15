#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    int cnt=0;
    int k=n.size();
    int m=0;
    for (int i = k - 1; i >= 0; i--) {
        if (n[i] == '1') {
            cnt += (pow(2, m));
        }
        m++;
    }
    cout<<cnt;
}