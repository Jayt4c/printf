#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

int print_int(int num)
{
    char buffer[20];
    sprintf(buffer, "%d", num);
    return write(1, buffer, _strlen(buffer));
}

