#include "Entrega1.h"


double noise_mean(int size,double vector[size]){
    time_t time_value;
    srand((unsigned) time(&time_value));
    double result=0;
    for (int i=0;i<size; i++){
        result=vector[i]+result;
    }
    result=result/size;
    double noise= rand()%10;
    result=result+noise;
    return result;
}
