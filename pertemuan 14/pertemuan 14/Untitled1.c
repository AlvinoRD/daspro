
#include<stdio.h>

int main()
{
	int menu, price, total=0;
	char c;

	printf("========================\n");
	printf("Welcome to Eileen's Cafe\n");
	printf("========================\n");
	printf("We serve : \n");
	printf("1. Matcha Latte\n");
	printf("2. Red Velvet Latte\n");
	printf("3. Chocolate Latte\n");
	printf("4. Croissant\n");
	printf("5. Cinnamon Roll\n");
	printf("6. Strawberry Eclair\n");

	while(c!='n'){
		printf("\nPick your menu : ");
		scanf("%d", &menu);

		if(menu == 1){
			price = 25000;
			printf("Price : %d\n", price);
		}
		else if(menu == 2){
			price = 22000;
			printf("Price : %d\n", price);
		}
		else if(menu == 3){
			price = 20000;
			printf("Price : %d\n", price);
		}
		else if(menu == 4){
			price = 28000;
			printf("Price : %d\n", price);
		}
		else if(menu == 5){
			price = 30000;
			printf("Price : %d\n", price);
		}
		else if(menu == 6){
			price = 25000;
			printf("Price : %d\n", price);
		}

		total+=price;
		printf("\nMore transaction?\n");
		printf("Press y if yes\nPress n if no\n");
		scanf(" %c", &c);
	}
	printf("\nTotal : %d", total);

	return 0;
}
