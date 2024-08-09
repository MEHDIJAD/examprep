// create a program that writes three whitespaces between each character in an argument,
//if the number of arguments is different than 2 the program will return a newline
//./a.out abc | cat -e
//a   b   c$
//./a.out "" | cat -e
//$

#include <unistd.h>
int main(int argc, char *argv[])
{
    int i;
    i = 0;
    if (argc == 2)
    { 
            while (argv[1][i] != '\0')
            {
                write(1, &argv[1][i], 1);
                write(1, "   ", 3);
                i++;
            }
       
    }
}