
# Trabajo Práctico N°1

## Alumno
-Matias Jose Torres
---
## Ejercicio 2
Es conveniente incluir .gitignore ya que nos ayuda a mantener el repositorio limpio y profesional. Su función principal es evitar que archivos innecesarios o sensibles se suban a la nube.

*¿Cuándo se debe hacer?*
Lo ideal es crearlo al inicio del proyecto, justo después de ejecutar git init.
*¿Cómo configuraría el archivo .gitignore?*
Para crear un archivo .gitignore local, crea un archivo de texto y asígnale el nombre ".gitignore" (recuerda incluir el . al principio). Luego, edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.


## Ejercicio 3

### Código misterioso
en la función f_alpha, se pasa por referencia el valor de la variable p. Lo que hace la función es pasar el numero ingresado por el numero dado vuelta por completo. Yo llamaría a esta función dar_vuelta.
en la función f_beta se le pasa el valor de la memoria de la variable p y se la divide en 2, y el numero en cuestión ahora es la mitad. Yo llamo a la función f_beta como mitad.
en la función f_gamma lo que hace es sumar el valor individual de cada digito de la variable y al final esa suma la suma al numero que anteriormente dividimos en 2. Yo llamo a la función f_gamma como suma_digitos.


### Código sin funcionar

Los primeros errores que vi son que le faltaban ; y por eso no funcionaba. 
Luego no funcionaba el primer scanf porque le faltaba & al valor1. 
Otro error que vi es que no duplicaba el valor entonces lo que hice es pasarlo como un puntero y hacer puntero todo dentro de la función y también pasarle el dato como un puntero.
Con todo eso corregido todo el código anda perfectamente.

## Ejercicio 4
El resultado del 2 y 3 es el mismo porque apuntamos a la direccion de memoria que copio el puntero de la variable y en el punto 4 se obtiene algo diferente ya que es la direccion de variable que tiene el puntero no el que copio.