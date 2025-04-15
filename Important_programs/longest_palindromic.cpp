#include <bits/stdc++.h>
using namespace std;

string func(string s, int n)
{

    auto expand_center = [&](int left, int right)
    {
        while (left >= 0 && right < n && s[left] == s[right])
        {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    };

    string max_str = s.substr(0, 1);

    for (int i = 0; i < s.size(); i++)
    {
        string odd = expand_center(i, i);
        string even = expand_center(i, i + 1);

        if(odd.size()>max_str.size()){
            max_str=odd;
        }

        if(even.size()>max_str.size()){
            max_str=even;
        }
    }

    return max_str;
}

int main()
{
    string s = "ABRBADAADAB";
    int n = s.size();
    string result = func(s, n);

    cout<<result;
}