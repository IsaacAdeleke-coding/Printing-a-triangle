# Printing a Triangle

This C++ program prints a right-angled triangle using asterisks (`*`). The user is prompted to enter the number of rows, and the program generates a triangle pattern based on that input.

## Project Structure

The project consists of a single file:

- **main.cpp**: This file contains the logic for generating the triangle pattern based on user input.

## Program Overview

The program works as follows:

1. It prompts the user to input the number of rows for the triangle.
2. It then uses nested `for` loops to print a right-angled triangle. For each row `i`, it prints `i` number of asterisks (`*`).
3. Each subsequent row has one more asterisk than the previous row, forming the shape of a triangle.

### Example Input/Output

For an input of `5`, the output would be:

Enter the number of rows for the triangle: 5 * **



### Code

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the triangle: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
