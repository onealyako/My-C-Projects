#include "tictactoe.h"

int main(int argc, char *argv[])
{
    /* Declare variables */
    unsigned short us = 0;

    /* Check if the user provided any arguments */
    if (argc<=1)
    {
        fprintf( stderr, "Usage: %s [n]\n", argv[0]);
        exit(-1);
    }
    else
    {
        us = atoi(argv[1]);
    }

    /* Call the debug function to print all the information */
    debug(us);
    return 0;
}
