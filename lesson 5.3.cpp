#include <stdio.h>

int main(){
	int mynumber, yournumber;
	printf("Arfmetik ammalar bilan tanishing (+ - * /) \n");
	printf("1-son: ");
	scanf("%d \n", &mynumber);
	printf("2-son: ");
	scanf("%d \n", &yournumber);
	printf("mening raqamim %d \n", mynumber);
	printf("sening raqaming %d \n", yournumber);
	printf("Arifmetik qo'shish: %d + %d = %d \n", mynumber, yournumber, mynumber + yournumber);
	printf("Arifmetik ayirish: %d - %d = %d \n", mynumber, yournumber, mynumber - yournumber);
	printf("Arifmetik ko'paytirish: %d * %d = %d \n", mynumber, yournumber, mynumber * yournumber);
	printf("Arifmetik bo'lish': %d / %d = %d \n", mynumber, yournumber, mynumber / yournumber);
	return 0;
} 
