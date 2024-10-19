#include<iostream>
using namespace std;
/*
1 2 3 4
  2 3 4
    3 4
      4
*/
int main () {
    int n;
    cin >> n;
    int i=1; 
    while(i<=n){
        //print spaces
        int j=1; 
        while(j<i){
            cout << " ";
            j++;
        }
        int count = i;
        // print digits
        while(j<=n){
            
            cout << count;
            count++;
            j++;
            }
        i++;
        cout<<"\n";
    }
}