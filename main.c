
#include "Entrega1.h"
#define VECTOR_SIZE 8

void main(){
    time_t time_value;
    double vector[VECTOR_SIZE];
    srand((unsigned) time(&time_value));
    int size = VECTOR_SIZE;
    for(int i=0;i<VECTOR_SIZE; i++){
        vector[i]=rand()%100+1;
}
    printf("O resultado da primeira função é:%f\n",sum_pitagor(size,vector));
    printf("O resultado da segunda função é:%f\n",noise_mean(size,vector));
    printf("O resultado da terceira função é:%f\n",vector_multiply(size,vector));


}
