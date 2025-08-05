// Printing days of the week using switch case
#include <stdio.h>

int main()
{
    int day;

    do
    {
        printf("Enter a number to get the day of the week: ");
        scanf("%d", &day);

        switch (day)
        {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input!enter a valid number .\n");
        }

    } while (day < 1 || day > 7);

    return 0;
}