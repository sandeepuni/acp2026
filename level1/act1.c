#include <stdio.h>

void inputTemperatures(int n, float temps[]);
float findHighest(int n, float temps[]);
float findLowest(int n, float temps[]);
void output(float max, float min);

int main()
{
    int n = 7;
    float temps[7];

    inputTemperatures(n, temps);

    float max = findHighest(n, temps);
    float min = findLowest(n, temps);

    output(max, min);

    return 0;
}

void inputTemperatures(int n, float temps[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter temperature for day %d : ", i + 1);
        scanf("%f", &temps[i]);
    }
}

float findHighest(int n, float temps[])
{
    float max = temps[0];
    for (int i = 1; i < n; i++)
    {
        if (temps[i] > max)
            max = temps[i];
    }
    return max;
}

float findLowest(int n, float temps[])
{
    float min = temps[0];
    for (int i = 1; i < n; i++)
    {
        if (temps[i] < min)
            min = temps[i];
    }
    return min;
}

void output(float max, float min)
{
    printf("Highest temperature : %.2f\n", max);
    printf("Lowest temperature  : %.2f\n", min);
}