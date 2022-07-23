#include <stdio.h>

void main(){
    
    int n = 4;
    double avg;
    int sum=0;
    int marks[n];

    printf("Enter student marks:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }

    marks[0] = 100;

    marks[n-1] = 100;
    
    printf("Student marks are:\n");
    for(int i=0;i<n;i++){
        sum = sum + marks[i];
        printf("%d  ",marks[i]);
    }

    avg = sum/n;
    printf("Class average: %f", avg);

}
