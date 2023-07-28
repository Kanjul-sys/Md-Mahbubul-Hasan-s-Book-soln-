//একটি শব্দে ছোট হাতের অক্ষর (a, b. ... z) এবং বড় হাতের অক্ষর (A, B. ... Z) এর সংখ্যা নির্ণয় কর।
#include<iostream>
using namespace std;

int main(){
     int ucase=0 ,lcase=0 ;
     char arr[100] ;
     string str;

     cin>>str;

     /*/for (element_declaration : container_expression) {
          Code to be executed for each element in the container
      }/*/
     for(char arr : str){
               if(arr>='a' && arr<='z')
                    lcase++;
               else if(arr>='A' && arr<='Z')
                    ucase++;
     }
     cout<<"Total lower case :"<<lcase<<endl;
     cout<<"Total upper case :"<<ucase<<endl;
}


