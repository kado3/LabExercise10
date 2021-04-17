#!/bin/sh
echo "Creating testStabLineProg"

echo "compiling readPoints.o"
g++ -std=c++17 -c readPoints.cpp

echo "compiling readLines.o"
g++ -std=c++17 -c readLines.cpp

echo "compiling printLineByCoords.o"
g++ -std=c++17 -c printLineByCoords.cpp

echo "compiling getStabbedLines.o"
g++ -std=c++17 -c getStabbedLines.cpp

echo "compiling testStabLineProg.o"
g++ -std=c++17 -c testStabLineProg.cpp

echo "Creating the main Program testStabLineProg"
g++ -std=c++17 testStabLineProg.o readPoints.o readLines.o printLineByCoords.o getStabbedLines.o testStabLineProg.o\
-o testStabLineProg
echo "Done Creating testStabLineProg"
