#include <bits/stdc++.h>
using namespace std;

int main() 
{
int A = 30;
int B = 45;
int C = 36;

//Output the maximum value of A, B
cout<<max(A, B)<<endl;

//Output the minimum value of A, B
cout<<min(A, B)<<endl;

//Output the absolute value of the difference of A and C
cout<<abs(A - C)<<endl;

//Output the absolute value of the difference of C and A
cout<<abs(C - A)<<endl;

int D = 6;
int E = 9;
//Output the remainder when A is divided by D and E
cout<<A % D<<endl;
cout<<A % E<<endl;

return 0;
}