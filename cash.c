#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
    float dollars;
    int cents;
    do{
        dollars = get_flaot("Please input amount in dollars"\n);
        cents = round(dollars * 100);
    }while (cents <= 0);

    int calc_25 = (cents / 25);
    int calc_10 = (cents % 25) / 10;
    int calc_5 = ((cents % 25) % 10) /5;
    int calc_5 = (((cents % 25) % 10) % 5) /5;

    printf("%d/n", calc_25 + calc_1 + calc_5 + calc_1)