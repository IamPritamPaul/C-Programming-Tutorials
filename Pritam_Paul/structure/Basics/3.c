#include <stdio.h>
struct abc
{
    int a;
    double b;
    char x;
};
struct student
{
    char name[20];
    int roll;
    char sex;
    int age;
    int marks[5];
};

int main()
{
    printf("%d", sizeof(struct abc));
    printf("\n%d", sizeof(struct student));
}