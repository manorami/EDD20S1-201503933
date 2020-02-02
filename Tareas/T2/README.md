
# Coin  
  
Tipo de datos, crear, nombre, symbol, cantidad, owner, tranferencia, tranferenciafrom.  
  
# Descripción  
  
Los valores del del TDA Coin son valores enteros, decimales, string, booleanos. También se crea un dato abstracto de  lista.
El TDa es inmutable.  
  
  
# Operaciones  
- crear(string nombre, strint symbol, int cantidad, int ) devuelve (string)
	> Efecto: Crea la moneda y a guarda en el sistema.


- nombre() devuelve (string)  
	> Efecto: Devuelve el nombre completo de la moneda.  
  
- symbol() devuelve (string)  
	>Efecto: Devuelve el símbolo representativo de la moneda en caso que lo tenga.  

-	informacion() devuelve (string)
     >Efecto: Devuelve toda la información de la moneda
  
  
- cantidad() devuelve (int)  
	> Efecto: Devuelve la cantidad de moneda

- owner() devuelve (listowner)
	>Efecto: Devulve la lista de dueños con la cantidad de monedas que poseen.

- transfer(int listowner.owner, int cantidad) devuelve (bool)
	>	Efecto: Se transfieren monedas del monedero principal a un monedero de algún usuario.

- transfer(int listaowner.owner, int listaowner.owner) devuelve (bool)
	> Efecto: Se transfieren monedas del monedero de un usuario a otro.



