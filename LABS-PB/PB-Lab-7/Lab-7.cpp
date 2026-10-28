#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    system("chcp 65001 > nul");

    
    int N = 8191;
    short sh = N;
    
    long long big = (long long)N * 1000000000LL;
    double Z = 0.1;
    long double ld = Z;
    char STR[] = "Embedded systems";
    int res; 

    /*------------ 1 ------------*/
    printf("\tTask 1\n\n");

    printf("%%d -> [%d]\n", N);
    printf("%%+d -> [%+d]\n", N);
    printf("%% d -> [% d]\n", N);
    printf("%%06d -> [%06d]\n", N);
    printf("%%-8d -> [%-8d]\n", N);
    printf("%%8d -> [%8d]\n", N);
    printf("%%06.4d -> [%06.4d]\n\n", N);

    printf("%%hd -> [%hd]\n", sh);
    printf("%%lld -> [%lld]\n\n", big); 

    /*------------ 2 ------------*/
    printf("\tTask 2\n\n");

    printf("%%u -> [%u]\n", N);
    printf("%%o -> [%o]\n", N);
    printf("%%x -> [%x]\n", N);
    printf("%%X -> [%X]\n", N);
    printf("%%#o -> [%#o]\n", N);
    printf("%%#x -> [%#x]\n", N);
    printf("%%#X -> [%#X]\n", N);
    printf("%%08x -> [%08x]\n", N);
    printf("%%#10.6X -> [%#10.6X]\n\n", N);

    printf("%%d -> [%d]\n", -N);
    printf("%%u -> [%u]\n", -N);
    printf("%%o -> [%o]\n", -N);
    printf("%%x -> [%x]\n\n", -N);

    /*------------ 3 ------------*/
    printf("\tTask 3\n\n");

    printf("%%f -> [%f]\n", Z);
    printf("%%.2f -> [%.2f]\n", Z);
    printf("%%10.3f -> [%10.3f]\n", Z);
    printf("%%-10.1f -> [%-10.1f]\n", Z);
    printf("%%+.3f -> [%+.3f]\n", Z);
    printf("%%e -> [%e]\n", Z);
    printf("%%E -> [%E]\n", Z);
    printf("%%g -> [%g]\n", Z);
    printf("%%G -> [%G]\n", Z);
    printf("%%#.0f -> [%#.0f]\n", Z); 
    printf("%%010.2f -> [%010.2f]\n\n", Z);

    printf("%%Lf -> [%Lf]\n", ld);
    printf("%%.3Le -> [%.3Le]\n\n", ld);

    /*------------ 4 ------------*/
    printf("\tTask 4\n\n");

    printf("%%c -> [%c]\n", STR[0]);
    printf("%%5c -> [%5c]\n", STR[0]);
    printf("%%-5c -> [%-5c]\n", STR[0]);
    printf("%%d -> [%d]\n\n", STR[0]);

    printf("%%s -> [%s]\n", STR);
    printf("%%25s -> [%25s]\n", STR);
    printf("%%-25s -> [%-25s]\n", STR);
    printf("%%.5s -> [%.5s]\n", STR);
    printf("%%25.5s -> [%25.5s]\n\n", STR);

    int print_result = printf("Знижка 5%%\n");
    printf("printf() returned %d\n\n", print_result);

    /*------------ 5 ------------*/
    printf("\tTask 5\n\n");

    // 5a
    int day = -1, month = -1, year = -1;
    do {
        printf("a) Введіть дату в форматі DDMMYYYY: ");
        res = scanf("%2d%2d%4d", &day, &month, &year);

        if (res != 3) {
            printf("Помилка! Прочитано значення: %d (очікувалося 3). Спробуйте знову.\n", res);
            while (getchar() != '\n'); 
        }
    } while (res != 3);
    while (getchar() != '\n'); 
    printf("Результат Дати: %02d.%02d.%04d\n\n", day, month, year);

    // 5b
    int x = -1, y = -1;
    printf("b) Введіть координати в форматі (x,y): ");
    res = scanf(" (%d,%d)", &x, &y);
    if (res != 2) {
        printf("Помилка! Прочитано значення: %d (очікувалося 2).\n", res);
    }
    else {
        printf("Результат Точки: Точка(%d, %d)\n", x, y);
    }
    while (getchar() != '\n');
    printf("\n");

    // 5c
    int num1 = -1, num2 = -1, num3 = -1;
    printf("c) Введіть значення '0100 0x100 100': ");
    res = scanf("%i%i%i", &num1, &num2, &num3);
    if (res != 3) {
        printf("Помилка! Прочитано значення: %d (очікувалося 3).\n", res);
    }
    else {
        printf("Результат %%d: %d, %d, %d\n", num1, num2, num3);
    }
    while (getchar() != '\n');
    printf("\n");

    // 5d
    int v1 = -1, v2 = -1;
    unsigned int v3 = -1;
    printf("d) Введіть рядок чисел 112233445566778899: ");
    res = scanf("%4d%*2d%5d%u", &v1, &v2, &v3);
    if (res != 3) {
        printf("Помилка! Прочитано значення: %d (очікувалося 3).\n", res);
    }
    else {
        printf("Результат: v1=%d, v2=%d, v3=%u\n", v1, v2, v3);
    }
    while (getchar() != '\n');
    printf("\n");

    /*------------ 6 ------------*/
    printf("\tTask 6\n\n");

    unsigned int code1 = 0, code2 = 0, code3 = 0;
    char name1[50] = "", name2[50] = "", name3[50] = "";
    int qty1 = 0, qty2 = 0, qty3 = 0;
    double price1 = 0.0, price2 = 0.0, price3 = 0.0;

    printf("Введіть товар 1 (Код Назва Кількість Ціна, Наприклад: 0x1a Keyboard 2 25.50):\n");
    res = scanf("%x %49[^\n] %d %lf", &code1, name1, &qty1, &price1);
    if (res != 4) printf("Помилка читання товару 1! Прочитано: %d\n", res);
    while (getchar() != '\n');

    printf("Введіть товар 2 (Код Назва Кількість Ціна):\n");
    res = scanf("%x %49[^\n] %d %lf", &code2, name2, &qty2, &price2);
    if (res != 4) printf("Помилка читання товару 2! Прочитано: %d\n", res);
    while (getchar() != '\n');

    printf("Введіть товар 3 (Код Назва Кількість Ціна):\n");
    res = scanf("%x %49[^\n] %d %lf", &code3, name3, &qty3, &price3);
    if (res != 4) printf("Помилка читання товару 3! Прочитано: %d\n", res);
    while (getchar() != '\n');

    double sum1 = qty1 * price1;
    double sum2 = qty2 * price2;
    double sum3 = qty3 * price3;
    double total_sum = sum1 + sum2 + sum3;
    double vat = total_sum * 0.20;

    
    printf("\n---------------------------------------------------------------\n");
    printf("| Код   | Назва                |  Кількість  |   Ціна   |   Сума    |\n");
    printf("---------------------------------------------------------------\n");
    printf("| %#06x | %-20.20s | %5d | %9.2f | %10.2f |\n", code1, name1, qty1, price1, sum1);
    printf("| %#06x | %-20.20s | %5d | %9.2f | %10.2f |\n", code2, name2, qty2, price2, sum2);
    printf("| %#06x | %-20.20s | %5d | %9.2f | %10.2f |\n", code3, name3, qty3, price3, sum3);
    printf("---------------------------------------------------------------\n");
    printf("Загальна сума: %10.2f\n", total_sum);
    printf("VAT (20%%): %10.2f\n", vat);

    return 0;
}