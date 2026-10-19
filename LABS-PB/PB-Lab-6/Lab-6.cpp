#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <windows.h>
#include <math.h>




int main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	/*                   ЗАВДАННЯ 1                     */

	printf("\tЗАВДАННЯ 1\n\n");

	double x;
	int k;
	double result;

	printf("Введіть x i k: ");
	scanf("%lf %d", &x, &k);

	result = pow(x, 0.5 * k) + log(x + (k-3.25)/(((4.0/7.0)*x)-sqrt(x)) );
	printf("Результат: %lf\n\n", result);

	Sleep(1500);

	/*                   ЗАВДАННЯ 2                     */

	printf("\tЗАВДАННЯ 2\n\n");

	double y = 1187E-2;
	int c = '3', h = 11, m = (int)y;

	result = y > h / 3 ? c + h % 3 : c - h / 3;
	printf("Результат: %lf\n", result);

	result = ~m & 0xE03B7 | h ^ 013;
	printf("Результат: %lf\n\n", result);

	Sleep(1500);

	/*                   ЗАВДАННЯ 3                     */

	printf("\tЗАВДАННЯ 3\n\n");

	double R;

	printf("Введіть координати точки x, y в другому квадраті і Радіус кола: ");
	scanf("%lf %lf %lf", &x, &y, &R);

	(x <= 0 && y >= 0 && (pow(x, 2) + pow(y, 2) <= pow(R, 2))) ? printf("Точка належить") : printf("Точка не належить");
	
	Sleep(1500);
	return 0;
}
