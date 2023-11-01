/*Write a program to manage account information of customers. [20 Marks]
Define a structure to store the name, account number and balance of customers.
a. Create an array that can hold data of 15 customers and initialize the array.
b. Write a function to print the names of all the customers having balance
more than Rs. 50000.
c. Write a function to add Rs 1000 in the balance of all the customers having
more than Rs 10000 in their balance and then print the incremented value
of their balance.
d. Function withdraw that deducts a specified amount from the given
account*/
#include<stdio.h>
struct Account{
    char name[10];
    int accno;
    int bal;
}acc[4];
int i;
void fiftyk()
{
    for(i=0; i<4; i++)
    {
        if(acc[i].bal>= 50000)
        {
            printf("Customer %s with Account No. %d has balance over Rs.50,000.\n", acc[i].name, acc[i].accno);
        }
    }
}
void tenk()
{
    for(i=0; i<4; i++)
    {
        if(acc[i].bal>= 10000)
        {
            acc[i].bal += 1000;
            printf("Customer %s with Account No. %d has balance Rs.%d after increment of Rs.1000.\n", acc[i].name, acc[i].accno, acc[i].bal);
        }
    }
}
void deduct(int a, int b)
{
    for(i=0; i<4; i++)
    {
        if(acc[i].accno == a)
        {
            acc[i].bal -= b;
            printf("Customer %s with Account No. %d has balance Rs.%d after deduction of %d ruppees.\n", acc[i].name, acc[i].accno, acc[i].bal, b);
        }
    }
}
int main()
{
    int m, n;
    for(i=0; i<4; i++)
    {
        printf("Enter Name, Account no. and Balance of customer: ");
        scanf("%s%d%d", acc[i].name, &acc[i].accno, &acc[i].bal);
    }
    printf("\n");
    fiftyk();
    printf("\n");
    tenk();
    printf("\n");
    printf("Enter the Account No. and the amount you want to deduct: ");
    scanf("%d%d", &m, &n);
    deduct(m,n);
    return 0;
}