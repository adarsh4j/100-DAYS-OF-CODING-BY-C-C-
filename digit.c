      //solution

#include <stdio.h>
int main() {
int a;
int count = 0;
printf("Enter an integer: ");
scanf("%d", &a);
do {
a /= 10;
++count;
} while (a!= 0);

printf("Number of digits: %d", count);
}
