#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string temp;
	while(getline(cin,temp))
	{
		stringstream s(temp);
		cout << "<tr>\n\t";
		cout.flush();
		while(getline(s, temp, ','))
		{
			cout << "<td>" << temp << "</td>";
			cout.flush();
		}
		cout << "\n</tr>\n";
	}
	return 0;
}
/*
int main (int argc, char *args[]) {
  string line;
  string name(args[1]);

  ifstream myfile (name, ios::in);
  getline (myfile,line,',') ;
  while (!myfile.eof()){
	  	  cout << "<tr>" << endl;
	  	  cout << "\t" << "<td>" << line << "</td><td>";
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
*/
