#include <stdio.h>
#include <string.h>

int main(void){
	char first[10];

	printf("Enter your first name:");
	scanf("%s", first);
	printf("\"%s\"\n", first);
	printf("%20s\n", first);
	printf("\"%-20s\"\n", first);
	int len = strlen(first);
	printf("\"%*s\"\n", len+3, first);
}