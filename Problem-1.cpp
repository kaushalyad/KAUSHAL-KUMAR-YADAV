#include <iostream>
using namespace std;

class Calculator {
public:
    double calculate(double a, double b, string operation) {
        if (operation == "add")
            return a + b;
        else if (operation == "subtract")
            return a - b;
        else if (operation == "multiply")
            return a * b;
        else if (operation == "divide") {
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        }
        else {
            cout << "Invalid Operation!" << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter operation (add / subtract / multiply / divide): ";
    cin >> op;

    Calculator c;
    double result = c.calculate(a, b, op);

    cout << "Result: " << result << endl;
    return 0;
}
