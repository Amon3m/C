#include <stdlib.h>
#include <stdio.h>

int power(double x, int y) ;

//x^Y=x*x^(Y-1)

int main() {
	int x;
	int y;
	clrscr();

	printf("Enter the base x: ");
	scanf("%d", &x);

	printf("Enter the power y: ");
	scanf("%d", &y);

	printf("%d^%d = %d\n", x, y, power(x, y));
	getch();

	return 0;
}
int power(double x, int y) {
    if (y == 0) {
        return 1;
    } else if (y > 0) {
        return x * power(x, y-1);
    } else {
        return 1 / power(x, -y);
    }
}
