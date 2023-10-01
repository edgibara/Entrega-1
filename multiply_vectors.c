#include "Entrega1.h"

double vector_multiply(int size,double vector[size]){
    time_t time_value;
    srand((unsigned) time(&time_value));
    double mat[size];
    double result=0;
    for(int i=0;i<size; i++){
	mat[i]=rand()%100+1;
}
    for (int i=0;i<size; i++){
        result=(vector[i]*mat[i])+result;
    }
    return result;
}
