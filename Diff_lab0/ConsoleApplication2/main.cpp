#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <locale.h>
#include <conio.h> 
#include <iostream>

float function(float x, float y)
{
	float f;
	f = x + y / x;
	return f;
}

float yt(float x)
{
	float f;
	f = x*x;
	return f;
}

float yc(float x, float y, float h)
{
	float f;
	f = y + h*function(x, y);
	return f;
}

void main()
{
	float h;
	float x, y, yci, modul;
	setlocale(LC_CTYPE, "Russian");
	printf("¬ведите шаг: ");
	scanf_s("%f", &h);
	x = 1;
	y = 1;
	yci = 1;
	modul = abs(y - yci);
	printf("%d %f %f %f %f\n", 0, x, y, yci, modul);
	for (int i = 1; i <= 10; i++)
	{
		yci = yc(x, yci, h);
		x = x + h;
		y = yt(x);
		modul = abs(y - yci);
		printf("%d %f %f %f %f\n", i, x, y, yci, modul);
	}
	_getch();
}
