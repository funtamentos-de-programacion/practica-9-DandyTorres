#include <stdio.h>


// TODO: (22) Declara un prototipo de una función
//  id: suma
//  @return varible de tipo int
//  @param una matriz
//  @param el número de filas

int suma(int a[][3], int f);
int suma2(int **a, int f, int c);

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // TODO: (23) Crea una variable llamada resultado  y asigna lo que devuelve la función suma
    // pasa a la función el arreglo y su tamaño

    int res= suma(arr,3);
    int *ptr=&res;
    printf("%d\t");
    //res= suma2(arr,3,3);
    //printf("%d\t");
    //printf("%d\n",*(ptr)); 

   
    
        
        //TODO: (21) Usa la lógica de apuntadores para acceder al arreglo
        //Las direcciones que van seguidas una desoues de otra se conocen como direcciones contiguas
         
    return 0;
}

int suma2(int **a, int f, int c){

    int r;
    for (int i = 0; i< f; i++) {
        for (int j = 0; j < c; j++) {
           
            r+=a[i][j];
        }
        
    }
    return r;

}

int suma(int a[][3], int f)
{
    int r;
    for (int i = 0; i< f; i++) {
        for (int j = 0; j < 3; j++) {
           
            r+=a[i][j];
        }
        
    }
    return r;
}
//TODO: (25) Crea la función suma que realiza la suma de todos los elementos de un arreglo
