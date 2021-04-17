#include "stabbingLines.h"
#include <fstream>
#include <iostream>

using namespace std;
void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){
    
    for(int i=0;  i<MaxPntsSize; i++){
    for(int j=0; j<MaxLnsSize; j++){
        if (linesArray[j].p1 == pointsArray[i].x) {
            cout<< pointsArray[j].x <<pointsArray[j].y<< linesArray[i].Lid;

             }
             if (linesArray[j].p2 == pointsArray[i].y){
            cout<< pointsArray[j].x <<pointsArray[j].y<< linesArray[i].Lid;

             }

}
}
}





