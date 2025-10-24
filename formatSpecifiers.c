#include <stdio.h>

int main(){
    //Format specifier - %-szerokość-dokładność -> określa jak dane mają być wyświetlane

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    //minimalna liczba znaków 
    //Dodawanie znaków po lewej
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);

    //Dodawanie znaków po prawej
    printf("%-3d\n", num1);
    printf("%-3d\n", num2);
    printf("%-3d\n", num3);

    //Dodawanie zew po lewej
    printf("%03d\n", num1);
    printf("%03d\n", num2);
    printf("%03d\n", num3);

    //Wyświetlanie znaku(+/-)
    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);

    float f1 = 37.74;
    float f2 = 92.15;
    float f3 = -6.83;

    //Dokładność (razem z zaokrąglaniem)
    printf("%.2f\n", f1);
    printf("%.1f\n", f2);
    printf("%.2f\n", f3);

    //Znak, minimalnie 8 znaków (wypełnienie zerami), 2 cyfry po kropce
    printf("%+08.2f\n", f1);
    printf("%+08.2f\n", f2);
    printf("%+08.2f\n", f3);


    
    return 0;
}