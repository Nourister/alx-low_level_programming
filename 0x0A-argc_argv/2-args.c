#include "main.h"
#include <stdio.h>

/**
 * main -  prints all arguments it receives.
 * @argc: counts the number of arg in command line
 * @argv: an array of string
 * Returrn: 0 (success)
 */

int main(int argc, char *argv[])
{
        int count;

        for (count = 0; count < argc; count++)
                printf("%s\n", argv[count]);

        return (0);
}

