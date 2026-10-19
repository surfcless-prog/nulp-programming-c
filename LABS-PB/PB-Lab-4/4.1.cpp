#include <stdio.h>
#include <stdlib.h>
#define TEXT "Ви виконали першу програму"

void main(void)
{
    char name[15];
    system("chcp 65001");
    printf("\n\n Як вас звати? ");
    gets_s(name);
    printf("\n Вітаємо, %s! %s", name, TEXT);
    printf("\n\n\t Enter для завершения -> ");
    getchar();
}