#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <windows.h>


/*---------------1--------------*/
int globalVariable;
const int globalConstant = 10;

int main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	
	int LocalVariable = 0;
	printf("\t ЗАВДАННЯ 1\n\n");
	printf("Глобальна змінна: %d\n", globalVariable);
	printf("Глобальна константа: %d\n\n", globalConstant);

	/*---------------2-------------*/
	
	printf("\t ЗАВДАННЯ 2\n\n");

	unsigned int A;
	int size = sizeof(A);

	
	printf("Розмір змінної A: %d байти\n", size);
	printf("Мінімальне значення A: %u\n", INT_MIN);
	printf("Максимальне значення A: %u\n", UINT_MAX);
	printf("Максимальне значення A з переповненням: %u\n\n", UINT_MAX + 1);

	/*---------------3-------------*/

	printf("\t ЗАВДАННЯ 3\n\n");
	double B;
	size = sizeof(B);

	printf("Розмір змінної B: %d байтів\n", size);
	printf("Кількість точних десяткових знаків B: %u\n", DBL_DIG);
	printf("Найменше значення епсилон B: %g\n", DBL_EPSILON);
	0.1 + 0.2 == 0.3 ? printf("Порівняння виконано успішно\n\n") : printf("Порівняння не виконано\n\n");

	/*---------------4-------------*/

	printf("\t ЗАВДАННЯ 4\n\n");

	int n_d = 8191;
	int n_o = 017777;
	int n_x = 0x1FFF;

	printf("Десяткове значення:\nДсяткове = %d\nВісімкове = %o\nШістнадцяткове = %x\n\n", n_d, n_d, n_d);
	printf("Десяткове = %d\nВісімкове = Помилка у коді, присутні цифри 8 та 9 які не можуть бути використані в вісімковому форматі.\nШістнадцяткове = %x\n\n",8191,0x8191);
	
	/*---------------5-------------*/
	
	printf("\t ЗАВДАННЯ 5\n\n");

	char Symbol = '%';
	char Symbol2 = '0';
	char Symbol3 = '\0';

	printf("Символ(S): %c\nКод в десятковому форматі: %d\nКод в вісімковому форматі: 0%o\nКод в шістнадцятковому форматі: 0x%x\nНступний символ(S + 1): %c\n\n", Symbol, Symbol, Symbol, Symbol, Symbol + 1);
	printf("Код символа \'0\' = %d\n", Symbol2);
	printf("Код символа \'\\0\' = %d\n\n", Symbol3);
	
	return 0;
}


