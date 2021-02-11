#include "globals.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void parent(int fd[])
{
    char buffer[BUFFER_SIZE];

    string buff;

    // Close the unused READ end of the pipe.
    close(fd[READ_END]);


    for (;;) {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) break;
        buffer[strlen(buffer) - 1] = '\0';
        ifstream myfile(buffer);
        myfile.is_open();
        string line, token;

        stringstream s(line);


        buff = "\t<tr>\n";
        write(fd[WRITE_END], buff.data(), buff.size());

        stringstream input_stringstream(buffer);
        buff = "\t\t";
        while (getline(input_stringstream, token, ',')) {
            buff += "<td>" + token + "</td>";
        }
        buff += "\n";
        write(fd[WRITE_END], buff.data(), buff.size());

        buff = "\t</tr>\n";
        write(fd[WRITE_END], buff.data(), buff.size());

        buff = "";

    }
    close(fd[WRITE_END]);

}
