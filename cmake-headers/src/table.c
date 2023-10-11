#include <stdio.h>

#include "table.h"

void print_header(unsigned short columns, unsigned short width)
{
    printf("+");
    for (unsigned short i = 0; i < columns; i++)
    {
        for (unsigned short j = 0; j < width; j++)
        {
            printf("-");
        }
        printf("+");
    }
}

void print_footer(unsigned short columns, unsigned short width)
{
    print_header(columns, width);
}