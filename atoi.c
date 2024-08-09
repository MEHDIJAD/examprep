#include<unistd.h>
#include<stdio.h>
int     ft_atoi(char *str)
{
        int i;
        int signe = 1;
        int number = 0;

        i = 0;
        while (str[i])
        {
            while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
            {
                i++;
            }
            while (str[i] == '-' || str[i] == '+')
            {
                if (str[i]  == '-')
                    signe *= -1;
                i++;
            }
            while (str[i] >= '0' && str[i] <= '9')
            {
                number = (number * 10) + (str[i] - '0');
                i++;
            }
            return (number * signe);
        }
}

int main(void)
{
    char str[] = "---+--+1234ab567";
    printf("%d", ft_atoi(str));
}                 