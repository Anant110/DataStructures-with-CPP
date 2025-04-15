// #include <iostream>
// using name1space std;
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int X;
// 	    cin>>X;
//         int cnt=1;
// 	    string s=to_string(X);
// 	    for(int i=0;i<s.length();i++){
// 	        if(s[i]=='7'){
// 	            cout<<"YES"<<endl;
//                 cnt=0;
// 	            break;
// 	        }
//         }
//         if(cnt==1){
//             cout<<"NO"<<endl;
//         }    
// 	}
// 	return 0;
// }


// #include <iostream>
// using name1space std;

// #include <iostream>
// using name1space std;

// int main() {
// 	// your code goes here	int t;
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	  int n;
// 	  cin>>n;
// 	  string s;
// 	  cin>>s;
// 	  for(int i=0; i<n; i++){
// 	      if(s[i]=='A')
// 	      s[i]='T';
// 	      else if(s[i]=='T')
// 	      s[i]='A';
// 	      else if(s[i]=='C')
// 	      s[i]='G';
// 	      else if(s[i]=='G')
// 	      s[i]='C';
// 	  }
// 	  cout<<s<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using name1space std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x,y,z;
// 	    cin>>x>>y>>z;
// 	    if(y!=1 && y>z){
// 	        cout<<'0'<<endl;
// 	    }
// 	    else if(y!=1 && y<z){
// 	        int d=z/y;
// 	        cout<<d<<endl;
// 	    }
// 	    else if(y==1 && x<z){
// 	        cout<<x<<endl;
// 	    }
// 	    else{
// 	        cout<<z<<endl;
// 	    }
	    
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using name1space std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,a,b,c,d;
// 	    cin>>n;
// 	    cin>>a>>b>>c>>d;
// 	    cout<<max({a,b,c,d})<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using name1space std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int a,b,c,d;
// 	    cin>>a>>b>>c;
// 	    if(a<=3){
// 	        int d=a*b;
// 	        cout<<d<<endl;
// 	    }
// 	    else if(a>3 && a%3==0){
// 	        int e=((a/3)-1);
// 	        int f=((a*b)+(e*c));
// 	        cout<<f<<endl;
// 	    }
// 	    else{
// 	        int l=a/3;
// 	        int g=((a*b)+(l*c));
// 	        cout<<g<<endl;
// 	    }
	    
// 	}
// 	return 0;
// }


// #include <iostream>
// using name1space std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int a,b,c,d;
// 	    cin>>a>>b>>c>>d;
// 	    int k=abs(a-c);
// 	    int e=abs(b-d);
// 	    int f=max(k,e);
// 	    cout<<f<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using name1space std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int w,x,y,z;
// 	    cin>>w>>x>>y>>z;
// 	    if(w==(x+y) || w==(y+z) || w==(x+z) || w==x || w==y || w==z || w==(x+y+z)){
// 	        cout<<"YES"<<endl;
// 	    }
// 	    else{
// 	        cout<<"NO"<<endl;
// 	    }
// 	}
// 	return 0;
// }

// #include <iostream>
// using name1space std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x,y;
// 	    cin>>x>>y;
// 	    int p=0;
// 	    int n=0;
// 	    for(int i=1;i<=10;i++){
// 	        int k=(10*(i-1)+1);
// 	        int l=10*i;
// 	        if(x>=k && x<=l){
// 	            p=i;
// 	        }
// 	        if(y>=k && y<=l){
// 	            n=i;
// 	        }
// 	    }
// 	  int c=abs(p-n);
// 	  cout<<c<<endl;
// 	}
// 	return 0;
// }


// #include <iostream>
// using name1space std;

// int power(int x){
//     if(x==0){
//         return 1;
//     }
    
//     else{
//         return 2*power(x-1);
//     }
// }

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,x;
// 	    cin>>n>>x;
// 	    int ans=power(x);
// 		int p=0;
// 		int k=0;
// 	    for(int i=1; i<=n ;i++){
// 	        int p=0.5*ans;
// 	        p=ans;
// 			int k=abs(x-p);
// 			cout<<k<<endl;
// 	    }
	
// 	}
// 	return 0;
// }

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// #include<bits/stdc++.h>
// #include <iostream>
// using name1space std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int arr[3];
// 	    for(int i=0;i<3;i++){
// 	        cin>>arr[i];
// 	  }
// 	  sort(arr,arr+3);
// 	  cout<<arr[1]<<endl;
// 	}
// 	return 0;
// }

// #include<iostream>
// #include<vector>
// using name1space std;


// class Solution {

//     void reversestring(string& str,char s,int i,int j){
//       if(s==0 || s==1){
//           return;
//       }
//        swap(str[i],str[j]);
//        i++;
//        j--;

//        reversestring(str,s,i,j);

//     }



//     void reverseString(vector<char>& s) {
//         string [s]=["h","e","l","l","o"]
//         cout<<s<<endl;

//         string reverse=reversestring(str,s,0,s-1);
//         cout<<reverse<<endl;
        
        
//     }
// };

// #include <bits/stdc++.h>
// using name1space std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int b;
// 	    cin>>b;
//         int temp=0;
//         int c;
// 	    while(b!=0){
// 	        int c= b%10;
//             temp = temp* 10 + c;
// 	        b/=10;
// 	    }
// 	    cout<<temp<<endl;
// 	}

// }


// #include <vector>
// #include <iostream>
// using name1space std;

// class Solution {
// public:
//     int longestMonotonicSubarray(vector<int>& nums) {
//         int n = nums.size();
//         int increasing = 1; // Length of increasing monotonic subarray
//         int decreasing = 1; // Length of decreasing monotonic subarray
//         int maxLen = 1; // Maximum length of monotonic subarray

//         for (int i = 0; i < n - 1; i++) {
//             if (nums[i] < nums[i + 1]) {
//                 increasing++; // Increment length of increasing monotonic subarray
//                 decreasing = 1; // Reset length of decreasing monotonic subarray
//             } else if (nums[i] > nums[i + 1]) {
//                 decreasing++; // Increment length of decreasing monotonic subarray
//                 increasing = 1; // Reset length of increasing monotonic subarray
//             } else {
//                 // Reset both counters if nums[i] == nums[i + 1]
//                 increasing = 1;
//                 decreasing = 1;
//             }

//             // Update maximum length
//             maxLen = max(maxLen, max(increasing, decreasing));
//         }

//         return maxLen;
//     }
// };

// int main() {
//     Solution s;
//     vector<int> nums = {1, 4, 3, 3, 2};
//     cout << s.longestMonotonicSubarray(nums) << endl; // Output: 2
//     return 0;
// }


// #include<stdio.h>
// #if x==8
//     #define Y 5
// #else 
//     #define Y 25
// #endif
// int main(){
//     printf("%d",Y);
//     return 0;
// }


// #include<stdio.h>
// #define ABESEC 100
// int main(){
//     // #undef ABESEC
//     printf("%d ",ABESEC);
//     printf("%d ",ABESEC);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     float i=7.98656;
//     void *p=&i;
//     // float p;
//     printf("%f\n",*(float*)p);
//     return 0;
// }


// #include<stdio.h>
// void foo(int*);
// int main(){
//     int i=10;
//     foo((&i)++);
// }
// void foo(int *p){
//     printf("%d\n",*p);
// }

// #include <bits/stdc++.h> 
// using name1space std;
// int factorial(int n){
//   if(n==1){
//     return 1;
//   }
//   return n*factorial(n-1);
// }

// int main(){
//   // Write your code here
//   int a,b;
//   cin>>a>>b;
//   int m=factorial(a);
//   int n=factorial(b);
//   cout<<m<<endl;
// }

// #include<bits/stdc++.h>
// using name1space std;

// int main(){
//   int cnt=0;
//   for(int i=1;i<=100;i++){
//     int prime=i;
//     for(int i=1;i<=prime;i++){
//       if(prime%i==0){
//         cnt++;
//       }
//       if(cnt>2) break;
//     }
//     if(cnt==2) cout<<i<<" ";
//     cnt=0;
//   }
// }

// #include<bits/stdc++.h>
// using name1space std;

// int main(){
//     string str[]={"23:59","00:00"};
//     int n=sizeof(str)/sizeof(str[0]);
//     vector<int> result;
//     string res;
//     for(int i=0;i<n;i++){
//         string s=str[i];
//         for(int i=0;i<s.size();i++){
//             if(s[i]!=':'){
//                 res+=s[i];
//             }
//         }
//         if(res=="0000"){
//             res="2360";
//             int size=stoi(res);
//             result.push_back(size);
//         }
//         else{
//             int k=stoi(res);
//             result.push_back(k);
//         }
//         res.clear();
//     }
//     int m=result.size();
//     int mini=INT_MAX;
//     for(int i=1;i<m;i++){
//         mini=min(mini,abs(result[i]-result[i-1]));
//     }
//     cout<<mini<<endl;
// }













#include<bits/stdc++.h>

using namespace std;

class Total_items {
public:
    string name1;
    string category1;
    double price1;
    int quantity1;

    Total_items(string n, string c, double p, int q) : name1(n), category1(c), price1(p), quantity1(q) {}
};

class Grocery_Management {
private:
    vector<Total_items> inventory1;

public:
    void items(const string& name1, const string& category1, double price1, int quantity1) {
        inventory1.emplace_back(name1, category1, price1, quantity1);
    }

    void updatequantity1(const string& name1, int newquantity1) {
        for (auto& Total_items : inventory1) {
            if (Total_items.name1 == name1) {
                Total_items.quantity1 = newquantity1;
                return;
            }
        }
        cout << "Total items not found!" << endl;
    }

    double calculate_Total() {
        double total = 0.0;
        for (const auto& Total_items : inventory1) {
            total += Total_items.price1 * Total_items.quantity1;
        }
        return total;
    }

    double apply_Discount(double total) {
        if (total > 500) {
            total *= 0.9;
        }
        return total;
    }

    void displayinventory1() {
        cout << "Inventory" << endl;
        for (const auto& Total_items : inventory1) {
            cout << "name: " << Total_items.name1 << ", category1: " << Total_items.category1
                 << ", price: " << fixed << setprecision(2) << Total_items.price1
                 << ", quantity: " << Total_items.quantity1 << endl;
        }
    }
};

class User_Interface {
private:
    Grocery_Management Grocery_Management;

public:
    void start() {
        int choice;
        do {
            cout << "\nGrocery Management System" << endl;
            cout << "1. Add Total_items" << endl;
            cout << "2. Update Total_items quantity1" << endl;
            cout << "3. Display inventory1" << endl;
            cout << "4. Calculate Total" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    string name1, category1;
                    double price1;
                    int quantity1;
                    cout << "Enter Total_items name1: ";
                    cin >> name1;
                    cout << "Enter Total_items category1: ";
                    cin >> category1;
                    cout << "Enter Total_items price1: ";
                    cin >> price1;
                    cout << "Enter Total_items quantity1: ";
                    cin >> quantity1;
                    Grocery_Management.items(name1, category1, price1, quantity1);
                    break;
                }
                case 2: {
                    string name1;
                    int newquantity1;
                    cout << "Enter Total_items name1 to update: ";
                    cin >> name1;
                    cout << "Enter new quantity1: ";
                    cin >> newquantity1;
                    Grocery_Management.updatequantity1(name1, newquantity1);
                    break;
                }
                case 3:
                    Grocery_Management.displayinventory1();
                    break;
                case 4: {
                    double total = Grocery_Management.calculate_Total();
                    total = Grocery_Management.apply_Discount(total);
                    cout << "Total amount after discount (if applicable): " << fixed << setprecision(2) << total << endl;
                    break;
                }
                case 5:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice! Please try again." << endl;
            }
        } while (choice != 5);
    }
};

int main() {
    User_Interface uin;
    uin.start();
    return 0;
}