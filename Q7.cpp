#include <stdio.h>

int main()
 {
    float l, w, a, p;

    printf("Enter the length of rectangle: ");
    scanf("%f", &l);

    printf("Enter the width of rectangle: ");
    scanf("%f", &w);

    a = l * w;
    p = 2 * (l + w);

    printf("Area = %f\n", a);
    printf("Perimeter = %f\n", p);

    return 0;
}
