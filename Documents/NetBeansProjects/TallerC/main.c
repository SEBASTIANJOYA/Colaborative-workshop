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
        printf("***bienvenidos al menu****");
        printf("*1*.****");
        printf("*2*.****");
        printf("*3*.****");
        printf("*4*.****");
        printf("*5*.****");        
        printf("*6*.****");
        printf("*7*.****");
        printf("*8*.SALIR****");
        printf("Digite una opcion....");
        scanf("%d",&optionmenu);
        
        switch(optionmenu){
            
            case 1:
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
  


