#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RMIN 1 // найменше число
#define RMAX 100 // найбільше число
#define K 6 // кількість спроб
int main(void)
{
	int numb, answ, k;
	system("chcp 65001"); // підключення кирилиці
	srand(time(NULL)); // запуск генератора випадкових чисел
	numb = RMIN + rand() % (RMAX - RMIN + 1); // випадкове число
	printf("\n **** Задумано число з проміжку %d..%d – вгадайте "
		"його за %d спроб ****\n\n", RMIN, RMAX, K);
	for (k = 1; k <= K; k++) // цикл вгадування з K спроб
	{
		printf("Спроба %d - ", k);
		scanf_s("%d", &answ); // або scanf_s("%d", &answ);
		if (answ == numb) // число вгадано
		{
			printf("\n\t *** %d - Ви вгадали!!! ***", numb);
			getchar(); getchar(); // затримка
			return 0; // завершення програми
		}
		if (answ > numb) // виведення підказки
			printf("\t\t - завелике\n");
		else
			printf("\t\t - замале\n");
	}
	printf("\n\t*** Ви не вгадали :( Це число %d ***", numb);
	getchar(); getchar(); // затримка
	return 0; // завершення програми
}