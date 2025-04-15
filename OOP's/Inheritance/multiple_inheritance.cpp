// #include<bits/stdc++.h>
// using namespace std;

// class student{
// public:
//     string name;
//     int marks;
// };

// class postgradstu{
// public:
//     string department;
// };

// class Gradstu:public student,public postgradstu{

// };
// int main(){
//     Gradstu g1;
//     g1.name="Anant";
//     g1.department="AIML";
//     cout<<g1.name<<endl;
//     cout<<g1.department<<endl;
// }

#include<bits/stdc++.h>
using namespace std;

class Youtuber{
    public:
    int subscribers;

    Youtuber(){
        cout<<"Hey i am Youtuber"<<endl;
    }

    void tuber(){
        cout<<"I am a youtuber and my subscribers are:"<<subscribers<<endl;
    }
};

class Teacher{
    public:
    string name;

    Teacher(){
        cout<<"Hey I am Teacher"<<endl;
    }

    void teach(){
        cout<<"I am a teacher and my name is:"<<name<<endl;
    }
};

class Gameplayer:public Teacher,public Youtuber{
    public:
    int win_num;

    Gameplayer(){
        cout<<"Hey i am Gameplayer"<<endl;
    }

    Gameplayer(int subscribers,string name,int win_num){
        this->subscribers=subscribers;
        this->name=name;
        this->win_num=win_num;
    }

    void count(){
        cout<<"I am game player and my winning number is:"<<win_num<<endl;
        tuber();
        teach();
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Subscribers:"<<subscribers<<endl;
        cout<<"Winning number:"<<win_num<<endl;
    }
};

int main(){
    Gameplayer s1(23,"Anant",45);
    // Gameplayer g1;

    s1.display();
    s1.count();
}


