#include <stdio.h>
#include <stdlib.h>
int main()
{

    printf("Given matrix:\n");
    int matrix[10][20] = {16, 65, 87, 38, 30, 46, 37, 91, 22, 6, 56, 49, 36, 30, 43, 39, 1, 77, 95, 51,
                          85, 81, 89, 84, 84, 32, 35, 41, 95, 62, 91, 18, 39, 65, 77, 79, 79, 85, 59, 6,
                          59, 90, 2, 15, 19, 84, 61, 47, 65, 87, 81, 99, 30, 5, 94, 97, 65, 12, 68, 44,
                          53, 31, 95, 48, 23, 25, 61, 19, 97, 76, 58, 60, 80, 70, 67, 41, 51, 20, 40, 23,
                          31, 94, 86, 30, 10, 97, 34, 89, 64, 24, 18, 37, 59, 45, 39, 56, 31, 67, 76, 24,
                          57, 20, 53, 16, 50, 24, 87, 87, 11, 44, 17, 65, 84, 4, 82, 99, 19, 65, 19, 100,
                          21, 15, 84, 37, 77, 0, 42, 67, 97, 21, 23, 77, 64, 7, 63, 51, 72, 88, 20, 29,
                          86, 27, 30, 3, 99, 84, 97, 24, 79, 17, 31, 35, 12, 65, 19, 26, 4, 10, 97, 66,
                          100, 54, 93, 50, 24, 97, 86, 81, 61, 40, 95, 18, 56, 89, 60, 0, 72, 92, 39, 50,
                          73, 48, 46, 20, 100, 30, 100, 88, 96, 48, 91, 24, 78, 15, 0, 21, 74, 94, 39, 99};

    for (int i = 0; i != 10; ++i)
    {
        for (int j = 0; j != 20; ++j)
        {
            printf("%d ", matrix[i][j]); // Выводим матрицу
        }
        printf("\n");
    }

    int sumline[10];
    int suml = 0; // Все перменные для линий
    int line;
    int minl = INT_MAX;

    for (int i = 0; i != 10; ++i)
    {
        for (int j = 0; j != 20; ++j)
        {
            suml += matrix[i][j]; // Нахождение сумм линий
        }
        sumline[i] = suml;
        suml = 0;
    }

    /*printf("\n\n");

    for (int i = 0; i != 10; ++i)
    {
        printf("%d ", sumline[i]); // Вывод сумм линий
    }*/

    for (int i = 0; i != 10; ++i)
    {
        if (sumline[i] < minl)
        {
            minl = sumline[i]; // Нахождение минимальной суммы и ее номер линии
            line = i;
        }
    }

    // printf("\n\n%d %d\n\n", line + 1, sumline[line]);  //Вывод для наглядности номера линии и ее суммы

    int sumcol[20];
    int sumc = 0; // Все перменные для Колонн
    int col;
    int minc = INT_MAX;

    for (int i = 0; i != 20; ++i)
    {
        for (int j = 0; j != 10; ++j)
        {
            sumc += matrix[j][i]; // Нахождение сумм Колонн
        }
        sumcol[i] = sumc;
        sumc = 0;
    }

    /*for (int i = 0; i != 20; ++i)
    {
        printf("%d ", sumcol[i]);         //Вывод сумм колонн
    }*/

    for (int i = 0; i != 10; ++i)
    {
        if (sumcol[i] < minc)
        {
            minc = sumcol[i]; // Нахождение минимальной суммы и ее номер колонны
            col = i;
        }
    }

    /*printf("\n\n%d %d\n\n", col + 1, sumcol[col]); //Вывод сумм колонн и ее номер
    printf("\n\n");*/

    printf("\n\nThe biggest undermatrix of matrix:\n\n");
    for (int i = 0; i != 10; ++i)
    {
        for (int j = 0; j != 20; ++j)
        {
            if (((i < col) && (j < line)) || ((i < col) && (j > line)) || ((i > col) && (j < line)) || ((i > col) && (j > line)))
            {
                printf("%d ", matrix[i][j]);
            }
        }
        if ((i < col) || ((i > col)))
        {
            printf("\n");
        }
    }

    printf("\nThere was deleted colomn num = %d;\nAnd line number: %d;\n\n", line + 1, col + 1);

    return 0;
}