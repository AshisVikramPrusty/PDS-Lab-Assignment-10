/*Create a structure/class for a group of 10 students holding data for their Regn
no., Name, Branch, CGPA [10 marks]
a. Call a linear search function to display data of a student with a particular
Regn no.
b. Call a sort function to arrange data of students according to Regn no.*/
#include<stdio.h>
struct Student{
    char name[15];
    int roll;
    char branch[20];
    float cgpa;
    int regnno;
}std[10];
void search(int a)
{
    int i;
    for(i=0; i<10; i++)
    {
        if(a == std[i].regnno)
        {
            printf("Student details: \n");
            printf("Name: %s\nRoll No.: %d\nBranch: %s\nCGPA: %f\nRegn. No.:%d", std[i].name, std[i].roll, std[i].branch, std[i].cgpa, std[i].regnno);
        }
    }
}
void sort()
{
    int i, j;
    char temp1[15];
    char temp2[20];
    int temp;
    float temp3;
    for(j=0; j<10; j++)
    {
        for(i=0; i<10; i++)
        {
            if(std[i].regnno > std[i+1].regnno)
            {
                temp = std[i].roll;
                std[i].roll = std[i+1].roll;
                std[i+1].roll = temp;

                temp = std[i].regnno;
                std[i].regnno = std[i+1].regnno;
                std[i+1].regnno = temp;

                temp3 = std[i].cgpa;
                std[i].cgpa = std[i+1].cgpa;
                std[i+1].cgpa = temp3;

                *temp1 = *std[i].name;
                *std[i].name = *std[i+1].name;
                *std[i+1].name = *temp1;

                *temp2 = *std[i].branch;
                *std[i].branch = *std[i+1].branch;
                *std[i+1].branch = *temp2;

            }
        }
    }
}
int main()
{
    int i,m;
    for(i=0; i<10; i++)
    {
        printf("%d. Enter Student Name, Roll No., Regn. No., CGPA, Branch: ", i+1);
        scanf("%s%d%d%f%s", std[i].name, &std[i].roll, &std[i].regnno, &std[i].cgpa, std[i].branch);
    }
    printf("Enter Regn. No. of student you want to search: ");
    scanf("%d", &m);
    search(m);
    return 0;
}