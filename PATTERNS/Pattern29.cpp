#include<iostream>
using namespace std;
/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
int main (){
    int n = 5;
    int i=1;
    while(i<=5){
        // print first triangle
        int j=1;
        while(j<=5-i+1){
            cout << j;
            j++;
        }
        int k=1;
        while(k<=(i-1)){
           cout << "*";
           k++;
        }
        int l=1;
        while(l<=(i-1)){
            cout << "*";
            l++;
        }
        int m=5;
        while(m>=i){
            cout << m-i+1;
            m--;
        }
        cout << "\n";
        i++;
    }
}