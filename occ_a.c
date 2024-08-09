// create a function that returns the number of 'A' in a given string.

#include<stdio.h>

int     ft_countA(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A')
            count++;
        i++;
    }
    return (count);
    
}
int main(void)
{
    char str[] = "AAdfcAdrA";
    printf("%d", ft_countA(str));

}