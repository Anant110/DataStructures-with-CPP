#include <iostream>
using namespace std;
class stack
{
public:
    int top;
    int *arr;
    int size;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >=0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    stack st(5);
    st.push(23);
    st.push(67);
    st.push(45);
    st.push(23);
    st.push(67);
    st.push(45);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"stack is Not empty"<<endl;
    }

}