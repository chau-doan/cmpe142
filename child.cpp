#include "globals.h"
void child(int fd[])
{
    char buffer[BUFFER_SIZE];


    // Close the unused WRITE end of the pipe.
    close(fd[WRITE_END]);
    bool isWrite = false;

    // Read from the READ end of the pipe.
    ssize_t size;
    for (;;)
    {
        size = read(fd[READ_END], buffer, BUFFER_SIZE);
        if (size <= 0) break;
        if (!isWrite) {
            printf ("<html> \n<body> \n<table border='1'>\n");
            printf ( "\t<tr> \n\t\t<th>Start</th><th>End</th><th>First</th><th>Middle</th><th>Last</th>\n\t</tr>\n");
            isWrite = true;
        }
        if (size < BUFFER_SIZE) buffer[size] = '\0';
        printf("%s", buffer);
    }

    // Close the READ end of the pipe.
    close(fd[READ_END]);

    printf("</table> \n</body> \n</html>");
}
