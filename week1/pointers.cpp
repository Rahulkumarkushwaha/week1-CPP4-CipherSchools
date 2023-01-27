// part 1

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *p=&a;
    
//     // cout<<*(&a)<<endl;
//     // cout<<*p;
//     // cout<<sizeof(p);
//     char ch='k';
//     char*ph=&ch;
//     if(sizeof(ph)==sizeof(p))
//     {
//         cout<<"hii"<<endl;
        
//     }else{
//         cout<<"hye";
//     }
// }



//part 2
#include<bits/stdc++.h>

using namespace std;
int main(){
    int a=10;
    int*p1=&a;
    int**p2=&p1;
    int***p3=&p2;
    
    cout<<a<<endl;
    cout<<p1<<endl;
    ***p3=50;
    cout<<p2<<endl;
    cout<<p3<<endl;
}















