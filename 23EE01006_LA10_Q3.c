#include<stdio.h>
struct student{
    char name[30];
    int marks[5];
} std;
int main()
{
    int i;
    printf("Enter student name: ");
    scanf("%s", std.name);
    for(i=0; i<5; i++)
    {
        printf("Enter marks out of 100 of subject %d: ", i+1);
        scanf("%d", &std.marks[i]);
    }
    printf("Student details: \n");
    printf("Name: %s\n", std.name);
    for(i=0; i<5; i++)
    {
        printf("Marks in subject %d = %d\n", i+1, std.marks[i]);
    }
    return 0;
}