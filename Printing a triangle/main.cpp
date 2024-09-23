//
//  main.cpp
//  Printing a triangle
//
//  Created by Isaac Adeleke on 9/23/24.
//

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
