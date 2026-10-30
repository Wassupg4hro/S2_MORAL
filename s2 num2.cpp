#include <iostream>
using namespace std;

int main() {
    float n1, n2, result;
    char op;
    
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;
    
    switch (op) {
        case '+' :
            result = n1 + n2;
            cout << "The result of the operation is: " << result;
            break;
            
        case '-':
            result = n1 - n2;
            cout << "The result of the operation is: " << result;
            break;
            
        case '*':
            result = n1 * n2;
            cout << "The result of the operation is: " << result;
            break;

        case '/':
            if (n2 != 0) {
                result = n1 / n2;
                cout << "The result of the operation is: " << result;
            }
            else {
                cout << "Error! Division by zero is not allowed.";
            }
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}
        