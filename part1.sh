#!/bin/bash
g++ -o read readcsv.cpp
g++ -o write maketable.cpp
./read presidents.csv | ./write > presidents.html
