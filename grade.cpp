#include<stdio.h>

int main()
{
    int marks;

    printf("Input Marks:");

    scanf("%d",&marks);

    if(marks>=0 && marks<=100)
    {
        if(marks>=90)
            printf("Grade A+\n");
        else if(marks>=80)
            printf("Grade: A\n");
        else if(marks>=70)
            printf("Grade: A-\n");
        else if(marks>=60)
            printf("Grade: B\n");
        else if(marks>=50)
            printf("Grade: C\n");
        else if(marks>=40)
            printf("Grade: D\n");
        else
            printf("Grade: F\n");
    }
    else
        printf("Invalid marks");
}
