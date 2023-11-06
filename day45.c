#include<stdio.h>
int main()
{
    float farheneit,celcius;
    printf("enter the value of farheneit\n");
    scanf("%f",&farheneit);
    celcius=(farheneit-32)*5/9;
    printf("celcius=%f",celcius);
    return 0;
}
