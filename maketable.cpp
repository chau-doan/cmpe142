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
  line ="";
  while (!cin.eof()){
	  line = line + "\n";
	  getline(cin,s);
	  line = line + s ;
  }

  cout << "<html> \n<body> \n<table border='1'>";
  cout << "\t<tr> \n<th>Start</th><th>End</th><th>First</th><th>Middle</th><th>Last</th>\n\t</tr>";


  cout << "\t" << line;
  cout << "</table> \n</body> \n</html>";

  return 0;
}
