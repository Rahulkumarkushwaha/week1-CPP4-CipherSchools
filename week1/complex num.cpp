#include <bits/stdc++.h>
using namespace std;
class complexNumber{
  
  public:
  int real;
  int img;
  
  complexNumber(int real,int img){
      this->real=real;
      this->img=img;
  }
  
  void display(){
      cout<<real<<"+ i"<<img<<endl;
  }
  
  complexNumber plus(complexNumber c){
      int r=this->real+c.real;
      int i=this->img+c.img;
      
      complexNumber result(r,i);
      return result;
  }
    
    complexNumber multiply(complexNumber){
        
        int x = this->real*c.real;
        int y = this->real*c.real;
        int z = this->img*c.img;
        int a = this->img*c.img;
        
        return complexNumber(x-y,y+z);
    }
    complexNumber operator +(complexNumber c){
        int r = this->real + c.real;
        int i = this->img c.img;
        
        return complexNumber(r,i);
    }
    void operator ++(){
        this->real+=1;
        this->img+=1;
        return;
    }
};



int main(){
    complexNumber c1(5,5);
    complexNumber c2(1,1);
    complexNumber c4(2,2);
    complexNumber c3 = c1.plus(c2.plus(c4));
    
    
    ++c;
    // complexNumber c5 =c1+c2;
    // c5.display();
    
    //c5.display();
    
}
