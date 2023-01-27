//#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class student{
    
string passcode;
friend class bestfriend;

protected:

int age;

public:
string name;
int id;

student(){
    
}

student(int id, string name, string passcode, int age){
    name= name;
    id=id;
    passcode=passcode;
    age=age;
    
}
void into(){
    cout<<"my name is "<<name<<"my id is "<<"passcode "<<passcode<<endl;
    
}

friend void hacker(student s);

    
};

int main(){
    student s1(1,"rahul","0001",1);
    
    int a=10;
    int*ptri= &a;
    
    student*ptrs=&s1;
    cout<<ptrs->name<<endl;
}







