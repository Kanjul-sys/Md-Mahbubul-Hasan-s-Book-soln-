/*/To print the pyramid for n value:
      For example ( n= 3) -
                     1 2 3 2 1
                     . 1 2 1 .
                     . . 1 . .
/*/

#include<iostream>
using namespace std;
int main(){
     int i,j,k,l,n,m;
     cin>>n;
     m=n+1;
     for(i=0 ;i<n ; i++){
          for(j=1 ; j<=i ; j++){
               cout<<"."<<" ";
          }
          for(k=1 ; k<=n-i; k++){
               cout<< k << " ";
          }
          for(l=n-i-1 ; l>=1 ; l--){
               cout<< l << " ";
          }
          for(j=1 ; j<=i ; j++){
               cout<<"."<<" ";
          }
          cout<<endl;
     }

}
