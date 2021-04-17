#include "stabbingLines.h"
#include <fstream>

// Create a text file
    ofstream WriteFile("pointsfile.txt");
  
 
 void readLines(){   // Write to the file
    WriteFile << "Points Pid x y:"<<endl;
    WriteFile << "         0 1 1"<<endl;
    WriteFile << "         1 1 4"<<endl;
    WriteFile << "         2 2 2"<<endl;
    WriteFile << "         3 3 1"<<endl;
    WriteFile << "         4 5 2"<<endl;
    WriteFile << "         5 5 5"<<endl;
    WriteFile << "         6 6 1"<<endl;
    WriteFile << "         7 6 2"<<endl;
 
  // Close the file
 WriteFile.close();
  
  string mypoint;

  // Read from the text file
  ifstream ReadFile("pointsfile.txt");

 
  while (getline (ReadFile, mypoint)) {
    // Output the text from the file
    cout << mypoint;

  }
  ReadFile.close(); 
}
