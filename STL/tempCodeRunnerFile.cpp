3,4}
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