/*** Пошук числа з найбільшою сумою цифр ***/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAXN 10 // максимальна кількість чисел


int SumaCyfr(long, int*); // оголошення функцій
void LiniaRamky1(int);
void LiniaRamky2(int, int);


void main(void){
	long chysl, chmax; // зміннi програми
	int sumc, maxsum = 0;
	int kc, kmax = 1;
	int n = 0, dr;
	system("chcp 1251");
	printf("\n\n Вводьте числа (0 – кінець):\n");

	do { // цикл введення і перевірки чисел
		scanf("%ld", &chysl); // зчитування числа
		if (chysl == 0) break; // 0 перериває цикл
		sumc = SumaCyfr(chysl, &kc); /* визначення суми і
		кількості цифр для введеного числа */
		if (sumc > maxsum) { // якщо сума цифр найбільша
			maxsum = sumc; // фіксуємо параметри числа
			kmax = kc;
			chmax = chysl;
		}
	} while (++n < MAXN); // перевірка кількості введених чисел
		dr = (50 + kmax) / 2; // довжина рамки
	LiniaRamky1(dr); // виведення верхньої частини рамки
	printf("Найбільшу суму цифр - %2d має число %ld", maxsum, chmax);
	LiniaRamky2(dr, kmax); // виведення нижньої частини рамки
	getchar(); getchar();
} // кінець функції main()





/* Функція, що визначає суму і кількість цифр заданого числа */
int SumaCyfr(long c, int* pkc)
{
	int sum = 0, kcf = 0;
	while (c > 0) {
		sum += c % 10;
		c /= 10;
		kcf++;
	}
	*pkc = kcf;
	return sum;
}
/* Функція виведення верхньої частини рамки */
void LiniaRamky1(int dr)
{
	int k;
	printf("\n\n\t");
	for (k = 0; k < dr; k++) // цикл виведення верхньої лінії рамки
		printf("*=");
	printf("*\n\t*\t");
}
/* Функція виведення нижньої частини рамки */
void LiniaRamky2(int dr, int kc)
{
	int k, kprob;
	kprob = (kc & 1 ? 6 : 7); // кількість кінцевих пробілів
	for (k = 0; k < kprob; k++) // виведення пробілів після числа
		printf(" ");
	printf("*\n\t");
	for (k = 0; k < dr; k++) // виведення нижньої лінії рамки
		printf("*=");
}
