/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TDA;

/**
 *
 * @author Usuario
 */
public class Status {
    
    private int Id_User;
    private int Id_Moneda;
    private int Cantidad_Monedas;

    public Status(int Id_User, int Id_Moneda, int Cantidad_Monedas) {
        this.Id_User = Id_User;
        this.Id_Moneda = Id_Moneda;
        this.Cantidad_Monedas = Cantidad_Monedas;
    }


    
    
    /**
     * @return the Id_User
     */
    public int getId_User() {
        return Id_User;
    }


    /**
     * @return the Id_Moneda
     */
    public int getId_Moneda() {
        return Id_Moneda;
    }

    /**
     * @return the Cantidad_Monedas
     */
    public int getCantidad_Monedas() {
        return Cantidad_Monedas;
    }


    
    
    
}
