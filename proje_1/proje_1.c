#include <stdio.h>
#include <math.h>


int kokler(double a, double b, double c);
int tepenoktasi(double a, double b, double c);

int main() {
	double a, b, c;
	int secim = 0;
	
	while (1) 
	{
		printf("Kok bulmak icin 1\n");
		printf("Tepe noktasi icin 2\n");
		printf("Programi kapatmak icin 3\n");
		
		scanf_s("%i",&secim);

		if (secim == 3) {
			printf("Gorusuruz");
			break;
		}

		printf("a degerini giriniz : ");
		scanf_s("%lf", &a);

		printf("b degerini giriniz : ");
		scanf_s("%lf", &b);

		printf("c degerini giriniz : ");
		scanf_s("%lf", &c);

		if (secim == 1)
		{
			kokler(a, b, c);

		}
		
		else if (secim == 2) 
		{
			tepenoktasi(a, b, c);
		}

		else 
		{
			printf("Lutfen 1/2/3 seceneklerinden birini seciniz\n");
		}

	}
	
}



int kokler(double a, double b, double c)
{
	double delta = pow(b, 2) - 4 * a * c;

	if (delta > 0) {
		double kok_1 = (-b + sqrt(delta)) / (2* a);
		double kok_2 = (-b - sqrt(delta)) / (2 * a);

		printf("iki tane gercel koku vardir :%.2lf ve %.2lf\n ", kok_1, kok_2);

	}

	else if (delta == 0) {
		printf("tek bir kok vardir : %.2lf\n", -b / 2 * a);
	}

	else {
		printf("Gercel koku yoktur\n");
	}


	return 0;
}


int tepenoktasi(double a, double b, double c) 
{
	double tepe_x = -b / 2 * a;
	double tepe_y = a * pow(tepe_x, 2) + b * tepe_x + c;

	printf("tepe noktasi : T(%.2lf,%.2lf)\n", tepe_x, tepe_y);
	
	return 0;
}





