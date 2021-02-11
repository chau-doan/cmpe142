#!/bin/bash
g++ -o PipeMakeTable PipeMakeTable.cpp child.cpp parent.cpp
./PipeMakeTable < presidents.csv > presidents.html
