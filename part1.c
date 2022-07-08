/* First Program in C Language
    Author : Chandan
    Multi Line Comment
*/

//This is a single line comment

#include <stdio.h>

void main(){

    int age = 20; //variable
    const float bb = 10.21; //constant
    char section; //this is top get users class section

    printf("Enter section: ");
    scanf("%c", &section);

    printf("My Age is %d and my bank balance is %f and my section is %c\n",age, bb, section);


    //c operators

    int a,b;
    a = 10;
    b = 8;

    printf("Sum : %d\n", a+b ); //arithmetic

    a++; //increment op

    a+=20; //assignment

    printf("%d", a==b); //relational operator

    printf("%d", a==b || a%2==0); //logical op

    printf("%d", a&b); //bitwise operator




}

