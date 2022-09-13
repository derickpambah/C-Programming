#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 * getchar() - reads characters from stdin and returns an int 
 * value suitable for storing into a char
 * 
 * Description: Program to read input and count the number of 
 * commas and full stops. On end of input, it prints the total
 * EOF is the value returned by getchar()
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    int this_char, comma_count, stop_count;

    comma_count = stop_count = 0;
    this_char = getchar();
    
    while (this_char != EOF)
    {
        if (this_char == '.')
            stop_count += 1;
        if (this_char == ',')
            comma_count += 1;
        this_char = getchar();
    }
    printf("%d commas, %d stops\n", comma_count, stop_count);
    exit(EXIT_SUCCESS);
}