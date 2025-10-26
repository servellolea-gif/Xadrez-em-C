#include <stdio.h>

/*O objetivo deste código é usar a recursividade para sinplificar a movimentação das peças Torre, Bispo e Rainha. O movimento do Bispo ainda deverá contar com loops aninhados. 
Já para a movimentação do Cavalo, será utilizado o Loop complexo for.*/
void moverTorre(int casasT) {
    if(casasT > 0) {
        printf("Direita\n");
        moverTorre(casasT - 1);
    }
}

void moverBispo(int casasB) {
    for(int v = 1; v <= 5; v++){ //Estrutura do loop externo - movimento vertical para cima, onde v=vertical
        printf("Cima e ");
        for(int h = 1; h <= 1; h++){ //Estrutura do loop interno - movimento  horizontal para direita, onde h=horizontal
        printf("Direita\n");
        }
    }
}
void moverRainha(int casasR) {
    if(casasR > 0) {
        printf("Esquerda\n");
        moverRainha(casasR - 1);
    }
}
int main (){
    
    printf("A Torre se moveu para:\n"); //o printf precisa vir antes da função recursividade para que a mensagem dele apareça primeiro que a mensagem impressa da recursividade
    moverTorre(5);
    
    printf("\nO Bispo se moveu para:\n");
    moverBispo(1);
    
    printf("\nA Rainha se moveu para:\n");
    moverRainha(8);
    
    printf("\nO Cavalo se moveu para:\n");
    
    for (int c_passos = 0, c_movimento = 1; c_passos < c_movimento; c_passos++) { // Loop externo: Controla o número de movimentos em L (apenas 1 aqui)
        
        for (int c_direcao = 1; c_direcao <= 2; c_direcao++) { // Loop interno: Realiza os dois passos "Cima"
                printf("Cima\n");
            }            
        
        printf("Direita\n");
    }
    return 0;

}    
