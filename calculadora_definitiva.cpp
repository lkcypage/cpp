#include <stdio.h>
#include <string.h>

int main() {
    int n01, n02;
    char op[5];
    int resultado;

    printf("Setar primeiro numero: ");
    scanf("%d", &n01);

    printf("Setar segundo numero: ");
    scanf("%d", &n02);

    printf("Setar operacao (soma/sub/mult/div): ");
    scanf("%4s", op);

    if (strcmp(op, "soma") == 0) {
        resultado = n01 + n02;
        printf("Resultado: %d\n", resultado);
    }
    else if (strcmp(op, "sub") == 0) {
        resultado = n01 - n02;
        printf("Resultado: %d\n", resultado);
    }
    else if (strcmp(op, "mult") == 0) {
        resultado = n01 * n02;
        printf("Resultado: %d\n", resultado);
    }
    else if (strcmp(op, "div") == 0) {
        if (n02 == 0) {
            printf("Erro: nao e possivel dividir por zero.\n");
        } else {
            resultado = n01 / n02;
            printf("Resultado: %d\n", resultado);
        }
    }
    else {
        printf("Operacao invalida.\n");
    }

    return 0;
}
