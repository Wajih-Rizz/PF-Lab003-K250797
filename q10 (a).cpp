#include <stdio.h>

int main() {
    int a, b, temp;
    a = 10;
	b = 5 ; 
   
    temp = a;
    a = b;
    b = temp;

    printf(" a = %d, b = %d\n", a, b);

    return 0;
}
