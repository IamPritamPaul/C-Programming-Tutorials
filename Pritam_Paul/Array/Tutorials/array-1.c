#include <stdio.h>
int main()
{
    // decalre array
    //  <data_type> <array_name> [size]
    //  int arr[10];
    // initialisation of array
    /* arr[0]=5;
    arr[1]=10;
    arr[2]=15;
    arr[3]=20;
    arr[4]=25;
    arr[5]=30;
    arr[6]=35;
    arr[7]=40;
    arr[8]=45;
    arr[9]=50; */
    int arr[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    // print the array
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n%d\t%d", sizeof(arr), sizeof(arr[0]));
}