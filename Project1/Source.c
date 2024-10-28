#include <stdio.h>	
//#define _CRT_SECURE_NO_WARNINGS
int main() {

	/*int nrAlbumu = 12345;
	printf("nr albumu: %d", nrAlbumu);*/ //zadanie 1

	/*int a;
	printf("Podaj liczbe: ");
	scanf_s("%d", &a);
	if (a % 2 == 0) printf("liczba parzysta");
	else printf("liczba nieparzysta");*/ //zadanie 2

	/* float a, b;
	printf("Podaj liczby: ");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	if (a > b) printf("%f", a);
	else printf("%f", b); */ //zadanie 3

	/*float a, b, c, d, e;
	printf("Podaj liczby: ");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);
	scanf_s("%f", &d);
	e = (a + b + c + d) / 4;
	printf("%f", e); */ //zadanie 4

	/*double a, b;
	char operator;
	printf("Kalkulator");
	printf("Podaj liczbe 1: ");
	scanf("%lf", &a);
	printf("Podaj operator: ");
	scanf(" %c", &operator); //wymagana jest spacja przed %c, aby uniknac problemow z buforowaniem
	printf("Podaj liczbe 2: ");
    scanf("%lf", &b);
	

	switch (operator) {
	case '+':
		printf("Wynik: %lf\n", a + b);
		break;
	case '-':
	
		printf("Wynik: %lf\n", a-b);
		break;
	case'*':
		
		printf("Wynik: %lf\n", a*b);
		break;
	case'/':
		if (b != 0) {
			
			printf("Wynik: %lf\n", a/b);
		}
		else {
			printf("Kolego przez 0 nie dzielimy!!!\n");
		}
		break;
	default:
		printf("Jeszcze nie mogie tego rozwiazac :(\n");
	}
	*/ //zadanie 5


	return 0;
}// koniec main