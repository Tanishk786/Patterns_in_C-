#include <iostream>
using namespace std;
/*
****
 ***
  **
   * 
*/
int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;

        // Print spaces before each asterisk
        while (j < i) {
            cout << " ";
            j++;
        }

        // Print asterisks
        while (j <= n) {
            cout << "*";
            j++;
        }

        cout <<endl;
        i++;
    }

    return 0;
}
