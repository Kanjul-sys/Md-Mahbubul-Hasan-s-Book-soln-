#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int t,n;
    int result=0;
    double b;

    cin>>t;
  
    for(int i=1 ; i<=t ; i++){
      cin>>n;
      b=sqrt(8*n - 7);
      int d=(int)b;
      
      if((b-d)!=0)
        cout<<0<<" ";
      else
        cout<<1<<" ";

    }
    cout<<endl;
}
