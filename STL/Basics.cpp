// #include<bits/stdc++.h>
// using namespace std;

// namespace anant{
//     int val=9;
// }


// int main(){
//     double val=9.8;

//     cout<<val<<endl; //prints 9.8

//     cout<<anant::val<<endl; //prints 9

// }

#include<bits/stdc++.h>
using namespace std;


array<int,3> arr; // {0,0,0}-->initialized to 0
int main(){

    // int arr[100];

    // array<int,3> arr; //{?,?,?} -->garbage value

    // array<int,5> arr={2,1,4}; //{2,1,4,0,0}

    // array<int,3> arr={0}; //{0,0,0}

    // array<int,4> arr;
    // arr.fill(3); // {3,3,3,3}

    // arr.at(2); //arr[2]

    // for(int i=0;i<4;i++){
    //     cout<<arr.at(i)<<" ";
    // }


    // iterators
    // array<int,5> arr={1,4,5,6,2};
    // for(auto it=arr.begin();it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // for(auto it=arr.rbegin();it!=arr.rend();it++){
    //     cout<<*it<<" ";
    // }

    // //for each loop
    // for(auto it:arr){
    //     cout<<it<<" ";
    // }

    // //Vectors
    // vector<int> arr(4,10); //{10,10,10,10};
    // vector<int> arr1(arr); //all values are copied {10,10,10,10}
    // vector<int> arr1(arr.begin(),arr.end()); //same thing

    // vector<int> array; //{1,2,3,4};
    // array.push_back(1);
    // array.push_back(2);
    // array.push_back(3);
    // array.push_back(4);

    // vector<int> array1(array.begin(),array.end()+2); //{1,2};

    // vector<vector<int>> vec; //{{1,2},{3,4}}

    // // 2D vector 10*20
    // vector<vector<int>> vec(10,vector<int>(20,0));

    // vector<int> vec1;
    // vec1.push_back(1);
    // vec1.push_back(2);

    // vector<int> vec2;
    // vec2.push_back(3);
    // vec2.push_back(4);

    // vec.push_back(vec1);
    // vec.push_back(vec2);  

    // // define 3D vector 10*20*30
    // vector<vector<vector<int>>> vec(10,vector<vector<int>>(10,vector<int>(30,0)));


    // Sets
    // set<int> st; //st-->{1,2,3,4}
    // int arr[]={1,2,1,3,3,4}; //arr-->{1,2,1,3,3,4};
    // for(int i=0;i<6;i++){
    //     st.insert(arr[i]);
    // }
    
    // // st.erase(st.begin());  //st-->{2,3,4}
    
    // st.erase(st.begin(),next(st.begin(),2)); //prints {3,4}

    // st.erase(arr[5]); //st.erase(key)

    // for(auto it:st) cout<<it<<" ";

    // //Hashmaps
    // //storing pairs in unordered_map is not possible
    // // while pairs can be stored in maps only in case of hash maps

    //  map< pair<int,int>,int> mpp; //true
    // //  unordered_map<pair<int,int>,int> mpp1; //false-->not possible


    // //  priority queue-->maxheap
    // priority_queue<int> qu;

    // priority_queue<pair<int,int>> qu;

    // //priority queue-->minheap
    // priority_queue<int,vector<int>,greater<int>> qu;

    // //if we store pair<int,int> then replace int with pair
    // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> qu;

    // //count
    vector<int> arr={1,2,5,5,7,7,7,8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int cnt=count(arr,arr+n,7); //counts 7 in array
    // cout<<cnt;

    //return the first index of 2
    // auto it=find(arr.begin(),arr.end(),5); //it points to first index of 7
    // int ind=it-arr.begin();  //it points the address while arr points the first address of index
    // cout<<ind<<endl;


    //STL -->binary_search
    //this STL works only sorted array
    // bool res=binary_search(arr.begin(),arr.end(),8);
    // bool res1=binary_search(arr.begin(),arr.end(),9);
    // cout<<res<<" "<<res1;


    //lower_bound function
    // works in logn

    auto res=lower_bound(arr.begin(),arr.end(),6);
    int result = res - arr.begin();  // Correct way to get index
    cout<<result;




}


