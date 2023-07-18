#include <iostream>
using namespace std;
int fac(int n) {
    int result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}
int main(){
int n,r,C;
cout<< "Enter the value of 'n' and 'r'  :" ;
cin>> n>> r;

 if(n<r){
     cout<<"INPUT INVALID"<<endl;
   }

C=fac(n)/(fac(r)*fac(n-r));

cout<<"The result is "<< C;
}
