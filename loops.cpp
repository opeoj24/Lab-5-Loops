/**
 * loops.cpp
 *
 * EECS 183
 * Lab 5: Loops exercises
 *
 * Ope Ojubanire
 * opeoju
 *
 * Lab 5
 */

#include "loops.h"
#include <iostream>

using namespace std;

void printRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return;
}

/**
 * Requires: n must be > 0
 * Modifies: cout
 * Effects:  prints a right triangle
 *           prints an endl at the end of each row
 *
 * Example:  printRight(3);
 * Note: no spaces at the end of lines
 * In the example below '|' indicates the left-hand edge
 *             |*
 *             |**
 *             |***
 */
void printRight(int n) {
    for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return;
}


/**
 * Requires: n must be > 0
 * Modifies: cout
 * Effects:  prints a right justified triangle
 *           prints an endl at the end of each row
 *
 * Example:  printRightJustified(3);
 * Note: no spaces at the end of lines
 * In the example below '|' indicates the left-hand edge
 *             |  *
 *             | **
 *             |***
 */
void printRightJustified(int n) {
    for(int i = 0; i < n; i++ ) {
        for( int k = 1; k < n - i; k++) {
            cout << " ";
        }
        for(int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
  
    return;
}
/**
 * Requires: n must be > 0
 * Modifies: cout
 * Effects:  prints an isosceles triangle (pointing up)
 *           where parameter n is the height
 *           prints an endl at the end of each row
 *
 * Example: printIsosceles(3);
 * Note: no spaces at the end of lines
 * In the example below '|' indicates the left-hand edge
 *             |  *
 *             | ***
 *             |*****
 **/
void printIsosceles(int n) {
    int i = 1;
    for (int k = 1; k <= n; k++) {
        for (int i = (n-k); i > 0; i--){
            cout<< " ";
        }
        for ( int j = 1; j<= k*2-1; j++){
            cout << "*";
        }
        i= i + 2;
        cout << endl;
    }
    return;
}
