#include <stdio.h>
#include <stdlib.h>
#include <funcao.h>

int main()

{

    int n,m,p,q;

    FILE *arqA;
    FILE *arqB;

    arqA = fopen("matrizA.txt","r");
    arqB = fopen("matrizB.txt","r");

    if(arqA != NULL){
        fscanf(arqA,"%d %d",&n,&m);
    }

    if(arqB != NULL){
        fscanf(arqB,"%d %d",&p,&q);
    }

    float *recMatrizA;

    float *recMatrizB;

    printf("\nmatriz A:\n");

    recMatrizA = LerArqMatriz(arqA,n,m);

    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
            printf("%f ",recMatrizA[i*m+j]);
        }
    }


     printf("\nmatriz B:\n");

    recMatrizB = LerArqMatriz(arqB,p,q);

    for(int k=0;k<p;k++){
        printf("\n");
        for(int l=0;l<q;l++){
            printf("%f ",recMatrizB[k*q+l]);
        }
    }
    int opcao;
    int k;
    do{
    /*1. AXB
    2. AXBt
    3. At
    4. Triangular Superior de A
    5. Linha K de A(ler k do teclado)
    6. Diagonal de A
    7. Coluna K de A(ler k do teclado)*/
        printf("\n*****MENU*****\n");
        printf("AXB[1]\n");
        printf("AXBt[2]\n");
        printf("Transposta de A[3]\n");
        printf("Triangular Superior de A[4]\n");
        printf("Linha K de A[5]\n");
        printf("Diagonal Principal de A[6]\n");
        printf("Coluna K de A[7]\n");
        printf("Sair do programa[0]\n");
        printf("*****MENU*****\n");
        scanf("%d",&opcao);
        switch(opcao){
          case 1:
            multMat(n,m,p,q,recMatrizA,recMatrizB);
            printf("\n");
            break;
          case 2:
            MultABT(n,m,p,q,recMatrizA,recMatrizB);
            printf("\n");
            break;
          case 3:
            transposta(n,m,recMatrizA);
            printf("\n");
            break;
          case 4:
            TriangularSuperior(n,recMatrizA);
            printf("\n");
            break;
          case 5:
            printf("Insira a linha que deseja:\n");
            scanf("%d",&k);
            RetornaLinha(n,m,recMatrizA,k-1);
            printf("\n");
            break;
          case 6:
            DiagPrin(n,m,recMatrizA);         
            printf("\n");
            break;
        }
    }while(opcao != 0);


}
