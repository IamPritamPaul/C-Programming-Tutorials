#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    char sex;
    int age;
    int marks[5];
} pritam, deepraj;

int main()
{
    printf("Enter the student name : ");
    gets(pritam.name);
    fflush(stdin);
    pritam.roll = 1;
    pritam.sex = 'm';
    pritam.age = 25;
    pritam.marks[0] = 76;
    pritam.marks[1] = 66;
    pritam.marks[2] = 56;
    pritam.marks[3] = 96;
    pritam.marks[4] = 86;
    printf("name: %s\nroll no : %d\nsex : %c\nage : %d\nmarks : ", pritam.name, pritam.roll, pritam.sex, pritam.age);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", pritam.marks[i]);
    }
    return 0;
}