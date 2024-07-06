#include <stdio.h>
/* struct date{
    int month;
    int date;
    int year;
}; */

struct person
{
    int age;
    struct date
    {
        int month;
        int date;
        int year;
    } birthday;
    char name[20];
    int salary;
    char sex;
};
/* struct person{
    int age;
    struct date birthday,joiingday;
    char name[20];
    int salary;
    char sex;
}; */