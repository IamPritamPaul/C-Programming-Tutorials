#include <stdio.h>
#define size 5
struct student
{
    char name[20];
    int roll;
    char sex;
    int age;
};

int main()
{
    struct student class_10[size];
    for (int i = 0; i < size; i++)
    {
        printf("\nFor student - %d :\nEnter the name: ", i + 1);
        fflush(stdin);
        gets(class_10[i].name);
        printf("Enter the roll : ");
        fflush(stdin);
        scanf("%d", &class_10[i].roll);
        printf("Enter the sex : ");
        fflush(stdin);
        scanf("%c", &class_10[i].sex);
        printf("Enter the age : ");
        fflush(stdin);
        scanf("%d", &class_10[i].age);
    }
    for (int i = 0; i < size; i++)
    {
        printf("\nStudent %d : \n", i + 1);
        printf("Name : %s", class_10[i].name);
        printf("\nRoll: %d", class_10[i].roll);
        printf("\nsex: %c", class_10[i].sex);
        printf("\nAge: %d", class_10[i].age);
    }
    return 0;
}