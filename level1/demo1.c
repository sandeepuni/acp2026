#include <stdio.h>
void input(int n, float arr[n]);
int find_max_index(int n, float arr[n]);
void output(float arr[], int max_index);
int main()
{
   int n, max;
   printf("Enter the number of elements : ");
   scanf("%d", &n);
   float arr[n];
   input(n, arr);
   max = find_max_index(n, arr);
   output(arr, max);
   return 0;
}
void input(int n, float arr[n])
{
   for (int i = 0; i < n; i++)
   {
      printf("Enter the element %d: ", i + 1);
      scanf("%f", &arr[i]);
   }
}
int find_max_index(int n, float arr[n])
{
   int max = 0;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] > arr[max])
      {
         max = i;
      }
   }
   return max;
}
void output(float arr[], int max_index)
{
   printf("The Largest element : %f \nIndex of Max Element : %d\n",
          arr[max_index], max_index);
}
