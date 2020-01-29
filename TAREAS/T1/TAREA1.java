/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea.pkg1;

import java.util.Scanner;

/**
 *
 * @author Usuario
 */
public class TAREA1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int Valor_Matriz=0;
        String Val=null;
        System.out.println("INGRESE EL VALOR DE LA MATRIZ A CREAR DE DIMENCIONES M*M");
        System.out.print("M:= ");
        Scanner entradaEscaner = new Scanner (System.in); 
        Val= entradaEscaner.nextLine();
        try{
            Valor_Matriz=Integer.parseInt(Val);
            // Valores Mayores a 0
            if(Valor_Matriz==0){System.out.println("UNICAMENTE VALORES MAYORES A 0");}
            int Matriz[][]=new int[Valor_Matriz][Valor_Matriz];
            //Creacion de la matriz con valores iniciales 0
            for(int fila=0;fila<Valor_Matriz;fila++){
                for(int columna=0;columna<Valor_Matriz;columna++){
                    Matriz[fila][columna]=0;
                }
            }
            //Pintar bordes con 1
            for(int Index=0;Index<Valor_Matriz;Index++){
                Matriz[0][Index]=1;
                Matriz[Valor_Matriz-1][Index]=1;
                Matriz[Index][0]=1;
                Matriz[Index][Valor_Matriz-1]=1;
            }
            //Impresion de Matriz
            for(int fila=0;fila<Valor_Matriz;fila++){
                for(int columna=0;columna<Valor_Matriz;columna++){
                    System.out.print(Matriz[fila][columna]+" ");
                }
                System.out.println();
            }
        }
        catch(Exception E){
            System.out.println("UNICAMENTE VALORES MAYORES A 0");
        }
    }
    
}
