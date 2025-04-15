#include <bits/stdc++.h>
using namespace std;

int main() {
    string X, Y;
    cin >> X >> Y;
    
    int S, R;
    cin >> S >> R;
    
    int n = X.length();
    int m = Y.length();
    
    string Y_rev = Y;
    reverse(Y_rev.begin(), Y_rev.end());
    

    vector<int> dp(n + 1, INT_MAX);
    

    dp[0] = 0;

    for (int i = 0; i < n; ++i) {
        if (dp[i] == INT_MAX) continue;
        
        for (int j = 1; j <= m && i + j <= n; ++j) {
            string sub_X = X.substr(i, j);
            
            if (Y.find(sub_X) != string::npos) {
                dp[i + j] = min(dp[i + j], dp[i] + S);
            }
            
            if (Y_rev.find(sub_X) != string::npos) {
                dp[i + j] = min(dp[i + j], dp[i] + R);
            }
        }
    }
    
    if (dp[n] != INT_MAX) {
        cout << dp[n] << endl;
    } else {
        cout << "Impossible" << endl;
    }
    
    return 0;
}
