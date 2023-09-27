#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define VECTOR_SIZE 6


double sum_pitagor(double vector[VECTOR_SIZE]){
    double result=0;
    double power=0;
    for (int i=0;i<VECTOR_SIZE;i++){
        power=pow(vector[i],2);
        result=power+result;
    }
    result=sqrt(result);
    return result;
}
double noise_mean(double vector[VECTOR_SIZE]){
    double result=0;
    for (int i=0;i<VECTOR_SIZE; i++){
        result=vector[i]+result;
    }
    result=result/VECTOR_SIZE;
    double noise= rand()%10;
    result=result+noise;
    return result;
}
double vector_multiply(double vector[VECTOR_SIZE]){
    double mat[VECTOR_SIZE];
    double result=0;
    for(int i=0;i<VECTOR_SIZE; i++){
	mat[i]=rand()%100+1;
}
    for (int i=0;i<VECTOR_SIZE; i++){
        result=(vector[i]*mat[i])+result;
    }
    return result;
}

void main(){
    time_t time_value;
    double vector[VECTOR_SIZE];
    srand((unsigned) time(&time_value));
    for(int i=0;i<VECTOR_SIZE; i++){
        vector[i]=rand()%100+1;
}
    printf("O resultado da primeira função é:%f\n",sum_pitagor(vector));
    printf("O resultado da segunda função é:%f\n",noise_mean(vector));
    printf("O resultado da terceira função é:%f\n",vector_multiply(vector));


}
