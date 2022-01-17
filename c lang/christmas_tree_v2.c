// CHRISTMAS TREE Variation 2 | C lang
// ----------------------------------------------------------------
// Using Triangle Structure

#include<stdio.h>

// Main Function
void main()
{
    printf(
        "   Merry Christmas \n"
        " ------------------\n"
    );

    for (int ch = 1; ch <= 3; ch++) // For the number of triangles
    {
        int nsp = 1;
        for (int tc = 1; tc <= 5; tc++) // Triangle columns
        {
            for (int sp = 5; sp >= nsp; sp--) // Align
                printf(" ");
            for (int tr = 1; tr <= tc; tr++) // Triangle rows
                printf("*");
            nsp = nsp + 1;
            for (int mr = 1; mr <= tc; mr++) // Triangle Mirrored rows
                printf("*");
            printf("\n");
        }
    }
    for (int tr = 1; tr <= 4; tr++) // Trunk Rows
    {
        printf("    "); // Align
        for (int tc = 1; tc <= 4; tc++) // Trunk Columns
            printf("*");
        printf("\n");
    }
}

// CODE by ABEL ROY | AbelR007 //
