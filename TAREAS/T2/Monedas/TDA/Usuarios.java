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
public class Usuarios {
    
    private int Id;
    private String User;
    private String Password;
    private boolean Rol;//false= usuario true=administrador

    public Usuarios(int Id, String User, String Password, boolean Rol) {
        this.Id = Id;
        this.User = User;
        this.Password = Password;
        this.Rol = Rol;
    }

    /**
     * @return the Id
     */
    public int getId() {
        return Id;
    }



    /**
     * @return the User
     */
    public String getUser() {
        return User;
    }

 

    /**
     * @return the Password
     */
    public String getPassword() {
        return Password;
    }

    /**


    /**
     * @return the Rol
     */
    public boolean isRol() {
        return Rol;
    }




    
    
    
}
