#include "lib.h"

float numMagg(float numeri[],int dim){
    float b=0;
    b=numeri[0];
    for(int j=0;j<dim;j++){
        if(b<numeri[j]){
            b=numeri[j];
        }
    }
    return b;

}
