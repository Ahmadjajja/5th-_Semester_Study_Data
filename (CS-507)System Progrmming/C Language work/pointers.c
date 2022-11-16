#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    // int number;
    // int *ptr_to_num;
    // number = 23;
    // ptr_to_num = &number;                 //ampersand(address Operator) & stores address of number in variable ptr_to_num pointer
    // printf("Value is %d \n", (*ptr_to_num));
    // printf("Value is %d \n", (number));

    // int number;                     // Very interesting example of pointers
    // int *p1, *p2;
    // // printf("%d", &number);
    // p1 = &number;   //will store address of number
    // number = 23;    // will store value in number variable and address of that variable will same i think   // note carefully!
    // p2 = &number;   // will store address of number
    // printf(" *p1 = %d *p2 = %d ", *p1, *p2);

    // Pointers and Arrays

    // char str[32];
    // char *ptr;
    // //i don't understand below lines
    // ptr = str;                           // stores starting address of array
    // printf("%d",&str);
    // printf("\n");
    // printf("%d",ptr);
    // // strcpy(str, "test");
    // // strcpy(ptr, "test"); /* does the same as above */


    // Pointer and Array concept clear
    // Very important example


    int table[4];
    int *ptr;
    ptr = table;     // confusion  // stores starting address of array
    table[1] = 94;   // confusion
    *(ptr + 1) = 94; // confusion
    printf("ptr => %d ,,, table[0] => %d ,,,  table => %d",&ptr, &table[0], &table);
    printf("\n");
    printf("address of starting index of array => %d", table);
    printf("\n");
    printf("address of starting index of array in ptr => %d", ptr);
    printf("\n");
    printf("value stores at index 4 in table array => %d", table[1]);
    printf("\n");
    printf("getting value stores at index 4 in array using ptr => %d", (*(ptr + 1)));
    printf("\n");
    printf("4th index address => %d", &table[1]);
    printf("\n");
    printf("4th index address using ptr =>  %d", ((ptr + 1)));

    return 0; /* indicate that program ended successfully */
}