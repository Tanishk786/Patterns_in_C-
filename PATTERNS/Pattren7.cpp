#include<iostream>
using namespace std;
/*
1 
2 3 
4 5 6
*/
int main (){
    int n;
    cout<<"Enter the order :";
    cin>>n;
    int count=0;
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<count+1<<"\t";
            count++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}