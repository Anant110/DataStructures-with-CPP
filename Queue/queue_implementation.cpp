#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(12);
    cout<<"Element at first "<<q.front()<<endl;
    q.push(34);
    cout<<"Element at first "<<q.front()<<endl;
    q.push(78);
    cout << "Size of queue is " << q.size() << endl;

    q.pop();
    q.pop();
    cout << "Size of queue is " << q.size() << endl;

    if(!q.empty()){
        cout<<"Queue is not empty"<<endl;
    }
    else{
        cout<<"Queue is empty"<<endl;
    }

}
