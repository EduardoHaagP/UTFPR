#include <stdio.h>
#include <stdlib.h>

float numero1;
float numero2;
int operacao;
float resultado;

int main()
{
    printf("Escolha uma opercao\ndigite 1 para soma\n2 para subtração\n3 para multiplicação\n4 para divisão\n");
    printf("digite seguindo esse padrão operação/numero 1/numero 2");
    scanf("%i/%f/%f", &operacao, &numero1, &numero2);
    switch (operacao)
    {
    case 1:
        printf("Voce escolheu soma\n");
        printf("digite o primeiro numero para o calculo\n");
        scanf("%f", &numero1);
        printf("digite o segundo numero para o calculo\n");
        scanf("%f", &numero2);
        resultado = numero1 + numero2;
        printf("O resutado é: %f\n", resultado);
        break;
    case 2:
        printf("Voce escolheu subtração\n");
        printf("digite o primeiro numero para o calculo\n");
        scanf("%f", &numero1);
        printf("digite o segundo numero para o calculo\n");
        scanf("%f", &numero2);
        resultado = numero1 - numero2;
        printf("O resutado é: %f\n", resultado);
        break;
    case 3:
        printf("Voce escolheu multiplicação\n");
        printf("digite o primeiro numero para o calculo\n");
        scanf("%f", &numero1);
        printf("digite o segundo numero para o calculo\n");
        scanf("%f", &numero2);
        resultado = numero1 * numero2;
        printf("O resutado é: %.2f\n", resultado);
        break;
    case 4:
        printf("Voce escolheu divisão\n");
        printf("digite o primeiro numero para o calculo\n");
        scanf("%f", &numero1);
        printf("digite o segundo numero para o calculo (este deve ser diferente de 0)\n");
        scanf("%f", &numero2);
        if (numero2 == 0)
        {
            printf("Não é possivel fazer esse calculo\n");
        }
        else
        {
            resultado = numero1 / numero2;
            printf("O resutado é: %.2f\n", resultado);
        }
        break;
    default:
        printf("opção diferente de 1, 2, 3 e 4\n");
        break;
    }
    return 0;
}