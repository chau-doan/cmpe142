/*
 * echo.cpp
 *
 *  Created on: Feb 8, 2021
 *      Author: thuyluu9595
 */

#include <iostream>
#include <fstream>
#include <string>
//#include <ostream>
using namespace std;

int main (int argc, char *args[]) {
  string line;
  string name(args[1]);

  ifstream myfile (name, ios::in);
  getline (myfile,line,',') ;
  while (!myfile.eof()){
	  cout << "<tr>" << endl;
	  cout << "\t" << "<td>";
	  getline (myfile,line,',') ;
	  cout << line << "</td><td>";
	  getline (myfile,line,',') ;
	  cout << line << "</td><td>";
	  getline (myfile,line,',') ;
	  cout << line << "</td><td>";
	  getline (myfile,line,'\n') ;
	  cout << line << "</td>" << endl;
	  cout << "</tr>" << endl;
	  getline (myfile,line,',') ;
  }
  myfile.close();

  return 0;
}
