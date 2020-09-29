#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Protótipo
void Cubo1(float L, float *Area, float *Volume);
float Cubo2(float L, float *Volume);
//float Cubo3(float L, float *Area);

int main()
{
    float L, Area ,Volume;
    int ContadorCubos =1;
    while(ContadorCubos<=100)
    {
        printf("Valor do Lado (L>0): ");
        scanf("%f", &L);
        if (L <=0)
            printf("ERRO! Escolha Novamente. \n");
        else
        {
            //Cubo1(L,&Area, &Volume);
            Area = Cubo2(L, &Volume);
            //Volume = Cubo3(L, &Area);
            printf("Area do Cubo %i = %.2f\n", ContadorCubos, Area);
            printf("Volume do Cubo %i = %.2f\n", ContadorCubos, Volume);
            ContadorCubos++;
        }
    }
    return 0;
}
void Cubo1(float L, float *Area, float *Volume)
{
    *Area=6 *pow (L,2);
    *Volume = pow (L, 3);
}
float Cubo2(float L,float *Volume)
{
    float Area;
    Area= 6 * pow (L, 2);
    *Volume= pow(L,3);
    return Area;
}
/*float Cubo3(float L,float *Area)
{
void Cubo4(float L, float *Area, float *Volume)
{
    *Area=6 *pow (L,2);
    *Volume = pow (L, 3);
}
    float Area;
    Area= 6 * pow (L, 2);
    *Volume= pow(L,3);
    return Area;
}
    float Area;
    Area= 6 * pow (L, 2);
    *Volume= pow(L,3);
    return Area;
}*/
