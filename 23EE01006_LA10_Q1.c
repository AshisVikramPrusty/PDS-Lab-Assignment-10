#include<stdio.h>
struct Student {
char name[10];
int age;
}std[5];
int main()
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("Enter student's name with roll no %d : ", i+1);
        scanf("%s", std[i].name);
        printf("Enter student's age: ");
        scanf("%d", &std[i].age);
    }

    printf("Student records for student with roll no = 2: \n");
    printf("Name: %s \t Roll No.: 2 \t Age: %d", std[1].name, std[1].age);
    return 0;
}