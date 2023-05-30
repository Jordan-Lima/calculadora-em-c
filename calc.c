#include <stdio.h>

int main() {
    int operador;
    float num0, num1, res;

    reinicia_calc:
    printf("[1] - SOMA\n[2] - SUBTRACAO\n[3] - MULTIPLICACAO\n[4] - DIVISAO\n[0] - CANCELAR\n\n");
    scanf("%d", &operador);

        switch (operador) {
        case 1:
            printf("Digite o primeiro e o segundo termo da operacao: \n");
            scanf("%f %f", &num0, &num1);
            res = num0 + num1;        
            printf("%.2f + %.2f = %.2f\n\n", num0, num1, res);
            break;
        case 2:
            printf("Digite o primeiro e o segundo termo da operacao: \n");
            scanf("%f %f", &num0, &num1);
            res = num0 - num1;
            printf("%.2f - %.2f = %.2f\n\n", num0, num1, res);
            break;
        case 3:
            printf("Digite o primeiro e o segundo termo da operacao: \n");
            scanf("%f %f", &num0, &num1);
            res = num0 * num1;
            printf("%.2f * %.2f = %.2f\n\n", num0, num1, res);
            break;
        case 4:
            printf("Digite o primeiro e o segundo termo da operacao: \n");
            scanf("%f %f", &num0, &num1);
            res = num0 / num1;
            printf("%.2f / %.2f = %.2f\n\n", num0, num1, res);
            break;
        case 0:
            goto end_game;
        default:
            printf("OPS! TECLA INCORRETA!\n\n");
            break;
        }
    goto reinicia_calc;

    end_game:
    printf("\nOBRIGADO POR JOGAR!");
    return 0;
}
