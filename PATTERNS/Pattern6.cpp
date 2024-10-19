#include<iostream>
using namespace std;
/*
1
22
333
4444
*/
int main (){
    int n;
    cout<<"Enter the order :";
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<i+1;
            j++;
        }
        i++;
        cout<<"\n";
    }
}