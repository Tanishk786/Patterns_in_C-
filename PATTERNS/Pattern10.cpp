#include<iostream>
using namespace std;
/*
A A A
B B B 
C C C
*/
int main (){
    int n;
    cout<<"Enter the order :";
    cin>>n;
    int i=1;
    char a='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<a<<"\t";
            j++;
        }
        a++;
        i++;
    cout<<"\n";
    }
}