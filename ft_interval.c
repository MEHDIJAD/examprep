//create a program that turns in an argument the character to '5' 
//each time the index is a multiple of 3.
//and to '3' each time the index is a multiple of 5, and to '5' if its a multiple of both.
//./a.out it's me mario hehe | cat -e
//it5s35e 53r5o 5eh5$

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int nb;
	i = 0;
	nb = 1;
	if (argc == 2)
		while(argv[1][i] != '\0')
		{
			if (nb % 3 == 0 && nb % 5 == 0)
				write(1, "5", 1);
			else if (nb % 3 == 0)
				write(1, "5", 1);
			else if (nb % 5 == 0)
				write(1, "3", 1);
			else
				write(1, &argv[1][i], 1);
			nb++;
			i++;
		}
}