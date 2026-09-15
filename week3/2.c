//switch_case
#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int outcome;
    char grades;
    
    scanf("$d", &outcome);

    switch (outcome/10)
    {
    case 9:
        grades = "A"
        break;

    case 8:
        grades = "B"
        break;
    
    case 7:
        grades = "C"
        break;

    case 6:
        grades = "D"
        break;

    default:
        grades = "F"    
        break;
    }
    printf("학점은: %c \n", grades)
}