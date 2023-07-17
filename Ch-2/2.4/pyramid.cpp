/*/To print the pyramid for n value:
      For example ( n= 3) -
                     * . .
                     * * .
                     * * *
/*/
#include<iostream>
using namespace std;
int main (){
int i,j,k,n;
cin >> n;

for(i=1 ; i<=n ;i++){
     for(j=1 ; j<=i ; j++){
          cout<<" * "<< " ";
     }
     for(k=1 ; k<=n-i ; k++){
          cout<<" . "<< " ";
     }
     cout<< endl;
}

}
