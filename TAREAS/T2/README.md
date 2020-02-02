### Usuarios : 
##### Tipo de dato el cual contiene informacion como id, usuario , contraseña y rol

### Descripcion:
##### Los valores del TDA Usuario son Entero y dos Cadenas de caracteres y una variable binaria.El TDA es Inmutable.

### Operaciones :
##### *  ObtenerID() Devuelve(Entero)
    Efecto: Retorna el valor de Id designado.
##### *  ObtenerUsuario() Devuelve(Cadena de Caracteres)
    Efecto: Retorna el nombre de usuario ingresado.
##### *  ObtenerContraseña() Devuelve(Cadena de Caracteres)
    Efecto: Retorna la contraseña ingresada por el usuario.
##### *  ObtenerRol() Devuelve(Binario)
    Efecto: Retorna la contraseña ingresada por el usuario.

### Monedas : 
##### Tipo de dato el cual contiene informacion como id de la moneda, Nombre de la moneda, Cantidad de monedas y fecha de creacion.

### Descripcion: 
##### Los valores aceptados por el TDA son 2 Enteros y una cadena de Caracteres.El TDA es Mutable.

### Operaciones :
##### *  ObtenerID() Devuelve(Entero)
    Efecto: Retorna el valor de Id designado.
##### *  ObtenerMoneda() Devuelve(Cadena de Caracteres)
    Efecto: Retorna el nombre de la moneda ingresado.
##### *  ObtenerCantidadDeMonedas() Devuelve(Entero)
    Efecto: Retorna la cantidad de monedas disponibles.
##### *  ObtenerFechaDeCreacion() Devuelve(Fecha)
    Efecto: Retorna la Fecha de la creacion de la moneda.
##### * CambiarCantidadDeMonedas(a:Entero) Devuelve(nada)
    Requerimiento:a>=0.
    Efecto: Cambia la cantidad de monedas disponibles en el TDA.    

### Status:
##### Tipo de dato el cual contiene un Id del Usuario, Id de la moneda, Cantidad de Monedas.
### Descripcion:
##### Los valores que admite el TDA son 2 numeros que los cuales son referencia de los TDA Anteriores y un entero con la cantidad de monedas en movimiento. El TDA es inmutable.
### Operaciones:
##### * ObtenerIdDelUsuario() Devuelve(Entero)
    Efecto: obtiene el Id del usuario con el cual se efectuo una operacion
##### *  ObtenerIdDeMoneda() Devuelve(Entero)
    Efecto: Retorna el Id de la Moneda con la que se realizo la transaccion.
##### *  ObtenerCantidadMonedas() Devuelve(Entero)
    Efecto: Retorna la cantidad de monedas las cuales se transfirieron entre usuarios.