#include<iostream>
using namespace std;
/*
A 
B C
C D E
D E F G
*/
int main () {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch = ('A'+i+j-2);
            cout<<ch;
            ch++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}