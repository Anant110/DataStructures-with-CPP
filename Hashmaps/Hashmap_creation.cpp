#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

//creation
// unordered_map<string,int> m;

//if we use map instead of unordered_map the value print in order wise as we take in input
map<string,int> m;


//insertion

//1
pair<string,int> p=make_pair("anant",10);
m.insert(p);

//2
pair<string,int> pair2("fdryui",89);
m.insert(pair2);

//3
m["mera"]=1;


//value of key is upadted from 1 to 2
m["mera"]=2;

//Search
cout<<m["mera"]<<endl;
cout<<m.at("anant")<<endl;

//This method will make a new entry of Unknown key to 0
cout<<m["Unknown key"]<<endl;

//But this method is not generate the new entry it will give error
cout<<m.at("Unknown key")<<endl;

//size
cout<<m.size()<<endl;

//to check presence
//if not present give the value 0 otherwise 1
cout<<m.count("uidai")<<endl;

m.erase("anant");
cout<<m.size()<<endl;

//iterator
// unordered_map<string,int> :: iterator it=m.begin();

map<string,int> :: iterator it=m.begin();
while(it!=m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}

return 0;

}

