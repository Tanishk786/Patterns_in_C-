#include<iostream>
using namespace std;
/*
 A
 A B
 A B C
*/
int main () {
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;    char ch='A';
        while(j<=i){
           
            cout<<ch;
            ch++;
            j++;
        }
        i++;
        cout<<"\n";
    }
}