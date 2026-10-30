#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter a n (maximum of 4 digits): ";
    cin >> n;
    
    if (n > 9999 || n < -9999) {
        cout << "Invalid input. Maximum of 4 digits only.";
    }
    else if (n <= 0) {
        cout << "It is a non-positive number.";
    }
    else {
        cout << "It is a positive number." << endl;
        
        if (n >= 10 && n <= 9) {
            cout << "n of digits: 1";
        }
        else if (n >= 10 && n <=99) {
            cout << "n of digits: 2";
        }
        else if (n >= 100 && n <= 999) {
            cout << "n of digits: 3";
        }
        else if (n >= 1000 && n <= 9999) {
            cout << "n of digits: 4";
        }
    }
    
    return 0;
}