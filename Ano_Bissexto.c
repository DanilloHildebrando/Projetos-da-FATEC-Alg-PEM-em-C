/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ano, resto4, resto100, resto400, res;
    
    printf("Digite o ano para verificarmos se é bissexto ou não: \n");
    scanf("%i", &ano);
    
    if(ano > 0){
        
        resto4 = ano%4;
        resto100 = ano%100;
        resto400 =ano%400;
        
        if (resto4 == 0 && resto100 != 0 || resto400 == 0){
            printf("O ano é bissexto");
        
        } else {
            res = ano + (4 - resto4);
            printf("O próximo ano bissexto será em: %i", res);
           
        }
    }

    return 0;
}
