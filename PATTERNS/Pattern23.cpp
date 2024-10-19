#include<iostream>
using namespace std;
/*
1 1 1 1
  2 2 2
    3 3
      4
*/
int main () {
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        // print spaces
        while(j<i){
                cout << " ";
                    j++;
        }
        // print numbers
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