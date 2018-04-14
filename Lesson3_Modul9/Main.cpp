#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include"Header.h"
#include<time.h>

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, quit;
	do
	{
		printf("номер задания: ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			/*1.Дано целое число в двоичной системе счисления, т.е. последовательность цифр  0 и 1. Составить программу перевода этого числа в восьмеричную систему счисления.*/
			int bin;
			printf("введите двоичное число: ");
			scanf("%d", &bin);
			printf("%o\n", bin);
		}
		break;
		case 2:
		{
			/*2.Ввести два массива действительных чисел, состоящих из 7 и  9 элементов. Сформировать третий массив из упорядоченных по убыванию значений обоих массивов.*/
			int row1 = 7;
			int row2 = 9;
			int row3 = 16;
			int *mass = NULL;
			int *mass3 = NULL;
			mass = (int*)calloc(row1, sizeof(int));
			int *mass2 = NULL;
			mass2 = (int*)calloc(row2, sizeof(int));
			
			if (mass != NULL)
			{
				ZappMass(mass, &row1);
				PrintMass(mass, &row1);
				if (mass2 != NULL)
				{
					ZappMass(mass2, &row2);
					PrintMass(mass2, &row2);
					mass3 = (int*)calloc(16, sizeof(int));
					if (mass3 != NULL)
					{
						copyInMass(mass, mass2, mass3, row1, row2);
						sortirovka(mass3, &row3);
						PrintMass(mass3, &row3);
					}
				}
			}
			free(mass);
			free(mass2);
			free(mass3);
		}
		break;
		case 3:
		{
			/*3.Ввести массив, в котором только два одинаковых элемента. Определить их местоположение.*/
			int *mass = NULL;
			int row = 10;
			mass = (int*)calloc(row, sizeof(int));
			if (mass != NULL)
			{
				int i;

				for (i = 0;i < 10;i++)
				{
                scanf("%d",(mass+i));
				}
				PrintMass(mass, &row);
				dubleElement(mass, &row);
			}
			else
				printf("no memmory");
		}
		break;
		case 10:
		{
			/*10.Дан массив из n × m элементов. Найти индексы первого наименьшего  элемента массива*/
			int *mass = NULL;
			int row = 12;
			mass = (int*)calloc(row, sizeof(int));
			ZappMass(mass, &row);
			PrintMass(mass, &row);
			minElement_First(mass, &row);
		}
		break;
		case 9:
		{
			/*9.Дан двухмерный массив n ×m элементов. Определить, сколько раз встречается число 7 среди элементов массива.
			*/
			int *mass = NULL;
			int row = 12;
			mass = (int*)calloc(row, sizeof(int));
			ZappMass(mass, &row);
			PrintMass(mass, &row);
			number_7(mass, &row);
		}
		break;
		case 8:
		{
			/*8.Дан двухмерный массив n×m элементов, найти количество четных и нечетных чисел в массиве.*/
			int *mass = NULL;
			int str=4;
			int col = 3;
			int row = str*col;
			mass = (int*)calloc(str*col, sizeof(int));
			ZappMass(mass, &row);
			printMass2(mass, &str, col);
			chet_nechet(mass, &col, &str);
		}
		break;
		case 7:
		{
			/*7.Дан двухмерный массив 5×6. Определить среднее арифметическое каждого столбца,  определить максимум и минимум каждой строки.*/
			int *mass = NULL;
			int str = 5;
			int col = 6;
			int row = str*col;
			mass = (int*)calloc(str*col, sizeof(int));
			ZappMass(mass, &row);
			printMass2(mass, &str, col);

		}
		break;
		default:
			break;
		}
		printf("продолжить 1-да : ");
		scanf("%d",&quit);

	} while (quit == 1);
}