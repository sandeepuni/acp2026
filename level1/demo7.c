#include <stdio.h>
#include <string.h>
void inputStrings(char str1[], char str2[]);
int compareStrings(char str1[], char str2[]);
void output(int result);

int main()
{
    char str1[100], str2[100];
    inputStrings(str1, str2);
    int result = compareStrings(str1, str2);
    output(result);

    return 0;
}

void inputStrings(char str1[], char str2[])
{
    printf("Enter first string : ");
    scanf(" ");
    fgets(str1, 100, stdin);

    printf("Enter second string : ");
    scanf(" ");
    fgets(str2, 100, stdin);
}

int compareStrings(char str1[], char str2[])
{
    int i = 0;

    int result = strcmp(str1, str2);

    if (result == 0)
        return 0;
    else if (result > 0)
        return 1;
    else
        return -1;
}

void output(int result)
{
    if (result == 0)
        printf("Both strings are Equal\n");
    else if (result == 1)
        printf("First string is Greater\n");
    else
        printf("Second string is Greater\n");
}
