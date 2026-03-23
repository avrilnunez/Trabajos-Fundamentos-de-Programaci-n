/*Asignación de valores
Forma general: nombreVariable=expresión;
expresión puede ser una constante, una variable o una combinación de éstas con operadores.
Inicialización de variables
Al declararlas y asignar una constante de inicio a la variable.
Forma general:
tipo nombre_var=constante;
char c='a';
int primero=0;
float total=123.45
Constantes de caracter con diagonal invertida
La diagonal invertida se usa para caracteres no imprimibles y se manipulan  igual que cualquier otro caracter, precedidos por \, por ejemplo:
c='\t'; //tabulador
printf('Prueba de impresión\n');

Código    Significado
\b      backspace
\f      form feed
\n      salto de línea
\r      retorno de carro (return o enter)
\t      tabulador horizontal
\"      comillas
\'      apóstrofe
\0      nulo
\\      diagonal invertida
\v      tabulador vertical
\a      alarma (beep)
\o      constante octal
\x      constante hexadecimal

Operadores
Símbolo que indica al compilador una manipulación matemática o lógica.
Tipos: aritméticos, relacionales y lógicos.
Aritméticos.- Pueden aplicarse a casi todos los tipos de datos.
Operador    Acción
-      resta, menos monario
+      suma
*      multiplicación
/      división
%      módulo o residuo
--      decremento
++      incremento
=      asignación
Cuando se aplica / a un int o char, el residuo es truncado. por ejemplo:
int x,y;
x=10;
y=3;
printf("%d",x/y);// imprime 3
printf("%d",x%y);// imprime 1, el residuo
Incremento y decremento
++ añade 1 a su operando
-- resta uno a su operando
x=x+1; es equivalente a ++x;
x=x-1; es equivalente a --x;
++ y -- pueden preceder o seguir al operando
++x; o x++;
La diferencia está en cuándo se efectúa la operación. 
i el operador va antes del operando, la operación se efectúa antes de usar 
el operando, si el operador va después, se usa primero el operando y luego se 
hace la operación. por ejemplo:
x=10;
y=++x;
y es 11
x=10;
y=x++;
y es 10
en ambos casos x es 11.

Precedencia de operadores aritméticos
( )
++ --
- (monario)
* / %
+ -
Los operadores al mismo nivel son evaluados de izq. a der. Se pueden usar ( ) para 
alterar la precedencia.
Relacionales y lógicos
Relacionales.- determinan la relación entre dos valores.
Lógicos.- Se refiere a las formas en que estas relaciones pueden conectarse entre sí
siguiendo las reglas de la lógica formal.
La clave es la idea de cierto y falso. En C 0 es falso y cualquier valor diferente a
0 es verdadero. Las expresiones relacionales dan 0 si son falsas y 1 si son ciertas.
Relacionales  Significado
>        mayor que
>=        mayor o igual
<        menor que
<=        menor o igual
==        igual a
!=        diferente de
Lógicos      Significado
&&        y
        o
!        no
Tablas de Verdad
p  q    p&&q  p||q  !p
0  0      0      0    1
0  1      0      1    1
1  0      0       1     0
1  1       1      1    0
Los operadores relacionales y lógicos tienen una precedencia menor que los 
aritméticos.
10>1+12   es 10>(1+12) resultado falso
Se pueden combinar:
10>5&&!(10<9)||3<=4  resultado cierto
v                  v         v
Precedencia de operadores relacionales y lógicos
!
> >= < <=
== !=
&&

Se pueden usar ( )
!1&&0    resultado falso
!(1&&0)  resultado cierto
El operador ?
Substituye las sentencias if then else.
Forma general
exp1?exp2:exp3;
Evalúa la expresión 1, si es cierta ejecuta exp2, si es falsa ejecuta exp3.
Por ejemplo x=10;
y=x>9?100:200;
En este ejemplo y=100, si x fuera menor que 9 y=200.
con if
if(x>9) 
  y=100;
else 
  y=200;