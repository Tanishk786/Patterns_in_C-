#include<iostream>
using namespace std;
/*
       1
     2 2
   3 3 3
 4 4 4 4
*/
int main (){
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        // print spaces
        int j=1;
        while(j<=n-i){
            cout << " ";
            j++;
        }
        // print digits
        
        while(j<=n){
            int count = i;
            cout << count;
            count++;
            j++;
        }
        i++;
        cout << "\n";
    }
}