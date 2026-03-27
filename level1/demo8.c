#include <stdio.h>
#include <string.h>
void input(char *str);
void concatenate_strings(char *Str1, char *str2);
void display(char *str);
int main()
{
    char str1[100], str2[100];
    // input
    printf("Enter the first string\n");
    input(str1);
    printf("Enter the second string\n");
    input(str2);
    // Concatenating the strings
    concatenate_strings(str1, str2);
    // output
    display(str1);
    return 0;
}
void input(char *str)
{
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
}
void concatenate_strings(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    do
    {
        str1[i] = str2[j];
        i++;
        j++;
    } while (str2[j - 1] != '\0');
}
void display(char *str)
{
    printf("%s", str);
}