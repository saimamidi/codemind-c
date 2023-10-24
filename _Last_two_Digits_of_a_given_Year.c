#include <stdio.h>

int main() {
    int year;


    scanf("%d", &year);

    // Use the modulo operator (%) to get the last two digits of the year
    int lastTwoDigits = year % 100;

    printf("%02d", lastTwoDigits);

    return 0;
}