#include<iostream>
using namespace std;
/*
1 2 3
1 2 3
1 2 3
*/
int main (){
    int n;
    cout<<"Enter the order :";
    cin>>n;
    for(int i=0; i<n ; i++){
        for(int j=0; j<n ; j++){
            cout<<j+1<<"\t";
        }
        cout<<"\n";
    }
      // From while loop
      // Reverse 
      cout<<"\n";
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<n-j<<"\t";
            j++;
        }
        cout<<"\n";
        i++;
    }
 }