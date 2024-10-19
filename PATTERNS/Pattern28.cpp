#include<iostream>
using namespace std;
/*
    1
   121
  12321
 1234321
*/
int main () {
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        //print spaces
        int j=1;
        while(j<=(n-i)){
            cout<<" " <<"\t";
            j++;
        }
        int k=1;
        // print first digit triangle 
        while(k<=i){
            cout << k << "\t";
            k++;
        }
        int l=1; int count = (i-1);
        while(l<i){
            cout << count << "\t";
            count--;
            l++;
        }
        cout << "\n";
        i++;
    }
}