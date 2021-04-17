#include <iostream>
#include "stabbingLines.h"
#include <fstream>

void readLines(){
// Create a text file
    	ofstream File("linesfile.txt");

 // Write to the file
    File << "Lines Lid p1 p2"<<endl;
    File << "       0  0  6"<<endl;
    File << "       1  1  3"<<endl;
    File << "       2  2  4"<<endl;
    File << "       3  3  5"<<endl;
    File << "       4  1  7"<<endl;
  // Close the file
  File.close();
  
  string myline;
  // Read from the text file
  ifstream Readfile("linesfile.txt");

 
  while (getline (Readfile, myline)) {
    // Output the text from the file
    cout << myline;
  }
  // Close file
  File.close(); }