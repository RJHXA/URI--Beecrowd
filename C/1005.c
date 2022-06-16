/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1005;
Language: C;
*/

int main()
{
    double a, b, conta;

    scanf("%lf",&a);
    scanf("%lf",&b);
    
    conta = (a*3.5 + b*7.5)/11;
    printf("MEDIA = %.5f\n", conta);

    return 0;
}