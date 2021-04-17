#include <fstream>
#include "stabbingLines.h"

#define MAXARRAYSIZE 500


using namespace std ;




int main() {

  ifstream inPutPointFile("pointsfile.txt");
  ifstream inPutLineFile("pointsfile.txt");
  Point pointsArray[8];
  Line linesArray[5];
  Line stabbedLines[5];
  int numPoints = 8;
  int numLines = 5;
  int lid = 0;
  int NumOfStbLines = 0;

  readPoints(inPutPointFile, pointsArray,500,numPoints);
  readLines(inPutLineFile, linesArray,500,numLines);
  

  getStabbedLines(4,linesArray, 500, 8, pointsArray, 500, stabbedLines, 500, NumOfStbLines);
}