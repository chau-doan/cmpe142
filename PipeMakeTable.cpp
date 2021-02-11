#include <iostream>
#include <sstream>
#include <fstream>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
using namespace std;

int main()
{
	pid_t pid = fork();
	string line;
	if(pid != 0)
	{
		int status;
		waitpid(pid, &status, 0);
		string temp;
		while(getline(cin,temp))
		{
			stringstream s(temp);
			cout << "\t<tr>\n\t\t";
			cout.flush();
			while(getline(s, temp, ','))
			{
				cout << "<td>" << temp << "</td>";
				cout.flush();
			}
			cout << "\n\t</tr>\n";
		}
		cout << "\n</table> \n</body> \n</html>\n";
	}
	else
	{
		cout << "<html> \n<body> \n<table border='1'>\n";
		cout << "\t<tr> \n\t\t<th>Start</th><th>End</th><th>First</th><th>Middle</th><th>Last</th>\n\t</tr>";
	}
	return 0;
}

/*#include <iostream>
#include <sstream>
#include <fstream>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
using namespace std;

int main()
{
	pid_t pid = fork();
	string line;
	if (pid != 0)
	{
		int status;
		cout << "<html> \n<body> \n<table border='1'>\n";
		cout << "\t<tr> \n\t\t<th>Start</th><th>End</th><th>First</th><th>Middle</th><th>Last</th>\n\t</tr>";
		waitpid(pid, &status, 0);
		cout << "\n</table> \n</body> \n</html>\n";
	}
	else
	{
		string temp;
			while(getline(cin,temp))
			{
				stringstream s(temp);
				cout << "\t<tr>\n\t\t";
				cout.flush();
				while(getline(s, temp, ','))
				{
					cout << "<td>" << temp << "</td>";
					cout.flush();
				}
				cout << "\n\t</tr>\n";
			}
	}
	return 0;
}
*/
