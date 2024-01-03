#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//int valid_datos(int, int, int);
//void llenar_array(int[][]);

//valida que el isiario haya metido datos correctos
int valid_datos(int a,int b,int c){
    if((a >= 1) && (a <= 50) && (b >= 1) && (b <= 50) && (c >= 1) && (c <= 50)){
        return 1;
    } else {
        return 0;   
    }
}


int main(){
    int m, n, p; //para la longitud del array
    int i, j, k, l, a, b;//iteradores
    int restem;//esto es para ir guardando el posible resultado

    srand(time(NULL));
    printf("ingresa 3 numeros que van a ser la longitud de los array, ingresa en forma x y z\n");
    scanf("%d %d %d", &m, &n, &p);

    
    if(valid_datos(m, n, p)){
        int array1[m][n];
        int array2[n][p];
        int array3[m][p];

        //rellenar array 1
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                array1[i][j] = rand()%21;
            } 
        }

        //rellenar array 2
        for (k = 0; k < n; k++){
            for (l = 0; l < p; l++){
                array2[k][l] = rand()%21;
            } 
        }

        //imprimir array uno
        printf("\n==============================\n");
        printf("array1\n");
        printf("==============================\n");
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                printf("[%d] ", array1[i][j]);
            } 
            printf("\n");
        }

        //imprimir array dos
        printf("\n==============================\n");
        printf("array2\n");
        printf("==============================\n");
        for (k = 0; k < n; k++){
            for (l = 0; l < p; l++){
                printf("[%d] ", array2[k][l]);
            } 
            printf("\n");
        }

        //esto sera para la multiplicacion de arrays
        //estos primeros dos for recorren el array 3
        //for (a = 0; b < m; a++){
        //    for (b = 0; b < p; b++){
                int a,b,c,d,e,f,g,h;//mas iteradores que probablemente use

                 for (d = 0; d < p; d++) {
                    for (b = 0; b < m; b++) {
                        restem = 0;
                        for (c = 0; c < n; c++) {
                            restem += array1[b][c] * array2[c][d];
                        }
                        array3[b][d] = restem;
                    }
                }
                
            for (g = 0; g < m; g++){
                for (h = 0; h < p; h++){
                    printf("[%d] ", array3[g][h]);
                } 
                printf("\n");
            }
                
        //    }
        //}
        
    
    } else {
        printf("datos no validos, vuelve a intentar\n");
    }

    return 0;
}

