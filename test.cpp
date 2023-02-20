/**
 * test.cpp
 *
 * EECS 183
 * Lab 5: loops exercises
 *
 * Ope Ojubanire, Alex Vega, Anthony, Adria
 * opeoju
 *
 * <#A description of the assignment here#>
 */

#include "loops.h"

#include <iostream>

using namespace std;

void testPrintRectangle();
void testPrintRight();
void testPrintRightJustified();
void testPrintIsosceles();
int main() {
    
    // TODO
    // Once you have completed the testing functions
    // call them such that the tests actually get run
    testPrintRectangle();
    testPrintRight();
    testPrintRightJustified();
    testPrintIsosceles();
    return 0;
}

void testPrintRectangle() {
    cout << "Testing printRectangle()" << endl;
    printRectangle(8, 8);
    cout << endl;
    printRectangle(4,5);
    cout << endl;
    printRectangle(6, 6);
    cout << endl;
    printRectangle(3,7);
    cout << endl;
    printRectangle(10,10);
}

// TODO
// Implement your other test_functions
void testPrintRight() {
    cout << "Testing printRight()" << endl;
    printRight(3);
    cout << endl;
    printRight(11);
    cout << endl;
    printRight(6);
    cout << endl;
    printRight(4);
    cout << endl;
    
}


void testPrintRightJustified() {
    cout << "Testing printRightJustfied()" << endl;
    printRightJustified(3);
    cout << endl;
    printRightJustified(5);
    cout << endl;
    printRightJustified(9);
    cout << endl;
    printRightJustified(7);
    cout << endl;
    
}



void testPrintIsosceles() {
    cout << "Testing printIsosceles()" << endl;
    printIsosceles(3);
    cout<< endl;
    printIsosceles(5);
    cout << endl;
    printIsosceles(8);
    cout << endl;
    printIsosceles(12);
    cout << endl;
}
