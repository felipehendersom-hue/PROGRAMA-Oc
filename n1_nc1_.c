#include <stdio.h>

int main() {
    
    int força,defesa;

    printf("Digite a força : ");
    scanf("%d", &força);
    printf("Digite a defesa: ");
    scanf("%d", &defesa);
    printf("A força é %d e a defesa é %d.\n", força, defesa);
if (força > defesa) {
        printf("A força é maior que a defesa.\n");
    } else if (força < defesa) {
        printf("A defesa é maior que a força.\n");
    } else {
        printf("A força e a defesa são iguais.\n");
    }
    return 0;
}