#include<iostream>
using namespace std;
/*
        1
       222
      33333
     4444444
*/
int main() {
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        // print spaces
        while(j<=(n-i)){
            cout << " ";
            j++;
        }
        // print digits
        while(j<=(n+i-1)){
            cout<< i;
            j++;
        }
        i++;
        cout << "\n";
    }
}