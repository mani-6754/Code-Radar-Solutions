#include <stdio.h>
int main()
{
    char n[100];
    int age[100];
    char h[100];
    scanf("%s %s",&n,&h);
    scanf("%d",&age);
    printf("Name: %s\nAge: %d\nHobby: %s",n,age,h);
}