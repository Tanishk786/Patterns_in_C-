#include<iostream>
using namespace std;
/*
1
21
321
4321
*/
int main (){
    int n;
    cout<<"Enter the order :";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row-col+1;
            col++;
        }
        cout<<"\n";
        row++;
    }
}