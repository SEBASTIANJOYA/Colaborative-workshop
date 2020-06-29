/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: SEBASTIAN JOYA BELTRAN.
 *         JUAN GARCIA. 
 *         MAYKOL SANCHEZ.
 * Created on 10 de junio de 2020, 10:10 PM
 */


#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
 *Taller colaborativo en C el cual se desarrollara un menu con siete opciones. 
 */
void SumaDigitos(int intervaloUno, int intervaloDos,int numOmitir){
    
int suma= 0;
int contador=0;

//Implementacion del metodo del EJERCICIO 5.
void separarIntervalos(int numero, int digito){
    char cadena[100000];
    sprintf(cadena, "%d", numero);
    int cantidad=strlen (cadena);
    
    for (int i=0; i<cantidad;i++){
        int n=(int) cadena[i]-48;
        if (n==digito){
            contador++;
        }else{
            suma=suma+n;
        }
       
    }
  
}
    int  i, j,digito;
    int cantidad, sumacifras=0;
    
    
    
    cantidad=intervaloDos-intervaloUno+1;
    
    int guardarnumero[cantidad-1];
    
    printf("Cantidad de números en el rango: %d \n",cantidad);
    printf("Números en el intervalo: ");
    
    int posicion=0;
    for(int i=intervaloUno;i<=intervaloDos;i++){
        guardarnumero[posicion]=i;
        
        printf("%d ",i);
        posicion++;
        
    }
    
    
    for(int j=0;j<=cantidad-1;j++){
        separarIntervalos (guardarnumero[j],numOmitir);
    }
    
    printf ("\nTotal suma: %d \n", suma);
    printf ("Repeticiones del numero 1 a omitir : %d \n", contador);
    
    
   
}

//Implementacion del metodo del EJERCICIO 6.
char* funcion (int n){
    char* cadena="";
    char* s1="";
    char*s2="";
	if (n==0){
		cadena="0";
	}
	
    else if (n==1){
		cadena="1";
	}
	
    else if (n>=2){
            s1=funcion(n-1);
            s2=funcion(n-2);
             const size_t len1 = strlen(s1);
             const size_t len2 = strlen(s2);
            char *result = malloc(len1 + len2 + 1); 
            memcpy(result, s1, len1);
            memcpy(result + len1, s2, len2 + 1);
            cadena=result;
	}
	return cadena;
}
int Fibonacci(char* cadena1,char* cadena2){
    char*busqueda=NULL;
    busqueda=strstr(cadena1,cadena2);
    int i=0;
    while(busqueda!=0){
        i++;
        busqueda=strstr(busqueda+1,cadena2);
    }
    return i;
    
}

int main(int argc, char** argv) {

     int optionmenu = 0;
    while(optionmenu != 8){
        printf("***bienvenidos al menu****\n \n");
        printf("*1° punto : numeros primos desendientes \n");
        printf("*2° punto : verificacion de numeros egolatras \n");
        printf("*3° punto : verificacion de numeros magicos \n");
        printf("*4° punto : a calcular el IMC (indice de masa corporal)\n");
        printf("*5° punto : calcular suma de digitos en un rango numerico\n");        
        printf("*6° punto : calcular serie fibonacci\n");
        printf("*7° punto : prueba cadena XOXO\n");
        printf("*8*.SALIR****\n");
        printf("Por favor digite uel numero que corresponde al punto a ejecutar \n");
        scanf("%d",&optionmenu);
        
        switch(optionmenu){
            
            case 1:
                printf("ha seleccionado el 1° punto \n \n");
                int num,x,y,cont=0;
                printf("digite el valor numerico del cual desea ver los numeros primos \n");
                scanf("%i",&y);
                for(num=y;num>=1;num--){
                     for(x=1;x<=num;x++){
                           if(num%x==0){
                            cont++;
                           }     
                     } if(cont==2){
                          printf("%d-",num);
               
                       }
                         cont=0;
                 }
                printf("\nha ejecutado el 1° punto con exito \n");
                break;
            
            
            case 2:
                printf("ha seleccionado el 2° punto \n \n");
                int numero,a,b,c,resultado;
                printf("digite el valor numerico el cual desea verificar si es egolatra \n");
                scanf("%i",&numero);
                a=numero/100;
                b = (numero - a*100)/10;
                c = (numero - a*100 - b*10);
    
                printf( "\nEl numero a provar es : " );
                printf("\n");
                printf("%d-",a);
                printf("%d-",b);
                printf("%d-",c);
                printf("\n");
                resultado=(a*a*a)+(b*b*b)+(c*c*c);
               if(resultado==numero){
                    printf("el numero es egolatra\n");
               }
               else{
                    printf("el numero no es egolatra\n");
               }
                    printf("\nha ejecutado el 2° punto con exito \n");
                    break;
                
            
           case 3:
                break;
                
            
            case 4:
                break;    
                
            
            case 5:
                 
                 printf("ha seleccionado el 5° punto \n \n");
                 int intervalouno,intervalodos,numomitir;
                 
                 printf("digite el valor del intervalo uno \n");
                 scanf("%d",&intervalouno);
                 printf("digite el valor del intervalo dos \n");
                 scanf("%d",&intervalodos);
                 printf("digite el valor a omitir \n");
                 scanf("%d",&numomitir);
                 SumaDigitos(intervalouno,intervalodos,numomitir);
                 break;
                
            
            case 6:
                break;
                
                
            
            case 7:
                break;
                
                
            
            case 8:
                break;    
        }
                
    }
    
    return (EXIT_SUCCESS);
}
  


