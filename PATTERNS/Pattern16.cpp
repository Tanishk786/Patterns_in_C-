#include<iostream>
using namespace std;
/*
A 
B C
D E F
G H I J
*/
int main () {
    int n;
    cin>>n;
    int i=0;
    char ch = 'A';
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}