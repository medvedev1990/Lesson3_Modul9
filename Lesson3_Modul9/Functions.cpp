#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include"Header.h"
#include<time.h>

int i, j;
void ZappMass(int *mass, int *row)
{
	for(i = 0;i < *row;i++)
	{
		*(mass + i) = -5 + rand() % 20;
	}
}
void PrintMass(int *mass, int*row)
{
	for (i = 0;i < *row;i++)
	{
		printf("%d\t", *(mass + i));
	}
	printf("\n----------------------\n");
}
void copyInMass(int *mass, int*mass2, int *mass3, int row1, int row2)
{
	int chek = 0;
	for (i = 0;i < row1;i++)
	{
		*(mass3 + chek) = *(mass + i);
		chek++;
	}
	for (i = 0;i < row2;i++)
	{
		*(mass3 + chek) = *(mass2 + i);
		chek++;
	}
}
void sortirovka(int*mass, int *row)
{
	int m;
	for (i = 0;i < *row;i++)
	{
		for (j = *row - 1;j > i;j--)
		{
			if (*(mass + j) > *(mass + (j - 1)))
			{
				m = *(mass + j);
				*(mass + j) = *(mass + (j - 1));
				*(mass + (j - 1)) = m;
			}
		}
	}
}
void dubleElement(int *mass, int *row)
{
	int chek = 0;
	for (i = 0;i < *row;i++)
	{
		chek = 0;
		for (j = 0;j < *row;j++)
		{
			if (*(mass + i) == *(mass + j))
				chek++;
			if (chek == 2)
			{
				printf("повтор€ющиес€ элементы имеют идексы mass[%d] и mass[%d]", i, j);
				break;
			}
		}
		if (chek == 2)
			break;
	}
	
}
void minElement_First(int*mass, int*row)
{
	int min = *mass;
	int index = 0;
	for (i = 0;i < *row;i++)
	{
		if (min > *(mass + i))
		{
			min = *(mass + i);
			index = i;
		}
	}
	printf("индекс наименьшего элемента = %d\n", index);
}
void number_7(int *mass, int*row)
{
	int chek = 0;
	for (i = 0;i < *row;i++)
	{
		if (*(mass + i) == 7)
			chek++;
	}
	printf("число 7 встречаетс€ %d раз", chek);
}
void printMass2(int*mass, int*str,int col)
{
	printf("----------------------\n");
	int i, j;
	for (i = 0;i < *str;i++)
	{
		for (j = 0;j < col;j++)
		{
			printf("%d\t", *(mass+i*col+j));
		}
		printf("\n");
	}
}
void chet_nechet(int *mass, int *col, int*str)
{
	int chet = 0;
	int nechet = 0;
	for (i=0;i<*str;i++)
	{
		for (j = 0;j < *col;j++)
		{
			if (*(mass + i**col + j) % 2 == 0)
				chet++;
			else
				nechet++;
		}
	}
	printf("четных чисел %d, не четных %d", chet, nechet);
}
