/*
 * echo.cpp
 *
 *  Created on: Feb 8, 2021
 *      Author: thuyluu9595
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line,s;
  ofstream myfile;
  myfile.open("test.html");
  line ="";
  while (!cin.eof()){
	  line = line + "\n";
	  getline(cin,s);
	  line = line + s ;
  }

  myfile << "<html> \n<body> \n<table border='1'>";
  myfile << "\t<tr> \n<th>Start</th><th>End</th><th>First</th><th>Middle</th><th>Last</th>\n\t</tr>";


  myfile << "\t" << line;
  myfile << "</table> \n</body> \n</html>";
  myfile.close();

  return 0;
}
