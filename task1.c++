
// write a program to check string is palindrom or not 1

#include<iostream>
#include<string.h>
using namespace std;



int main(){

   char arr[20];
   char arr2[20];

   // enter string from user
   cout<<"enter the string"<<endl;
   cin>>arr;

   //Calculate the length of string
   int length=strlen(arr);
    
    // create a loop for reverse string
   for(int i=0;i<=length;i++)
   {
    arr2[i]=arr[length - i - 1];
   } 

   arr2[length]='\0'; // we add null charcter to terminate the string

   int ispalindrom = strcmp(arr2,arr)==0;// we comapre original strings and reverse strings  

   if(ispalindrom)// if compare string result is true then this condition will be executed 
   {
    cout<<"this is palindrom";
   }
   else{
    cout<<"this is not palindrom";
   }

return 0;

  
   
    
}

