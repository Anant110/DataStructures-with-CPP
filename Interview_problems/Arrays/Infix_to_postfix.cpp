#include<bits/stdc++.h>
using namespace std;

//checking precedence
int precedence(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }

    else if(c=='+' || c=='-'){
        return 1;
    }

    else{
        return -1;
    }
}

string ConvertToPostfix(string& s){
    stack<char> st;
    string res;
    int n=s.size();

    for(int i=0;i<n;i++){
        if((s[i]>='a' && s[i]<='z' )|| (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
            res+=s[i];
        }

        else if(s[i]=='('){
            st.push(s[i]);
        }

        else if(s[i]==')'){
            while(st.top()!='('){
                res+=st.top();
                st.pop();
            }
            st.pop();
        }

        else{
            while(!st.empty() && precedence(s[i])<=precedence(st.top())){
                if(s[i]=='^' && st.top()=='^'){
                    break;
                }
                else{
                    res+=st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    return res;
}

int main(){
    string s="A+B/C+D*(E-F)^G";
    string result=ConvertToPostfix(s);

    cout<<result;
}