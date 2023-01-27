// #include <iostream>
// using namespace std;
// int sum(int n1, int n2){
//     return n1+n2;
// }

// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     cout<<"the sum of n1 & n2 is  "<<sum(n1,n2);
// }


// #include <iostream>
// using namespace std;
// int sum(int a, int b){
//     return a+b;
// }

// int main(){
//     cout<<sum(2,4);
    
// }



// #include <iostream>
// using namespace std;
// int max(int n1, int n2){
//     if(n1>n2)return n1;
//     return n2;
// }
// int max(int n1, int n2, int n3){
//     if(n1>n2){
//         if(n1>n3)return n1;
//         return n3;
//         }else{
        
//          if(n2>n3) return n2;
//          return n3;
//         }
        
// }

// int max(int n1, int n2, int n3, int n4){
//     int a=(n1,n2);
//     int b=(n3,n4);
//     return max(a,b);
// }


// int main(){
//     cout<<max(3,2);
    
//     cout<<max(3,2,7);
//     cout<<max(3,2,7,9);
// }


#include <iostream>
using namespace std;
void inc(int &a){
a++;
}
int main(){
    int i=11;
    inc(i);
    cout<<i;
}

