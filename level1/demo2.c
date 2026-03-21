#include <stdio.h>
typedef struct
{
    char name[50];
    float length;
    float width;
    float area;
} Rectangle;
Rectangle input();
float calculate_area(Rectangle rect);
void compare_areas(Rectangle r1, Rectangle r2, Rectangle r3);
int main()
{
    Rectangle r1, r2, r3;
    r1 = input(r1);
    r1.area = calculate_area(r1);
    r2 = input(r2);
    r2.area = calculate_area(r2);
    r3 = input(r3);
    r3.area = calculate_area(r3);
    compare_areas(r1, r2, r3);

    return 0;
}
Rectangle input()
{
    Rectangle rect;
    printf("Enter the rectangle name \n");
    scanf("%s", rect.name);
    printf("Enter the Length \n");
    scanf("%f", &rect.length);
    printf("Enter the Width \n");
    scanf("%f", &rect.width);
    return rect;
}
float calculate_area(Rectangle rect)
{
    return rect.length * rect.width;
}
void compare_areas(Rectangle r1, Rectangle r2, Rectangle r3)
{
    if ((r1.area > r2.area) && (r1.area > r3.area))
    {
        printf("Largest Rectangle : %s with Area : %.2f", r1.name, r1.area);
    }
    else if ((r2.area > r1.area) && (r2.area > r3.area))
    {
        printf("Largest Rectangle : %s with Area : %.2f", r2.name, r2.area);
    }
    else if ((r3.area > r1.area) && (r3.area > r2.area))
    {
        printf("Largest Rectangle : %s with Area : %.2f", r3.name, r3.area);
    }
    else
    {
        printf("Two or more Rectangles have the same area ");
    }
}