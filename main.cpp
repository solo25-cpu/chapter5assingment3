#include <iostream>
using namespace std;

// 1. Function Prototypes (declarations)
double getInput();
double calculateResult(double value);
void displayOutput(double result);

int main() {
    // 2. Keep main() clean—it just coordinates the function calls
    double userValue = getInput();
    double finalAnswer = calculateResult(userValue);
    displayOutput(finalAnswer);

    return 0;
}

// 3. Function Definitions (procedures)
double getInput() {
    double num;
    cout << "Enter a value: ";
    cin >> num;
    return num;
}

double calculateResult(double value) {
    // Replace this with your assignment's math/logic
    return value * 2.0;
}

void displayOutput(double result) {
    cout << "The result is: " << result << endl;
}
