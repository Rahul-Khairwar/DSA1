#include <iostream>
using namespace std;
#include<set>

int main (){

 set <int>s1;
set <string>k;
k.insert({"hello","your","fine","vijay","vijay"});

 s1.insert(12);
 s1.insert(34);
 s1.insert(45);
 s1.insert(32);
s1.insert(32);
s1.insert(32);
s1.insert(32);
 for (auto p:s1){

    cout<<p<<"\n";
 }

 for(auto p:k){

    cout<<p<<"\n";
 }

}