//#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class student{
 
   
  int passward=5647;
   friend class yasu;
  
  protected:
  string real_name;
 
   
  public:
    string name;
    int id;
    
    void intro(){
    cout<<"student name "<<name<<endl<<"student id "<<id<<passward<<endl;
    }
    
   void setpass(int p,string n){
      passward=p;
      real_name=n;
   }
   
//   friend class yasu;
   
};

class yasu{
    
    public:
    
    void sharingSecret(student p){
        cout<<p.passward<<p.real_name<<endl;
    }
    
};


int main(){
    
    student s1;
    s1.name="rahul";
    s1.id=4; 
    s1.intro();
    s1.setpass(123,jehar);
    
    yasu bff;
    bff.sharingSecret(s1);

  
}
