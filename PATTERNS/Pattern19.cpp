#include<iostream>
using namespace std;
/*
A B C
B C D
C D E 
*/
int main (){
    int a;
    cin>>a;

    int i=1;
    while(i<=a){
        int j=1;
        while(j<=a){
            char ch = ('A'+i+j-2);
            cout<<ch;
            ch++;
            j++;
        }
        i++;
        cout<<"\n";
    }
}