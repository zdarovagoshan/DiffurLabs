#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <locale.h>
#include <conio.h> 
#include <iostream>


double function(double x, double y)
{
	return x + y / x;
}

void main()
{
	double h, x, y, yci, p;
	setlocale(LC_CTYPE, "Russian");
	printf("¬ведите шаг: ");
	scanf_s("%lf", &h);
	x = 1.0f;
	y = 1.0f;
	yci = 1.0f;
	printf("%d %lf %lf %lf %lf\n", 0, x, y, yci, abs(y - yci));
	for (int i = 1; i <= (int)(0.5/h); i++)
	{
		
		//yci = yci+h*function(x, yci);
		p = yci + h*function(yci, x);
		yci = yci + h*function(x + h, p);
		x = x + h;
		y = x*x;
		printf("%d %lf %lf %lf %lf\n", i, x, y, yci, abs(x*x - yci));
	}
	_getch();
}
