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

//lIBRERIAS A UTILIZAR.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/*
 *Taller colaborativo en C el cual se desarrollara un menu con siete opciones.
 *PROGRAMACION III. 
 */


//Implementacion del metodo del EJERCICIO 6.

char* funcion_Fibonacci (int numero){
    char* cadena="";
    char*funcion1="";
    char*funcion2="";
    if (numero==0){
        
        cadena="0";
	}
	
    else if (numero==1){
	
	cadena="1";
	}
	
    else if (numero>=2){
            funcion1=funcion_Fibonacci(numero-1);
            funcion2=funcion_Fibonacci(numero-2);
             const size_t linea1 = strlen(funcion1);
             const size_t linea2 = strlen(funcion2);
            char *resultado = malloc(linea1 + linea2 + 1); 
            memcpy(resultado, funcion1, linea1);
            memcpy(resultado + linea1, funcion2, linea2 + 1);
            cadena=resultado;
	}
	return cadena;
}
int Comparacion(char* cadena1,char* cadena2){
    char*buscar=NULL;
    buscar=strstr(cadena1,cadena2);
    int i=0;
    while(buscar!=0){
        i++;
        buscar=strstr(buscar+1,cadena2);
    }
    return i;
    
}


//Implementacion del metodo del EJERCICIO 5.

void SumaDigitos(int intervaloUno, int intervaloDos,int numOmitir){
    
int suma= 0;
int contador=0;


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

//IMPLEMENTACION DEL METODO DEL EJERCICIO 4
char* estadoIMC(float peso,float altura, int gen){
    char* estado="";
    float imc=peso/(pow((altura/100),2));   
    if (gen==0){
        if (imc<17){
            estado="desnutricion";
         }
        else if ( imc>=17 && imc<=20){
            estado="Bajo peso";
         }
        else if ( imc>20 && imc<=25){
            estado="Normal";
         }
        else if ( imc>25 && imc<=30){
            estado="Sobrepeso";
         }
        else if ( imc>30 && imc<=35){
            estado="Obesidad";
         }
        else if ( imc>35 && imc<=40){
            estado="Obesidad marcada";
         }
        else if(imc>40) {
            estado="obesidad morbida";
         }
    }
    else if(gen=!0){
        if (imc<16){
            estado="desnutricion";
         }
        else if ( imc>=16 && imc<=20){
            estado="Bajo peso";
         }
        else if ( imc>20 && imc<=24){
            estado="Normal";
         }
        else if ( imc>24 && imc<=29){
            estado="Sobrepeso";
         }
        else if ( imc>29 && imc<=34){
            estado="Obesidad";
         }
        else if ( imc>34 && imc<=39){
            estado="Obesidad marcada";
         }
        else if (imc>39) {
            estado="obesidad morbida";
         }
    }
    return estado;
}

//IMPLEMENTACION DEL METODO DEL EJERCICIO 3
int NumeroMagico(int numero){
    int Magico=numero,contador=0,guardar=numero,operation=0,verificar=0;
     while(numero>0){
        numero=numero/10;
        contador++;
    }
    int x[contador];
    int i=0;
    while(guardar>0 &&i<contador){
            x[i]=guardar%10;
        guardar=guardar/10;
        i++;
    }
    operation=Descendente(contador,x)-Ascendente(contador,x);
    if(operation==Magico){
        verificar=1;
    }
    else{
        verificar=0;
    }
    return verificar;
}
int Descendente(int cont, int x[]){
    int temp=0;
    int suma=0;
    for (int i=0; i <cont; i=i+1){
        for (int j=0; j <cont; j=j+1){
            if ( x[i] < x[j] ){
            temp= x[i];
            x[i]=x[j];
            x[j]=temp;
            }
        } 
}
    for (int i=0; i <cont; i=i+1){ 
    }
    for(int i=0;i<=cont;i++){
        suma=suma+(x[i]*pow(10,i));  
    }  
   return suma ;
}
int Ascendente(int cont, int x[]){
    int aux=0;
    for (int i = cont; i >= 1; i--) {
        for (int j = 0; j <= i; j++) {
            if (x[j] < x[j+1])
          {
            aux = x[j];
            x[j]= x[j+1];
            x[j+1]= aux;
           }
    }
    }
    int suma=0;
   for(int i=cont;i>=0;i--){
        suma=suma+(x[i]*pow(10,i));
    }
    return suma; 
}


//METODO EJERCICIO DOS
void  punto2(int numero){
      int a,b,c,resultado;
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
}


//METODO EJERCICIO UNO
void punto1(int y){
      int num,x,cont=0;
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
}



int validar_numero(char numero[])
{
    int i;
    for(i=0; i<strlen(numero); i++)
    {
        if(!(isdigit(numero[i])))
        {
            printf("\nINGRESA SOLO NUMEROS ENTEROS \n");
            
            return 0;
        }
    }
    return 1;
}


//METODO MAIN DONDE SE LLEVARA A CABO LA EJECUCION DEL MENU CON SUS RESPECTIVAS OPCIONES

int main(int argc, char** argv) {
        int numero=0; 
        char* cadena2="";
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
                int t;
                printf("digite el valor numerico del cual desea ver los numeros primos \n");
                scanf("%i",&t);
                punto1(t);
                break;
            
            
            case 2:
                
                printf("ha seleccionado el 2° punto \n \n");
                int numer;
                printf("digite el valor numerico el cual desea verificar si es egolatra \n");
                scanf("%i",&numer);
                punto2(numer);
                
                break;
                
            
           case 3:
                printf("ha seleccionado el 3° punto \n \n");
                char* validar = 0;
                do{
                  
                  printf("digite el numero que desea ver si es magico \n");
                  scanf("%s", &validar);
                  numero=validar_numero(&validar);
                  }while(numero==0);
                  if(NumeroMagico(atoi(&validar))==1){
                      printf("El numero es magico");
                  }
                  else{
                      printf("El numero no es magico");
                  }
                  
               
               
                printf("\nha ejecutado el 3° punto con exito \n");
                break;
                
            
            case 4:
                printf("ha seleccionado el 4° punto \n \n");
                float peso,altura,imc;
                int gen;
                printf("digite su peso en kilogramos \n");
                scanf("%f"  ,&peso) ;
                printf("digite su altura en centimetros \n");
                scanf("%f"  ,&altura);
                printf("digite su genero 0:masculino, 1:femenino \n");
                scanf("%i"  ,&gen);
                imc=peso/(pow((altura/100),2));  ;     
                printf("estado segun su IMC con valor %.2f es [%s]", imc,estadoIMC(peso,altura,gen));
                printf("\nha ejecutado el 4° punto con exito \n");
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
                 printf("\nha ejecutado el 5° punto con exito \n");
                 break;
                
            
            case 6:
                printf("Ha seleccionado el 6° punto \n\n");
                printf("digite el valor para la funcion de la serie fibonacci \n");
                scanf("%d",&numero);
                printf("digite la cadena para verificarla dentro de la serie \n");
                scanf("%s",&cadena2);
                char* cadena1=funcion_Fibonacci(numero);
                printf("La cadena se encotro ");
                printf("%d",Comparacion(cadena1,&cadena2));
                printf(" veces\n");
                printf("\nha ejecutado el 6° punto con exito \n");
                break;
                
                
            
            case 7:
              printf("ha seleccionado el 7° punto \n \n");
    
              printf("digite la cadena xo \n");
              char cadena[1000];
              scanf("%s",&cadena);
              int cont=0,suma=0;
    
                 for(int i=0;i<=strlen(cadena);i++){
                     if(cadena[i]=='O'||cadena[i]=='o'||cadena[i]=='0'){
                        cont++;
                        suma=suma+cont;
                    }
        
                 else {
                    cont=0;
            }
        
    }
    printf("puntaje total: ");
    printf("%d",suma);
    printf("\n");
    printf("\nha ejecutado el 7° punto con exito \n");
    break;
                
                
            
            case 8:
                break;    
        }
                
    }
    
    return (EXIT_SUCCESS);
    
}

  


