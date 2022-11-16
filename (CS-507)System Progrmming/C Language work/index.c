#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <stdlib.h> //atoi function is in stdlib headerfile.

int main(int argc, char *argv[]) // first argument(argc) tells about how many elements are in array(argv).
{
    // char someChar = 'A';
    // printf("Welcome to C!\n");
    // printf("%c", someChar);
    // printf("=%d", someChar);
    // printf("=%d", someChar);
    // printf("=%d", someChar);

    // int x = 2.13 ;     /* what is the value of x? */
    // double x = 3; /* is this ok? */

    // float pi = 3.1415926; /* 300 > 1 byte; what happens? */
    // printf("    %s %s %s %d \n", argv[1], argv[2], argv[3]);
    // printf("    %d", argc);

    // int input, output;
    // input = atoi(argv[1]);
    // output = input + 1;
    // printf("%d\n", output);

    // int c;
    // c = getchar(); /* blocks until data is entered
    //  if more than one char is entered only first is read */
    // putchar(c);    /* prints value of c to screen */

    // /* a program to loop over user input and print to screen */

    // int counter; /* declarations */
    // counter = 1; /* executable body */
    // while (counter < argc)
    // {
    //     printf("%s %d: %s\n", "argument number", counter, argv[counter]);
    //     counter = counter + 1; /* equivalent to counter++ or ++counter */
    // }

    //     /* a program to loop over user input and print back to screen
    //  with a little error checking */
    //     int counter = 1;
    //     /* check to make sure the user entered something */
    //     if (argc < 2)
    //     {
    //         printf("%s\n", "error; must enter at least one argument!");
    //         exit(1); /* exit(1) will end the program */
    //     }
    //     /* if ok, continue as before */
    //     while (counter < argc)
    //     {
    //         printf("%s %d: %s\n", "argument number", counter, argv[counter]);
    //         counter = counter + 1; /* equivalent to counter++ or ++counter */
    //     }

    /* uses getchar with while to echo user input */

    int c;         /* holds the input character value */
    c = getchar(); /* reads first character from input stream
    with keyboard, this is signaled by Enter key*/
    while (1)
    {                  /* loop forever */
        putchar(c);    /* write char to keyboard */
        printf("\n");
        c = getchar(); /*get next char in stream */
        // break;
    }


    return 0;
}

// /* Fig. 2.5: fig02_05.c
// Addition program */
// #include <stdio.h>

// int main()
// {
//     int integer1, integer2, sum; /* declaration */

//     printf("Enter first integer\n");  /* prompt */
//     scanf("%d", &integer1);           /* read an integer */
//     printf("Enter second integer\n"); /* prompt */
//     scanf("%d", &integer2);           /* read an integer */
//     sum = integer1 + integer2;        /* assignment of sum */
//     printf("Sum is %d\n", sum);       /* print sum */

//     return 0; /* indicate that program ended successfully */
// }
