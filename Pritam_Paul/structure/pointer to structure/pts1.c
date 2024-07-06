#include <stdio.h>
struct student
{
    char name[20];
    int age;
    char sex;
};
int main()
{
    struct student deepraj = {"Deepraj Sarma", 19, 'm'};
    struct student *ptr = &deepraj;
    // int *p = &ptr->age;
    // printf("Name : %s\n", (*ptr).name);
    printf("Name : %s\n", ptr->name);
    printf("Age : %d\n", ptr->age);
    printf("Sex : %c\n", ptr->sex);
    printf("Sex : %s\n", (ptr->sex == 'm' ? "Male" : "Female"));
    return 0;
}