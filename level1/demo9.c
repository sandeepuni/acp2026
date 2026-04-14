#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int sno;
    float grade;
} Student;

void inputStudents(Student students[], int n);
void writeToTextFile(Student students[], int n, const char *filename);
int readFromTextFile(Student students[], const char *filename);
void printStudents(Student students[], int n);

int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);

    Student s[n];
    Student r[n];

    inputStudents(s, n);
    printStudents(s, n);

    writeToTextFile(s, n, "student.txt");

    int count = readFromTextFile(r, "student.txt");
    printStudents(r, count);

    return 0;
}

void inputStudents(Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d : \n", i + 1);

        printf("Enter roll no : ");
        scanf("%d", &students[i].sno);

        printf("Enter name : ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter grade : ");
        scanf("%f", &students[i].grade);
    }
}

void writeToTextFile(Student students[], int n, const char *filename)
{
    FILE *fp = fopen(filename, "w");

    fprintf(fp, "%d\n", n);

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d\n%s\n%.2f\n", students[i].sno, students[i].name, students[i].grade);
    }

    fclose(fp);
    printf("Data saved to %s\n", filename);
}

int readFromTextFile(Student students[], const char *filename)
{
    FILE *fp = fopen(filename, "r");

    int n = 0;
    fscanf(fp, "%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d\n", &students[i].sno);
        fgets(students[i].name, 50, fp);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        fscanf(fp, "%f\n", &students[i].grade);
    }

    fclose(fp);
    printf("Data read from %s\n", filename);
    return n;
}

void printStudents(Student students[], int n)
{
    printf("\n  %s  %s  %s-\n", "SNo", "Name", "Grade");

    for (int i = 0; i < n; i++)
    {
        printf("  %d  %s  %.2f\n", students[i].sno, students[i].name, students[i].grade);
    }
    printf("\n");
}
