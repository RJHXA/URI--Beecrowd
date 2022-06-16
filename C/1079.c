/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1079;
Language: C99;
*/

#include <stdio.h>

int main() {

    int N;

    scanf("%i", &N);

    double x[N], media;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%lf", &x[j]);
        }

        media = ((x[0] * 2) + (x[1] * 3) + (x[2] * 5)) / 10;
        printf("%.1f\n", media);
    }

    return 0;
}