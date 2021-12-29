// CHRISTMAS TREE Code in C language

#include<stdio.h>
#include<conio.h>

void main() // Function for Christmas tree
{
    printf("\n       --- Merry Christmas ---      \n\n"); // Random Text at the beginning
    for (int b = 1; b <= 5; b++) // Box loop
    {
        for (int c = 1; c <= b; c++) // Columns loop
        {
            for (int space = 15; space >= b; space--) // Space\Indentation loop
            {
                printf(" "); // How far do you want to indent?
            }
            for (int r = 1; r <= b; r++) // Rows loop
            {
                printf("*"); // Symbol to make the Christmas tree
            }
            for (int r2 = 1; r2 <= b; r2++) // Inverted Second Row of Christmas tree
            {
                printf("*");
            }
            printf("\n"); // Arranging the columns
        }
        printf("\n"); // Arranging the boxes
    }
}

/*    CODE by Abel Roy | AbelR007    */
