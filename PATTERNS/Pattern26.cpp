#include<iostream>
using namespace std;
/*
       1
     2 3
   4 5 6
 7 8 9 10
*/
int main (){
    int n;
    cin >> n;
    int i=1; int count = i;
    while(i<=n){
        // print spaces
        int j=1;
        while(j<=n-i){
            cout << " ";
            j++;
        }
        // print digits
        
        while(j<=n){
            cout << count;
            count++;
            j++;
        }
        i++;
        cout << "\n";
    }
}