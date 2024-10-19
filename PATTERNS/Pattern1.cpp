/*
 * * *
 * * *
 * * * 
*/
#include<iostream>
using namespace std;

int main (){
   int n=3;
   for(int i=0; i<n ; i++)
   {
    for(int j=0; j<n ; j++){
        cout<<"*";
    }
    cout<<"\n";
   }
   // From while loop
   cout<<"\n";
    int i=0;
   while(i<n){
    int j=0;
    while(j<n){
        cout<<"*";
        j++;
        }
        cout<<"\n";
    i++;
   }
   
}