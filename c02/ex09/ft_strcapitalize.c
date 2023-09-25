#include <stdio.h>

char	*ft_strlowcase(char *str)
{
    int	i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

char	*ft_strcapitalize(char *str)
{
    int		i;
    int		word;

    i = 0;
    word = 1;
    ft_strlowcase(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (word == 1)
                str[i] = str[i] - 32;
            word = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
            word = 0;
        else
            word = 1;
        i++;
    }
    return (str);
}

int	main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s \n", str);
    printf("%s", ft_strcapitalize(str));
}