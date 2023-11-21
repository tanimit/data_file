#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *new_file;
    clrscr();
    new_file = fopen("c:\\test.ncg", "w");
    printf("\n A new file, named test. ncg is created.");
    getch ();
    return 0;
}
