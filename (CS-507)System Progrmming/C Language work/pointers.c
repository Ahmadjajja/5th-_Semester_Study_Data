#include <stdio.h>
#include <conio.h>
#include <string.h>

/**
 * The function takes a pointer to an integer, and sets the value of the integer to zero
 */
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

    // Basic Pointer and Array concept clear
    //  Very important example

    // int table[4];
    // int *ptr;
    // ptr = table;     // confusion  // stores starting address of array
    // table[1] = 94;   // confusion
    // *(ptr + 1) = 94; // confusion
    // printf("ptr => %d ,,, table[0] => %d ,,,  table => %d",&ptr, &table[0], &table);
    // printf("\n");
    // printf("address of starting index of array => %d", table);
    // printf("\n");
    // printf("address of starting index of array in ptr => %d", ptr);
    // printf("\n");
    // printf("value stores at index 4 in table array => %d", table[1]);
    // printf("\n");
    // printf("getting value stores at index 4 in array using ptr => %d", (*(ptr + 1)));
    // printf("\n");
    // printf("4th index address => %d", &table[1]);
    // printf("\n");
    // printf("4th index address using ptr =>  %d", ((ptr + 1)));

    // Below code is Very Tricky

    // char str[] = "Test";
    // char *p;
    // int i;
    // for (p = str, i = 0; *p != '\0'; p++, i++)
    // printf("\n The length of the string is %d and value at this index is %d ", i,*p);

    // // printf("\n%d", ('\0' == 0));   // output 1 means condition is true

    // NULL pointer

    // int *yPtr, y = 5;
    // yPtr = &y;

    // printf("\n *yPtr => %d",*yPtr);
    // printf("\n y => %d",y);

    // *yPtr = 7;

    // printf("\n *yPtr => %d",*yPtr);
    // printf("\n y => %d",y);

    double myArray[10];
    printf("%d", sizeof(myArray));

    return 0; /* indicate that program ended successfully */
}

// //Very Tricky and Interesting Example

// void MyPrint(char *txt);
// void Double( int *number );
// void main()
// {
//     char *msg = NULL;
//     char x = 'A';
//     msg = &x;
//     printf("%c",msg);   // prints address
//     printf("\n%c",*msg);  // prints actual value

//     MyPrint(msg);

//     int *numPtr,num  = 2;
//     numPtr = &num;
//     Double(numPtr);
// }
// void MyPrint(char *txt)
// {
//     if (txt == NULL)
//         printf("Invalid parameters: NULL pointer received\n");
//     else
//         printf("\n%c\n", *txt);   // prints actual value
// }

// void Double( int *number )
// {
// *number = 2 * ( *number );
// printf("number = %d ", *number);
// }

// /* Fig. 7.10: fig07_10.c
// Converting lowercase letters to uppercase letters
// using a non-constant pointer to non-constant data */

// #include <stdio.h>
// #include <ctype.h>

// void convertToUppercase(char *sPtr); /* prototype */

// int main(void)
// {
//     char string[] = "characters and $32.98"; /* initialize char array */

//     printf("The string before conversion is: %s", string);
//     convertToUppercase(string);
//     printf("\nThe string after conversion is: %s\n", string);

//     return 0; /* indicates successful termination */

// } /* end main */

// /* convert string to uppercase letters */
// void convertToUppercase(char *sPtr)
// {
//     while (*sPtr != '\0')
//     { /* current character is not '\0' */

//         if (islower(*sPtr))
//         {                           /* if character is lowercase, */
//             *sPtr = toupper(*sPtr); /* convert to uppercase */
//         }                           /* end if */

//         ++sPtr; /* move sPtr to the next character */
//     }           /* end while */

// } /* end function convertToUppercase */
