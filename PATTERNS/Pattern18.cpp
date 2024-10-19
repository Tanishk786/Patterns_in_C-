#include<iostream>
using namespace std;
/*
D 
C D
B C D
A B C D
*/
int main () {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch= (n-i+j-1+'A');
            cout<<ch;
            ch++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}