#include "Entrega1.h"

double sum_pitagor(int size,double vector[size]){
    double result=0;
    double power=0;
    for (int i=0;i<size;i++){
        power=pow(vector[i],2);
        result=power+result;
    }
    result=sqrt(result);
    return result;
}
