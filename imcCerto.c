/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float vet[5][3], imc, imc25 = 25, pesoPerder, pesoimc25, pesoGanhar;
    int x;
    
    for(x=0;x<5;x++){
    printf("\nDigite o peso e a altura da pessoa %i: ", (x + 1));
    scanf("%f %f", &vet[x][0], &vet[x][1]);
    
  
    vet[x][2] = vet[x][0] / (vet[x][1] * vet[x][1]);
    imc = vet[x][2];
    
    
        if (imc == 25){
            printf("Parabéns seu IMC está perfeito\n");
                } else {
                    if (imc != 25 && imc > 25){
                        pesoimc25 = (imc25 * (vet[x][1] * vet[x][1]));
                        pesoPerder = vet[x][0]- pesoimc25;
                        printf("Você deve perder %.2f kilos para alcançar o IMC 25\n", pesoPerder);
                                } else {
                                    if (imc != 25 && imc < 25){
                                        pesoimc25 = (imc25 * (vet[x][1] * vet[x][1]));
                                        pesoGanhar = vet[x][0] + pesoimc25;
                                        printf("Você deve ganhar %.2f kilos para alcançar o IMC 25\n", pesoGanhar);
                                    }
                                }
                     }
    
                } 
    }
    
    

