#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include "func.h"

int main(int argc, char** argv)
{
    int interval = 100000;
    int show = 1;

    if (argc >= 2)
    {
        int i;
        for (i = 1; i <= argc-1; i++)
        {
            if (strcmp(argv[i], "-f") == 0)
            {
              //  format(arg );
            }

            if (strcmp(argv[i], "-h") == 0)
            {
                printhelp();
                show = 0;
            }

            if (strcmp(argv[i], "-i") == 0)
            {
                interval = atoi(argv[i+1]);
            }
        }
    }    

    time_t sec;
    struct tm *now;
    char buffer[80];
    
    while (show)
    {
        system("clear");
        time(&sec);

        now = localtime(&sec);
        strftime(buffer, 80, "%T", now);   

        puts(buffer);
        usleep(interval);
    }
    return 0;
}

