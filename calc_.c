/*
 * File:   calc_.c
 * Author: 47872216809
 *
 * Created on 7 de Outubro de 2022, 08:32
// */


#include <xc.h>
#include "config.h"
#include "lib_v01.h"


unsigned char calc[]={0,0,0,0,'\0'}; 
char a,b,c;


void convASC(unsigned char *valor2Asc)
{
    unsigned char contar;
    for(contar = 0;contar<3;contar++)
    {
        valor2Asc[contar]=valor2Asc[contar]+'0';
    }
}


void calculaEAN(char *valor)
{
    unsigned char par=0,impar=0;
    unsigned char contar;
    unsigned int soma;
    
    for(contar = 0; contar<2;contar = contar+2)
    {
        impar = impar + calc[contar];
        
    }
    for(contar = 1; contar<2;contar = contar+2)
    {
        par = par + calc[contar];
        
        
    }
    
//    par = par * 3;
        
        soma = par + impar;
//        soma = soma %10;
//        soma = 10 - soma;
        valor[2] = soma;
         
        
    
}


void main(void) 
{
   unsigned char tecla,contar=0;
   unsigned char tecla2,contar2=0;
//   int num1;
//   int num2;
//   int result;
//    
   /**/
   picIniciar();
   lcdIniciar();
   lcdPos(1,1);
   lcdTexto("nik");
   lcdPos(2,2);
   lcdTexto("a + b = c");

   while(contar<1)
   {
       tecla = teclado();
       if(tecla >= '0' && tecla <='9')
       {
           lcdPos(2,2);
           a = tecla - 0x30;
           lcd4bits(tecla,1);
           contar++;
       }
   }
   
   while(contar<2)
   {
       tecla = teclado();
       if(tecla >= '0' && tecla <='9')
       {
           lcdPos(2,6);
           b = tecla - 0x30;
           lcd4bits(tecla,1);
           contar++;
       }
   }
   c = a + b ;
   lcdPos(2,10);
   lcd4bits(c + 0x30,1);
   
   
//    lcdPos(2,1);
// 
//    
//      while(contar<2)
//    {
//        
//        tecla = teclado();
//        __delay_ms(50);
//        if(tecla >= '0' && tecla <='9')
//        {
//            lcdPos(2,2);
//            lcd4bits(tecla,1);
//            calc[contar] = tecla - 0x30;
//            contar++;
//        }
//    }
//   
//    
//
//    while(contar<2)
//    {
//         
//        tecla2 = teclado();
//        __delay_ms(50);
//        if(tecla >= '0' && tecla <='9')
//        {
//            lcdPos(2,4);
//            lcd4bits(tecla,1);
//            calc[contar2] = tecla - 0x30;
//            contar++;
//        }
//    }
    
    /**/
//   
    
//    lcdPos(2,1);
//   while(contar<2)
//    {
//        tecla = teclado();
//        if(tecla >= '0' && tecla <='9')
//        {
////            tecla = teclado();
//           lcd4bits(tecla,1);
//           num1[calc] = tecla - 0x30;
//           contar++;
//        }
//    }
//    
//    lcdPos(2,3);
//  while(contar<2)
//    {
//        tecla = teclado();
//        if(tecla >= '0' && tecla <='9')
//        {
////            tecla = teclado();
//         lcd4bits(tecla,1);
//        num2[calc] = tecla - 0x30;
//        contar++;
//        }
//    }
//    
// 
//   result[calc]= num1[calc] + num2[calc];
//   lcd4bits(result[calc]+0x30,1);
   /**/
   
//   calculaEAN(calc);
//   convASC(calc);
//   lcdPos(2,8);
////   lcdTexto("=");
//   lcdTexto(calc);
//     lcd4bits(calc,1);
   while(1)
   {
       
   }
}


