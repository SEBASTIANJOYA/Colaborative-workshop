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

/*
 *Taller colaborativo en C el cual se desarrollara un menu con siete opciones. 
 */
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
                break;
                
            
           case 3:
                break;
                
            
            case 4:
                break;    
                
            
            case 5:
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
  


