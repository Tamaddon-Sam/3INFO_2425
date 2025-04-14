#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int u = 0;

    for (int i = 0; i < strlen(argv); i++)
    {
        if (argv[i] == '1')
        {
            u++;
        }
    }

    if (u % 2 == 0)
    {
        printf("P\n");
    }
    else
    {
        printf("D\n");
    }
    
    return 0;
}