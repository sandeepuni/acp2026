#include <stdio.h>
typedef struct
{
    float length;
    float width;
    float area;
} Rectangle;
void input(int n, Rectangle rects[n]);
void calculate_area(int n, Rectangle rects[n]);
int findLargestArea(int n, Rectangle rects[n]);
void output(int LargestIndex, Rectangle rects[], int n);
int main()
{
    int n, max;
    printf("Enter the number of rectangles : ");
    scanf("%d", &n);
    Rectangle r[n];
    input(n, r);
    calculate_area(n, r);
    max = findLargestArea(n, r);
    output(max, r, n);

    return 0;
}
void input(int n, Rectangle rects[n])
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter the length of Rectangle %d : ", i + 1);
        scanf("%f", &rects[i].length);
        printf("Enter the width of Rectangle %d : ", i + 1);
        scanf("%f", &rects[i].width);
    }
}
void calculate_area(int n, Rectangle rects[n])
{
    for (int i = 0; i < n; i++)
    {
        rects[i].area = rects[i].length * rects[i].width;
    }
}
int findLargestArea(int n, Rectangle rects[n])
{
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (rects[max].area < rects[i].area)
            max = i;
    }
    return max;
}
void output(int largestIndex, Rectangle rects[], int n)
{
    printf("The largest area  : %.2f\nThe length of the largest area : %f \nThe width of the largest area : %f\nThe Max Index : %d", rects[largestIndex].area, rects[largestIndex].length, rects[largestIndex].width, largestIndex);
}