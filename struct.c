#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        char *s = argv[1];

        while (s[i])
        {
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}