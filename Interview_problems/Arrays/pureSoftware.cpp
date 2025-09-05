// Online C++ compiler to run C++ program online
//Write a function that rotates the elements of a std::vector<int> to the right by k positions.
 
// Example:
// Input:  v = {1, 2, 3, 4, 5}, k = 2
// Output: v = {4, 5, 1, 2, 3}
 
// Implement the function:
// void rotateRight(std::vector<int>& v, int k);
 
// The rest of the code handles input and output.

#include<bits/stdc++.h>
using namespace std;
 
void rotateRight(std::vector<int>& v, int k) {
    int n=v.size();
    int s=n-k;
    vector<int> result;
    vector<int> temp;
    for(int i=s;i<n;i++){
        temp.push_back(v[i]);
    }
    for(int i=0;i<s;i++){
        temp.push_back(v[i]);
    }
    
    for(int i=0;i<n;i++){
        v[i]=temp[i];
    }
    
}
 
int main() {
    int n, k;
    std::cin >> n;
 
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
 
    std::cin >> k;
 
    rotateRight(v, k);
 
    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << "\n";
 
    return 0;
}