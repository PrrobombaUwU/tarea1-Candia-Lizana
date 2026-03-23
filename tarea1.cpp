#include <iostream> 

using namespace std;

class arr_extensible {

private:

int* A;
int* B;
int tamanioA;

public:

arr_extensible(){}

bool setValue(unsigned long i, int v);
int getValue(unsigned long i);
void append(int v);
void remove();
unsigned long size();


};

bool arr_extensible::setValue(unsigned long i, int v){

if (0 <= i && i < tamanioA){
    A[i] = v;
    return true;
} else {
    return false;
}
}

void arr_extensible::append(int v){
    int tamanioB = 1;
    
    while(tamanioB<=tamanioA){
        tamanioB = tamanioB*2;
    };

   for(int i=0; i<=tamanioA; i++){
        B[i] = A[i];
   };

}

unsigned long arr_extensible::size(){
    return tamanioA;
}

int main(){



    return 0;
}
