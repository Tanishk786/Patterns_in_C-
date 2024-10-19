#include<iostream>
using namespace std;
/*
1
23
345
4567
56789
*/
int main (){
    int n;
    cout<<"Enter the order :";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1,value = row;
        while(col<=row){
            cout<<value;
            value++;
            col++;            
       }
       cout<<"\n";
       row++;
    }   

}