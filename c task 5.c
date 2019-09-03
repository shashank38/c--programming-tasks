WRITE A C PROGRAMME TO FIND THE REVERSE OF A GIVEN NUMBER

*/
#include <stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
    char arr[100];

    printf("insert a number to reverse\n");
    gets(arr);

    strrev(arr);

    printf("reverse of the number is \n%s\n", arr);

    return 0;

}
