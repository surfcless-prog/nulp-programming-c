#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("chcp 65001 > nul");

    /* --------------- 1 --------------- */
    printf("ЗАВДАННЯ 1\n");
    long m = 0x3af;
    unsigned n = m >> 4;
    printf("\n%ld %#lo %#x\n\n", m / 3, n % 2 ? ~m : m & 0xffaf, n | (unsigned)m);

    /* --------------- 2 --------------- */
    printf("ЗАВДАННЯ 2\n");
    unsigned q = 0X102D;         
    long double gg = -74.983;

    printf("%%d   = %d\n", q);
    printf("%%i   = %i\n", q);
    printf("%%x   = %x\n", q);
    printf("%%X   = %X\n", q);
    printf("%%o   = %#o\n", q);
    printf("%%c   = %c\n", (char)q); 
    printf("%%+d  = %+d\n", q);
    printf("%%-7d = |%-7d|\n", q);
    printf("%%07d = %07d\n\n", q);

    printf("%%Lf     = %Lf\n", gg);
    printf("%%LE     = %LE\n", gg);
    printf("%%Le     = %Le\n", gg);
    printf("%%LG     = %LG\n", gg);
    printf("%%Lg     = %Lg\n", gg);
    printf("%%+.3Lf  = %+.3Lf\n", gg);
    printf("%%.6Lf   = %.6Lf\n", gg);
    printf("%%-7.4Lf = |%-7.4Lf|\n", gg);
    printf("%%09Lf   = %09Lf\n\n", gg);

    /* --------------- 3 --------------- */
    printf("ЗАВДАННЯ 3\n");
    int v = -5, d = -7 * v;
    printf("2.1) Результат = %d\n", d % 10 + d / 2 - (v << 2));

    unsigned short m_hex = 0xade5;
    printf("2.2) Умова: %d < %d\n", m_hex & 255, m_hex >> 8);
    printf("     Результат: %s\n\n", (m_hex & 255) < (m_hex >> 8) ? "лівий" : "правий");

    /* --------------- 4 --------------- */
    printf("ЗАВДАННЯ 4\n");
    double fst, scnd;
    printf("Введіть два дійсних числа: ");
    if (scanf("%lf %lf", &fst, &scnd) == 2) {
        printf("\nЗ двох чисел: %.4f та %.4f\n", fst, scnd);
        printf("Менше з них: %.4f\n", fst < scnd ? fst : scnd);
        printf("Найстарша цифра дробової частини меншого: %d\n",
            fst < scnd ? (int)(fmod(fabs(fst), 1.0) * 10) : (int)(fmod(fabs(scnd), 1.0) * 10));
    }

    return 0;
}