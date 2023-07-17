/*/To print the pyramid for n value:
      For example ( n= 3) -
                     . . * . .
                     . * * * .
                     * * * * *
/*/
#include<iostream>
using namespace std;
int main(){
int n , i , j , k;
cin>>n ;

for(i= 1 ; i<=n ;i++){
     for(j=1 ; j<=n-i ;j++){
          cout<<" . "<<" ";
     }
     for(k=1 ;k<=(i*2-1);k++){
          cout<<" * "<<" ";
     }
     for(j=1 ; j<=n-i ; j++){
          cout<<" . "<<" ";
     }
   cout<<endl;
}

}
