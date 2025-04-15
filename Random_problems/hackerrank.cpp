//Hackerrank problem-1 c++
// #include<iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
    
//     string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
//     for (int i = a; i <= b; i++){
//         if(i <= 9){
//             cout << arr[i-1] << endl;
//         }
        
//         else {
//             if(i % 2 == 0){
//                 cout << "even" << endl;
//             }
//             else {
//             cout << "odd" << endl;
//             }
//         }
//     }
    
//     return 0;
// }

//Hackerrank problem-2 c++
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    int k;
    char ch;
    
    string input;
    cin >> input;
    stringstream ss(input);
    
    while(ss){
        ss >> k;
        cout << k << endl;
        ss >>ch;
    }

    return 0;
}