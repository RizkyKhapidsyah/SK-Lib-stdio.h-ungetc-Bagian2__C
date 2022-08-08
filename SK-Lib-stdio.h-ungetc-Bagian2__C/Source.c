#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int ch;

    while ((ch = getchar()) != '1') {
        putchar(ch);
    }
        
    ungetc(ch, stdin);

    ch = getchar();
    putchar(ch);

    _getch();
    return 0;
}