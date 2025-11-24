#include "../include/factorial.h"

long long factorial(unsigned int x){
    if(x == 0)  return 1;
    else{
        return factorial(x-1) * x;
    }
}
