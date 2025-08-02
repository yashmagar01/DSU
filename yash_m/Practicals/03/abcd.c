/* Write a simple C program to perform linear search on an array of Strings to find Case
Insensitive search for a string  */

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    //Variable dclaration
    char ch[10];
    int i, search, size, count = 0;

    //Reading string size
    // printf("\nEnter string size: ");
    // scanf("%d",&size);

    ch[size];

    //Reading a string using gets functions
    printf("\nEnter a string: ");
    gets(ch);
    puts(ch);

    //Reading the search element
    printf("\nEnter the search element: ");
    scanf("%c",&search);

    //Performing linear search of string
    for(i = 0; i < size; i++)
    {
        if(ch[i] == search)
        {
            count++;
            printf("\n%c character is found %c times at postion %c ", search, i, count);
        }
    }
}