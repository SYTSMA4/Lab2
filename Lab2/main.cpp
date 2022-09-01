/*
 Sam Sytsma
 C++ Fall 2022
 Due: Sept. 14, 2022
 Lab 2 Exploring Output
 This Lab is a demo of my ability to use and output strings and functions
*/

#include <iostream>
#include <string>

//allows you to not write the std::
using namespace std;

//Function prototype
void StarFunction();
void SpaceFunction();

//Defining Variable
const string m =  "Monday     ";
const string tu = "Tuesday    ";
const string w =  "Wednesday  ";
const string th = "Thursday   ";
const string f =  "Friday     ";
const string c = "10:00  C++ 162";
const string e = "8:20   Engineering Problems 180";
const string d = "11:45  American Diversity 181";
const string p = "11:30  Principles of Microeconomics 130";

int main() {
    //Schedule
    cout << endl << m << c;
    cout << endl << m << d;
    cout << endl << tu << e;
    cout << endl << tu << c;
    cout << endl << tu << p;
    cout << endl << w << c;
    cout << endl << w << d;
    cout << endl << th << e;
    cout << endl << th << c;
    cout << endl << th << p;
    cout << endl << f << c;
    cout << endl << f << d;
    
    cout << endl;
    cout << endl;

    //Grid
    SpaceFunction();
    StarFunction();
    SpaceFunction();
    StarFunction();
    SpaceFunction();
    StarFunction();
    SpaceFunction();
    StarFunction();
    
    return 0;
}

//Function Definitions
void  StarFunction(){
    cout << "*   *   *   *   " << endl;
}

void SpaceFunction(){
    cout << "  *   *   *   *" << endl;
}
