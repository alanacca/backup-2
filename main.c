#include <stdio.h>
#include <stdlib.h>
#include <funcoes.h>

/*faça um programa em c/c++ que realize as seguintes operações:

a)Leia uma matriz Anxm de um arquivo e armazene em um vetor

b)Leia uma matriz Bnxm de um arquivo e armazene em um vetor

c)Imprima na tela o resultados das seguintes operações

    1. AXB

    2. AXBt

    3. At

    4. Triangular Superior de A

    5. Linha K de A(ler k do teclado)

    6. Diagonal de A

    7. Coluna K de A(ler k do teclado)*/




int main()

{

    int i,j,k,l;

    int n,m,p,q;

    FILE *arqA;

    arqA = fopen("matrizA.txt","r");

    if(arqA == NULL){

        printf("arquivo A zerado\n");

    }else{

        printf("pegado com sucesso A\n");

    }

    if(arqA != NULL){
        fscanf(arqA,"%d %d",&n,&m);
    }

    FILE *arqB;

    arqB = fopen("matrizB.txt","r");

    if(arqB == NULL){

        printf("arquivo B zerado\n");

    }else{

        printf("pegado com sucesso B\n");

    }

    if(arqB != NULL){
        fscanf(arqB,"%d %d",&p,&q);
    }

    float *recMatrizA;

    float *recMatrizB;

    printf("\nmatriz A:\n");

    recMatrizA = LerArqMatriz(arqA,n,m);

    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++){
            printf("%f ",recMatrizA[i*m+j]);
        }
    }


     printf("\nmatriz B:\n");

    recMatrizB = LerArqMatriz(arqB,p,q);

    for(k=0;k<p;k++){
        printf("\n");
        for(l=0;l<q;l++){
            printf("%f ",recMatrizB[k*q+l]);
        }
    }






    FILE *arqB;

    arqB = fopen("matrizB.txt","r");

    if(arqB == NULL){

        printf("arquivo B zerado\n");
    }

    if(arqB != NULL){
        fscanf(arqB,"%d %d",&p,&q);
    }

    float *recMatrizA;

    float *recMatrizB;

    printf("\nmatriz A:\n");

    recMatrizA = LerArqMatriz(arqA,n,m);

    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++){
            printf("%f ",recMatrizA[i*m+j]);
        }
    }


     printf("\nmatriz B:\n");

    recMatrizB = LerArqMatriz(arqB,p,q);

    for(k=0;k<p;k++){
        printf("\n");
        for(l=0;l<q;l++){
            printf("%f ",recMatrizB[k*q+l]);
        }
    }
    do{
    /*1. AXB

    2. AXBt

    3. At

    4. Triangular Superior de A

    5. Linha K de A(ler k do teclado)

    6. Diagonal de A

    7. Coluna K de A(ler k do teclado)*/
        int opção;
        printf("*****MENU*****\n");
        printf("AXB[1]\n");
        printf("AXBt[2]\n");
        printf("Triangular Superior de A[3]\n");
        printf("Linha K de A[4]\n");
        printf("Diagonal Principal de A\n");

        scanf("%d",)
    }while(opcao != 0);


}
