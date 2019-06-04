#include <stdio.h>
int main(void)
{
  float MASS_MOLECULE = 3e-23;
  int amount_water;
  int quarts;

  printf("Enter an amount of water (in quarts): ");
  scanf("%d",&quarts);
  amount_water = quarts * 950;

  printf("the number of water molecules in that amount is: %f\n", amount_water / MASS_MOLECULE);
  
  printf("type has a size of %zd bytes.\n", sizeof(amount_water/MASS_MOLECULE));
  return 0;
}
