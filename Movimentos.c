#include <stdio.h>

int main () {
    // é preciso inicializar variáveis de nomes diferentes para cada peça de xadrez.
    int t = 0;
    int b = 0;
    int movimentoCompleto = 1;
    // t = posição da torre | b = posição do bispo | r = posição da rainha. | movimentoCompleto = flag de controle do movimento em L do cavalo 

    /*
    SIMULANDO A MOVIMENTAÇÃO DE TRÊS PEÇAS DE XADREZ: TORRE, BISPO E RAINHA:
    Serão utilizadas as estruturas de repetição DO, DO-WHILE e FOR.
    - Torre: Movimento de cinco casas para a direita.
    - Bispo: Movimento de cinco casas na diagonal para cima e à direita. 
    Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
    - Rainha: Movimento de oito casas para a esquerda.
    - Cavalo: Movimento de duas casa para cima e uma casa para a direita (movimento em L)
    */

    printf("O movimento da Torre foi:\n");
    while (t < 5)
    {
        printf("Direita.\n");
        t++;
    }

    printf("O movimento do Bispo foi:\n");
    do {
        printf("Cima, direita.\n");
        b++;
    } while (b < 5);

    printf("O movimento da Rainha foi:\n");
    for  (int r = 0; r < 8; r++)
    {
        printf("Esquerda.\n");
    } 

    printf("O movimento do Cavalo foi:\n");
    while(movimentoCompleto--)
    {
        for  (int c = 0; c < 2; c++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    
    /*
    RESULTADOS NO TERMINAL:
        - TORRE:
        Direita.
        Direita.
        Direita.
        Direita.
        Direita.

        - BISPO:
        Cima, direita.
        Cima, direita.
        Cima, direita.
        Cima, direita.
        Cima, direita.

        - RAINHA:
        Esquerda
        Esquerda
        Esquerda
        Esquerda
        Esquerda
        Esquerda
        Esquerda
        Esquerda

        - CAVALO:
        Cima
        Cima
        Direita
    */

    return 0;
}