#include<stdio.h>

int main(){
    float obtainedMarks;
    float totalMarks;
    float percentage;

    printf("Enter your obtained marks: ");
    scanf("%f", &obtainedMarks);
    
    printf("Enter the total marks: ");
    scanf("%f", &totalMarks);

    percentage = (obtainedMarks/totalMarks)*100;
    printf("The percentage marks scored is: %f\n",percentage);
    return (0);
}