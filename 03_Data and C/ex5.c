#include <stdio.h>

int main(void)
{
  unsigned int age;
  unsigned int SECONDS_PER_YEAR = 3.156e+07;

  printf("Please enter your age: ");
  scanf("%u", &age);
  printf("Your have passed %u seconds\n", age * SECONDS_PER_YEAR);

  return 0;
}
  
