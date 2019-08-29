WRITE A C PROGRAM TO READ THE NAME,AGE AND PHONE NUMBER FROM THE USER , STORE THEM IN VARIABLES AND DISPLAY THEM BACK
#include <stdio.h>

int main()
{
    char name[30];
    int age;
    int phone[10];
    printf("information of the user");
    printf(ENTER NAME: );
    scanf("%s" , &name);
    printf("ENTER AGE: ");
    scanf("%d" , &age);
    printf("ENTER PHONE NUMBER: ");
    scanf("%d", &phone);
    printf("pls wait a second showing the informations")
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("phone number: %d\n",phone);
    return 0;
}
