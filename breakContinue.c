#include <stdio.h>

void main(){

    int i;
    float number, sum=0;

    for(i=0;i<10;i++){
        printf("Enter n%d: ", i+1);
        scanf("%f", &number);

        if (number<0){
            //break; //break the loop
            continue; //break the current iteration
        }

        sum += number;
        printf("Present sum: %f\n", sum);
    }

    printf("Total sum: %f\n", sum);

}