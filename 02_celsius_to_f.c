// Q2 WAP to convert celsius to fahrenheit
#include <stdio.h>

int main() {
  float celsius, fahrenheit;
  printf("enter temperature in C: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius * 9 / 5) + 32;
  printf("%.2f celcius = %.2f Fahrenheit\n", celsius, fahrenheit);

  return 0;
}
