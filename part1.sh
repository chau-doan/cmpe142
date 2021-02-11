#!/bin/bash
touch presidents.html
g++ -o ReadCSV ReadCSV.cpp
g++ -o MakeTable MakeTable.cpp
./ReadCSV < presidents.csv | ./MakeTable > presidents.html
