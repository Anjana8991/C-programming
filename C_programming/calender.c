#include <stdio.h>

#define TRUE 1
#define FALSE 0

// Global array declarations
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *months[] = {
    "",
    "\n\n\nJanuary", "\n\n\nFebruary", "\n\n\nMarch",
    "\n\n\nApril", "\n\n\nMay", "\n\n\nJune",
    "\n\n\nJuly", "\n\n\nAugust", "\n\n\nSeptember",
    "\n\n\nOctober", "\n\n\nNovember", "\n\n\nDecember"
};

// Function prototypes
int inputyear(void);
int determineleapyear(int year);
int determinedaycode(int year);
void calendar(int year, int daycode);

int inputyear(void) {
    int year;
    printf("Please enter a year (example: 1998): ");
    scanf("%d", &year);
    return year;
}

int determineleapyear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[2] = 29;  // Set February to 29 days for leap years
        return TRUE;
    } else {
        days_in_month[2] = 28;  // Set February to 28 days for non-leap years
        return FALSE;
    }
}

int determinedaycode(int year) {
    int daycode;
    int d1, d2, d3;
    d1 = (year - 1) / 4;
    d2 = (year - 1) / 100;
    d3 = (year - 1) / 400;
    daycode = (year + d1 - d2 + d3) % 7;
    return daycode;
}

void calendar(int year, int daycode) {
    int month, day;
    for (month = 1; month <= 12; month++) {
        printf("%s", months[month]);
        printf("\n\nSun Mon Tue Wed Thu Fri Sat\n");

        // Correct the position for the first date
        for (int space = 0; space < daycode; space++) {
            printf("    ");
        }

        // Print all the dates for one month
        for (day = 1; day <= days_in_month[month]; day++) {
            printf("%2d  ", day);

            // Check if day is before Sat, else start a new line
            if ((day + daycode) % 7 == 0) {
                printf("\n");
            }
        }

        // Set position for the next month
        daycode = (daycode + days_in_month[month]) % 7;
        printf("\n");
    }
}

int main(void) {
    int year, daycode;
    year = inputyear();
    daycode = determinedaycode(year);
    determineleapyear(year);
    calendar(year, daycode);
    printf("\n");
    return 0;
}
