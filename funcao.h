#include <stdio.h>
#include <stdlib.h>

float *transposta(int n,int m, float *vma){//CALCULA A TRANSPOSTA DA MATRIZ

    int i,j;

    float *vmat;

    vmat = (float*)malloc(sizeof(float)*n*m);

    if(vmat!=NULL){

        for(i=0;i<n;i++){

            for(j=0;j<m;j++){

                vmat[j*n+i] = vma[i*m+j];

            }

        }

        return vmat;

    }

    return NULL;

}

float *MultABT(int n,int m,int p,int q,float *vma,float *vmb){

    int i,j,k;

    float *vmc = (float*)malloc(sizeof(float)*n*p);

    if(vma != NULL && vmb != NULL & vmc != NULL){

        if(m==q){

            for(i=0;i<n;i++){

                for(j=0;j<p;j++){

                    vmc[i*p+j] = 0;

                    for(k=0;k<m;k++){

                        vmc[i*p+j] += (vma[i*m+k]*vmb[j*m+k]);

                    }

                }

            }

            return vmc;

        }

        return NULL;

    }

}

float *TriangularSuperior(int n,float *vma){

    int i,j,k=0;

    int nelTri = (((n*n)-n)/2);

    float *vts = (float*)malloc(sizeof(float)*nelTri);

    if(vts!=NULL){

        for(i=0;i<n;i++){

            for(j=0;j<n;j++){

                if(j>i){

                    vts[k]=vma[i*n+j];

                    k++;

                }

            }

        }

        return vts;



    }return NULL;

}

float *RetornaLinha(int n,int m,float *Mat, int k){//RETORNA A LINHA K

    float *vetor = (float*)malloc(sizeof(float)*m);

    if(Mat!=NULL && k<n && k>=0){

        for(int i=0;i<m;i++){

            vetor[i] = Mat[k*m+i];

        }

    }
    for(int i=0;i<m;i++){
        printf("%f",vetor[i]);
    }

}

float *DiagPrin(int n,int m, float *Ma)//MOSTRA A DIAGONAL PRINCIPAL DA MATRIZ

{
    int nDiag,s=0;
    nDiag = n;

    if(nDiag>m){

        nDiag=m;

    }

    float *vetDiag = (float*)malloc(sizeof(float)*nDiag);

    if(vetDiag == NULL){

        printf("vetor nulo");

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(i==j){

                vetDiag[s]=Ma[i*m+j];

                s++;



            }

        }

    }
    for(int i=0;i<nDiag;i++){
        printf("%f",vetDiag[i]);
    }
    

}

float *RetornaColuna(int n,int m, float *Mc, int k){//RETORNA A COLUNA K

    float *vet = (float*)malloc(sizeof(float)*n);

    if(Mc!=NULL && k<m&& k>=0){

        for(int i=0;i<n;i++){

            vet[i] = Mc[i*m+k];

        }

    }

    return vet;

}

void multMat(int n,int m,int p, int f,float *Ma,float *Mb){//FAZ A MULTIPLICAÇÃO DA MATRIZ

    float *matriz = (float*)malloc(sizeof(float)*n*f);

    if(m == p){
        if(matriz!=NULL && Ma != NULL && Mb != NULL){
            for(int i=0;i<n;i++){
                for(int j=0;j<f;j++){
                    matriz[i*f+j] = 0;
                    for(int k=0;k<p;k++){
                        matriz[i*f+j] += (Ma[i*p+k]*Mb[k*f+j]);
                    }

                }

            }
            printf("\n");
            for(int i=0;i<n;i++){
                printf("\n");
                for(int j=0;j<f;j++){
                    printf("%f ",matriz[i*f+j]);
                }
            }

        }

    }
}

float *LerArqMatriz(FILE *arq,int n,int m){//LÊ O ARQUIVO E ARMAZENA OS ELEMENTOS DA MATRIZ NUM VETOR
    int i,j;

    float *recMatriz = (float*)malloc(sizeof(float)*n*m);

    if(arq==NULL){

        printf("arquivo NULL\n");

    }

    while(!feof(arq)){

        for(i=0;i<n;i++){

            for(j=0;j<m;j++){

                fscanf(arq,"%f",&recMatriz[i*m+j]);

            }

        }
        return recMatriz;

    }

}







