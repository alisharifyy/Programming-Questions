#include <stdio.h>


int main(void)
{
    // Get input from user
    int user = 0;
    printf("Enter a Number: ");
    scanf("%i", &user);

    // this for loop is for Row
    for (int i = 1; i <= user ;i++)
    {
        for (int j = 0; j < i ; j++)
        {
            printf("*");
        }
        // Print New Line in end of each Row
        printf("\n");

    }

}