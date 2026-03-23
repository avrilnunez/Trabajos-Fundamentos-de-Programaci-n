Operadores de puntero & y *
Un puntero es la dirección en memoria de una variable. Una variable puntero recibe sólo un apuntador a un valor de su tipo.
& devuelve la dirección en memoria del operando.
m=&cont;
m=la dirección de la variable cont, nada que ver con el valor de cont
cont=100 y está almacenado en la dirección 200
m=200
* devuelve el valor de la variable almacenada en la dirección que se especifica
q=*m;
q=100, ya que 100 es lo guardado en la dirección m
Se puede considerar que:
&es <<la dirección de>>  y
* es <<en la dirección>>
Las variables que manejen direcciones deben declararse con un * antes del nombre
char *c; // puntero a un char.
Se pueden mezclar:
int x,*y,z; x,z son variables enteras, y es puntero a entero
Abreviaturas
x=x+10;
x+=10;
Actúa en todos los operadores binarios.
x=x-10;
x-=10;*/