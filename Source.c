#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int size, repeat;
    char symbol;

    do
    {
        printf("\nВведите символ для рисования: ");
        scanf(" %c", &symbol);

        printf("Введите размер ромба (например, 4): ");
        scanf("%d", &size);

        if (size <= 0)
        {
            printf("Ошибка: размер должен быть больше 0!\n");
        }
        else
        {
            printf("\nЗакрашенный ромб:\n\n");

            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    printf(" ");
                }

                for (int j = 0; j < 2 * i + 1; j++)
                {
                    printf("%c", symbol);
                }
                printf("\n");
            }

            for (int i = size - 2; i >= 0; i--)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    printf(" ");
                }

                for (int j = 0; j < 2 * i + 1; j++)
                {
                    printf("%c", symbol);
                }
                printf("\n");
            }
        }

        printf("\nПродолжить? (Да - введите любое число, Нет - введите 0): ");
        scanf("%d", &repeat);

    } while (repeat != 0);

    return 0;
}