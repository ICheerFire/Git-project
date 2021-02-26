//Валидатор кредитной карты
//Берет номер кредитной карты от производителя(Visa, MasterCard, American Express, Discover) и проверяет на правильность номер(разберитесь, как кредитные карты используют контрольную сумму).
#include <iostream>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int number = 0, sum = 0, card, z=0 ;
    printf("Введите номер карты: ");
    scanf("%d", &card);
    for (z; z < 17; z++); //Перебираем все позиции чисел
    {
        card = card / 10;
        if (z % 2 == 0) // Если позиция числа четная, то выполняем рассчет по алгоритму луны
        {
            number *= 2;

            if (number > 9)
            {
                number -= 9;
            }
        }

        sum += number;
    }

    if (sum % 10 == 0)
    {
        printf("Введенная карта верна.\n");
    }
    else
    {
        printf("Введенная карта неверна.\n");
    }
    return 0;
}
