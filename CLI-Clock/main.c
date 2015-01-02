#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

#define VERSION "0.1"

int main(int argc, char** argv)
{
    int interval = 100000;
    int show = 1;
    char format[80] = "%H:%M:%S";
    if (argc >= 2)
    {
        int i;
        for (i = 1; i <= argc-1; i++)
        {
            if (strcmp(argv[i], "-f") == 0)   //Edit the time & format display
            {
                strcpy(format ,argv[i+1]);
                i++;
            }

            if (strcmp(argv[i], "-h") == 0)   //Show the help page.
            {
                printhelp();
                show = 0;
            }

            if (strcmp(argv[i], "-i") == 0)   //Edit the interval in microsecondes (default : 100000 (= 0.1s)
            {
                interval = atoi(argv[i+1]);
                i++;
            }

            if (strcmp(argv[i], "-is") == 0)  //Edit the interval in secondes (default : see -i)
            {
                interval = atoi(argv[i+1])*1000000;
                i++;
            }

            if (strcmp(argv[i], "-v") == 0)   //Show the version info 
            {
                printversion();
                show = 0;
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
        strftime(buffer, 80, format, now);   

        puts(buffer);
        usleep(interval);
    }
    return 0;
}

void printhelp()
{
    printf("-f : Edit the time & format display (default : %H:%M:%%S)\n");
    printf("     The format is the same than for the function strftime (http://www.cplusplus.com/reference/ctime/strftime/).\n");
    printf("-h : Show this page.\n");
    printf("-i : Edit the interval in microsecondes (default : 100000 (= 0.1 s).\n");  
    printf("-is : Edit the interval in secondes (default : see -i s)\n"); 
    printf("-v : Show the version info.\n");
}

void printversion()
{
    printf("CLI-Clock %s, built on " __DATE__ ".\n", VERSION);
}
