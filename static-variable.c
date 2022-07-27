#include<stdio.h>

/* Without using a static variable */
int incrementAge(){
        int age = 0;
        age++;
        return age;
}

/* Using a static variable */
int incrementCount(){
    static int count;
    count++;
    return count;
}

/* static arrays */
int incrementYears(){
    static int years[3];
    years[0]++;
    return years[0];
}

int main(){
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    printf("%d\n\n", incrementAge());

    printf("%d\n", incrementCount());
    printf("%d\n", incrementCount());
    printf("%d\n\n", incrementCount());

    printf("%d\n", incrementYears());
    printf("%d\n", incrementYears());
    printf("%d\n", incrementYears());
    return (0);
}
