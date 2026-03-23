#include <stdio.h>
void read_array(int n, int arr[]);
void print_array(int n, int arr[]);
void swap_array(int n, int a[], int b[]);
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter array 1 \n");
    read_array(n, a);
    printf("Enter array 2 \n");
    read_array(n, b);
    printf("Array 1 : \n");
    print_array(n, a);
    printf("Array 2 : \n");
    print_array(n, b);
    swap_array(n, a, b);
    printf("After swapping \n");
    printf("Array 1 : \n");
    print_array(n, a);
    printf("Array 2 : \n");
    print_array(n, b);

    return 0;
}
void read_array(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void print_array(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void swap_array(int n, int a[], int b[])
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}