#include <stdio.h>

int main()
 {
    float m1, m2, m3, total, percentage;

    printf("Enter marks for subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks for subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    percentage = (total / 300) * 100; 

    printf("Total = %f\n", total);
    printf("Percentage = %f\n", percentage);

    return 0;
}
