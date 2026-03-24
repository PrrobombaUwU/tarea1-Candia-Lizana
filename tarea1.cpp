#include <iostream> 

using namespace std;

class arr_extensible {

private:

int* A;
int* B;
int tamanioA;
int capacidadB;

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

int* Bcopia;

   if(tamanioA<capacidadB){
    B[tamanioA] = v;
    tamanioA++;
   }else{
    int nuevacapacidadB = 1;
    while(nuevacapacidadB<=tamanioA){
        nuevacapacidadB = nuevacapacidadB*2;
    };

    Bcopia = new int [capacidadB];
    
    for(int i=0; i<capacidadB;i++){
        Bcopia[i] = B[i];
    };
    
    delete[] B;
    B = new int [nuevacapacidadB];

    for(int i=0; i<tamanioA;i++){
        B[i] = Bcopia[i];   
    };

    B[tamanioA] = v;
    tamanioA++;
    capacidadB = nuevacapacidadB;
    delete[] Bcopia;
   };
}

    

unsigned long arr_extensible::size(){
    return tamanioA;
}

int main(){



    return 0;
}
