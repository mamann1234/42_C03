#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
            i++;
    return (s1[i] - s2[i]);
}

int main(void)
{
    char *s1 = "hello World";
    char *s2 = "hello Dorld";

    printf("Comparison result(Custom): %d\n", ft_strcmp(s1, s2));
    printf("Comparison result(From Library): %d\n", strcmp(s1, s2));

    return (0);
}
