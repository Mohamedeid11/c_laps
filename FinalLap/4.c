#include <stdio.h>
#include <string.h>

// 4- C Function to store information (name, id and grade) for
// 10 students in array of structures using pointers and
// another function to print all the structures using pointers.

struct student {
    char name[50];
    int id;
    float grade;
};

void enterData(struct student *students, int n);
void displayData(struct student *students, int n);

int main()
{
    struct student *students;
    int n = 5;

    students = (struct student*) malloc(n * sizeof(struct student));

    enterData(students, n);
    displayData(students, n);

    free(students);

    return 0;
}

void enterData(struct student *students, int n)
{
    int i;
    for(i = 0; i < n; ++i)
    {
        printf("Enter name and id and grade respectively:\n");
        scanf("%s %d %f", (students+i)->name, &(students+i)->id, &(students+i)->grade);
    }
}

void displayData(struct student *students, int n)
{
    int i;
    printf("Displaying Information:\n\n");
    for(i = 0; i < n; ++i)
        printf("Name: %s\nID: %d\nGrade: %.2f\n\n", (students+i)->name, (students+i)->id, (students+i)->grade);
}
