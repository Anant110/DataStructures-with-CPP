
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length(), p = 0;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    int le = s[0] - '0', pl = v[0];
    for (int i = 1; i < n; ++i) {
        if (s[i] - '0' == le) {
            p += min(pl, v[i]);
            pl = max(pl, v[i]);
        } 


        else {
            le = s[i] - '0';
            pl = v[i];
        }
    }
    cout << p;
    return 0;
}
