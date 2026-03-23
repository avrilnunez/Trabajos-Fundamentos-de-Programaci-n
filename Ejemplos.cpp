forma gral.- printf(cadena de control,dato1,dato2,daton);
cadena de control es un cadena de chrs que determina el formato de la salida.
Los datos pueden ser constantes,variables,arreglos o expresiones. En la
cadena de control tiene un grupo de caracteres p/c/dato, y c/grupo comienza con %
seguido de un caracter de conversión, otros caracteres pueden ser incluidos y son
enviados directamente a pantalla
chr    significado
c    Imprime un char
d    entero
e    flotante con exponente
f    flotante sin exponente
g    usa %e o %f el más corto
i    entero con signo
o    octal
p    puntero
s    cadena de caracteres
u    entero sin signo
x    hexadecimal
%    imprime un %
Los caracteres de control deben coincidir con los datos en cantidad,orden y tipo
printf("Hola %c %d %s",'c',10,"que tal");