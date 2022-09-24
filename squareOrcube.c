#include <stdio.h>
#include <conio.h>

int Square()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        int a;
        int t;
        printf("Which Number of Square root you wannnn.------------- :");
        scanf("%d", &a);
        if (a > 47000)
        {
            printf("Enter a accurate number its more than 50000 which is to big \n");
        }
        else
        {
            t = a * a;
            printf("The Squre root of %d is %d \n", a, t);
        }
    }
}
int Cube()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        int a;
        int t;
        printf("Which Number of Cube root you wannnn.------------- :");
        scanf("%d", &a);
        if (a > 40000)
        {
            printf("Enter a accurate number its more than 40000 which is to big \n");
        }
        else
        {
            t = a * a * a;
            printf("The Squre root of %d is %d \n", a, t);
        }
    }
}
int main()
{
    int a;

    printf("Enter Number  Want to Square(1) Or Cube(2) Enter Here\n:");
    scanf("%d", &a);
    if (a == 1)
    {
        Square();
    }
    if (a == 2)
    {
        Cube();
    }
}
