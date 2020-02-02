/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TDA;

import java.util.Date;

/**
 *
 * @author Usuario
 */
public class Monedas {
    private int Id;
    private String NombreMoneda;
    private int CantidadMonedas;
    private Date FechaActual=new Date();

    public Monedas(int Id, String NombreMoneda, int CantidadMonedas) {
        this.Id = Id;
        this.NombreMoneda = NombreMoneda;
        this.CantidadMonedas = CantidadMonedas;
        Date FechaActual=new Date();
        this.FechaActual=FechaActual;
    }

    


    /**
     * @return the NombreMoneda
     */
    public String getNombreMoneda() {
        return NombreMoneda;
    }



    /**
     * @return the CantidadMonedas
     */
    public int getCantidadMonedas() {
        return CantidadMonedas;
    }

    /**
     * @param CantidadMonedas the CantidadMonedas to set
     */
    public void setCantidadMonedas(int CantidadMonedas) {
        this.CantidadMonedas = CantidadMonedas;
    }

    /**
     * @return the FechaActual
     */
    public Date getFechaActual() {
        return FechaActual;
    }



    /**
     * @return the Id
     */
    public int getId() {
        return Id;
    }


    
    
    
}
