#include<iostream>
using namespace std;
/*
1 1 1
2 2 2 
3 3 3
*/
int main (){
    int n=3;
    for(int i=1; i<=n ; i++){
        for(int j=0; j<n ; j++){
            cout<<i;
        }
        cout<<"\n";
    }
 // from while loop
 // reverse
 cout<<"\n";
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<n-i;
            j++;
        }
        cout<<endl;
        i++;
    }
}