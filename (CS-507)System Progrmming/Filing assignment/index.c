#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) // first argument(argc) tells about how many elements are in array(argv).
{
    int num;
    printf("Enter following Numbers:\n\t 1 for creating file \n\t 2 for editing file \n\t 3 for searching desired word from file \n\t 4 for replacing desired word with any other word from file\n\n");
    scanf("%d", &num);

    // printf("%d", num);

    switch (num)
    {
    case 1:
        FILE *file_pointer1;
        file_pointer1 = fopen("hello.txt", "w");
        fprintf(file_pointer1, "Ahmad jajja is writing.\n");
        fclose(file_pointer1);
        break;
    case 2:
        FILE *file_pointer2;
        file_pointer2 = fopen("hello.txt", "a+");
        fprintf(file_pointer2, "Hello, World3.\n");
        fclose(file_pointer2);
        break;
    case 3:
        int ch;

        char desiredWord[60];
        printf("Enter your desired word for Searching:\n");
        scanf("%s", &desiredWord);
        printf("%s", desiredWord);

        // FILE *file_pointer3;
        // file_pointer3 = fopen("hello.txt", "r");
        // while ((ch = fgetc(file_pointer3)) != EOF)
        //     printf("%c", ch);
        // fclose(file_pointer3);
        
        break;
    case 4:

        char desiredWordForSearchingAndReplacing[60],desiredWordToBeReplacing[60];
        printf("Enter your desired word for Searching and replacing:\n");
        scanf("%s", &desiredWordForSearchingAndReplacing);
        printf("%s", desiredWordForSearchingAndReplacing);
        printf("\nEnter your desired word to be replacing:\n");
        scanf("%s", &desiredWordToBeReplacing);
        printf("%s", desiredWordToBeReplacing);



        break;

    default:
        printf("You entered invalid number!");
        break;
    }
    return 0;
}