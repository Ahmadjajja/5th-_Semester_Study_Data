#include<stdio.h>
#include<conio.h>
main(){
    int month, year, day;
    string monthInString;
    printf("Enter year=>");
    scanf("&d",year);
    if(month > 11){
        printf("You enter invalid month number Please enter again!");
        scanf("&d",month);
    }
    printf("Enter day=>");
    scanf("&d",day);

    switch(month){
        case 0:
        monthInString: "January";
        break;
        case 1:
        monthInString: "February";
        break;
        case 2:
        monthInString: "March";
        break;
        case 3:
        monthInString: "April";
        break;
        case 4:
        monthInString: "May";
        break;
        case 5:
        monthInString: "June";
        break;
        case 6:
        monthInString: "July";
        break;
        case 7:
        monthInString: "August";
        break;
        case 8:
        monthInString: "September";
        break;
        case 9:
        monthInString: "October";
        break;
        case 10:
        monthInString: "November";
        break;
        case 11:
        monthInString: "December";
        break;
    }
    printf("%c", monthInString);
}