#include <stdio.h>
int main(void)
{
  int ch;

  printf("Please enter a ascll code.\n");
  scanf("%d", &ch);
  printf("The character for %d is %c.\n", ch, ch);

  return 0;
}
