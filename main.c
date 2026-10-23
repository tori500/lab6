#include <stdio.h>
#include <locale.h>
#include <math.h>

void task1();
void task2();
void task3();

int main()
{
    setlocale(LC_ALL, "RUS");

    task1();
    task2();
    task3();

    return 0;
}

void task1()
{
    int year;

    printf("Введите год: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("год %d високосный\n", year);
    else
        printf("год %d не високосный\n", year);
}

void task2()
{
    double x;
    double F;

    printf("Введите x:\n");
    scanf("%lf", &x);

    // Контрольный пример: x = 3, F(3) = 2.884615
    F = (x > 2) ? (pow(x, 4) + 4 * x + 5) / (pow(x, 2) + 4 * x + 5) : 0;

    printf("F(%.2f) = %.6f\n", x, F);
}

void task3()
{
    int num;
    int a, b, c, d;

    printf("Введите четырехзначное число:\n");
    scanf("%d", &num);

    a = num / 1000;
    b = (num / 100) % 10;
    c = (num / 10) % 10;
    d = num % 10;

    if (a == d && b == c)
        printf("Число %d является перевертышем\n", num);
    else
        printf("Число %d не является перевертышем\n", num);
}