#include <stdio.h>

void main(){

    int a,b, choice;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("1.Add\n2.Subtract\nEnter choice>> ");
    scanf("%d", &choice);

    switch(choice){
        case 1: printf("%d", a+b); break;
        case 2: printf("%d", a-b); break;
        default : printf("Invalid Option! Try again!");
    }

}