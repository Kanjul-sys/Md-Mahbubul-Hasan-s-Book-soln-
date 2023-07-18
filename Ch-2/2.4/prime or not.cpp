#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n ,i,result,k;

cin>>n;

k=sqrt(n);

   if(n<1) cout<<"Enter positive value ." ;

   else if(n==1) cout<<"1 is not a prime number.";

   else{
     for(i=2;i<=k;i++){
          result=n%i;
          if(result==0){
          cout<<n<<" is not a prime number .";
          break;
          }
     }

     if(result!= 0) cout<<n << " is a prime number .";
   }
}
