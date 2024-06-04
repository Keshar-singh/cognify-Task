
// write a program to reverse a string method 1

#include<iostream>
#include<string.h>
using namespace std;



int main(){

   char arr[20];

   // enter string from user
   cout<<"enter the string"<<endl;
   cin>>arr;

   //Calculate the length of string
   int length=strlen(arr);
    
    // create a loop for reverse string
   for(int i=length;i>=0;i--)
   {  
   cout<<arr[i];
   } 

  

   

return 0;

  
   
    
}

