#include <stdio.h>

int main(int argc, char *argv[])
{
    double x, y;

    x = 0.083 * 40.0;
    y = 0.0;

    printf("X %.15g   Y %.15g\n", x, y);

    y += x;

    printf("Y %.15g\n", y);

    if (y < x)
	printf("Y < X\n");
    else if (y == x)
	printf("Y = X\n");
    else
	printf("Y > X\n");


    exit(0);
}

