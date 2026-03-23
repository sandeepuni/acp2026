#include <stdio.h>
#include <string.h>
typedef struct
{
    int fno;
    char dest[50];
    int avs;
} Flight;
void readFlights(int n, Flight f[]);
void searchByDestination(int n, Flight f[], char searchDest[]);
int main()
{
    Flight f[4];
    int n;
    char searchDest[50];
    printf("Enter the number of flights : ");
    scanf("%d", &n);
    readFlights(n, f);
    printf("Enter the Destination : ");
    scanf(" ");
    fgets(searchDest, sizeof(searchDest), stdin);
    searchByDestination(n, f, searchDest);

    return 0;
}
void readFlights(int n, Flight f[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter Flight no of Flight %d : ", i + 1);
        scanf("%d", &f[i].fno);
        printf("Enter destination : ");
        scanf(" ");
        fgets(f[i].dest, sizeof(f[i].dest), stdin);
        printf("Enter the number of seats avsilable : ");
        scanf("%d", &f[i].avs);
    }
}
void searchByDestination(int n, Flight f[], char searchDest[])
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {

        if (strcmp(f[i].dest, searchDest) == 0)
        {
            printf("Flight Found \nFlight No: %d\nNo of available seats : %d ", f[i].fno, f[i].avs);
            found = 1;
        }
        if (found == 0)
        {
            printf("Flight not found");
        }
    }
}