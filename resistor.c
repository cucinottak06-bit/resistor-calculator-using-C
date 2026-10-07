// === Resistor Calculator ===
#include <stdio.h>
#include <math.h>

int combining(int a, int b) {
    int value = (a * 10) + b;
    return value;
}

int multiplier(int c) {
    if (c >= 0 && c <= 9) {
        return c;
    }
    else if (c == 10) {
        c = -1;
    }
    else if (c == 11) {
        c = -2;
    }

    return c;
}

double tol(double d) {
    if (d <= 4 && d >= 1) {
        return d;
    }
    else if (d == 5) {
        d = 0.5;
    }
    else if (d == 6) {
        d = 0.25;
    }
    else if (d == 7) {
        d = 0.1;
    }
    else if (d == 8) {
        d = 0.05;
    }
    else if (d == 10) {
        d = 5;
    }
    else if (d == 11) {
        d = 10;
    }

    return d;
}

int main() {
    int firstBand;
    int secondBand;
    int thirdBand;
    double fourthBand;
    int digits;
    double resistance;

    printf("Resistor Calculator\n");
    printf("0 - Black\n");
    printf("1 - Brown\n");
    printf("2 - Red\n");
    printf("3 - Orange\n");
    printf("4 - Yellow\n");
    printf("5 - Green\n");
    printf("6 - Blue\n");
    printf("7 - Violet\n");
    printf("8 - Grey\n");
    printf("9 - White\n");
    printf("10 - Gold\n");
    printf("11 - Silver\n");

    for (;;) {
        printf("Enter first color band: ");
        scanf("%d", &firstBand);

        if (firstBand >= 0 && firstBand <= 9) {
            break;
        }
        else {
            printf("Invalid input, try again.\n");
        }
    }

    for (;;) {
        printf("Enter the color of the second band: ");
        scanf("%d", &secondBand);

        if (secondBand >= 0 && secondBand <= 9) {
            break;
        }
        else {
            printf("Invalid input, try again.\n");
        }
    }

    for (;;) {
        printf("Enter the color of the third band: ");
        scanf("%d", &thirdBand);

        if (thirdBand >= 0 && thirdBand <= 11) {
            break;
        }
        else {
            printf("Invalid input, try again.\n");
        }
    }

    for (;;) {
        printf("Enter the color of the fourth band: ");
        scanf("%lf", &fourthBand);

        if ((fourthBand >= 1 && fourthBand <= 8) ||
            fourthBand == 10 ||
            fourthBand == 11) {
            break;
        }
        else {
            printf("Invalid input, try again.\n");
        }
    }

    digits = combining(firstBand, secondBand);
    thirdBand = multiplier(thirdBand);
    fourthBand = tol(fourthBand);

    resistance = digits * pow(10, thirdBand);

    printf("Resistance: %.2lf ohms +/- %.2lf%%\n",
           resistance, fourthBand);

    return 0;
}
