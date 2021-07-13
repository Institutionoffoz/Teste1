
#include<stdio.h>

#include<stdlib.h>

 

/**
05
*Criar um vetor com 10 elementos numericos inteiros digitados
06
*Calcular a soma destes elementos e exibir o vetor e a soma
07
*/
 

main(){  

  //declaração das variaveis


  int tam=10, A[tam], i, soma=0;

    

  //entrada dos valores digitados

  for(i=0; i<tam; i++){

    printf("Digite o %d. valor: ", i+1);

    scanf("\n%d", &A[i]);     

  }

    

  //calculo da soma

  for(i=0; i<tam; i++){

    soma=soma+A[i];

  }

       

  //saida de dados

  for(i=0; i<tam; i++){

    printf("\nA[%d] = %d", i+1, A[i]);

  }

    

  printf("\n\nSoma: %d\n\n", soma);

    

  system("pause");
}
