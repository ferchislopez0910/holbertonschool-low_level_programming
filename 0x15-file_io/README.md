<p align="center"><img src='https://marketing4ecommerce.net/wp-content/uploads/2018/06/GitHub-logo-2-imagen.jpg' alt='Banner' width=40%></p>

# 0x15-file_io

## File I / O

_Funciones que abren archivos dentro de stdio.h_


Fopen:  File open, cargar archivos, abrir un archivo de diferentes maneras, recibe dos parametros tipo char (cadenas) el primero ruta del archivo, y como se abre: es de dos caractreres, hay distintas formas de abrirlo, escribir, leer, escribir y leer (modos), r: read, solo leer; w: write pero no leer y se sobre escribie; a: lo abre y lo que escriba se añade al final, sino exite el file lo crea; r+ escritura y lectura; w+: leer y escribir y sobre escribe el archivo (lo vuelve a crear). 

Devuelve un objeto de tipo file puntero, lo q es un un valor del puntero al archivo. 

Fp: file pointer 

Para cerrarlo: fclose y nos pide el nombre del archivo a cerrar y no dejarlo abierto. 

Fclose *fp 

Fgets  : recuperar el archivo 

Fprintf  para escribir en un archivo, y tiene la cadema de lo que vamos a escribir 

 

### Authors :black_nib:

    * __Maria Fernanda Lopez__

#### Software Academy 👨‍💻

<p aling="center">
<a href="https://www.holbertonschool.com" target="_blank">
<img src="http://www.holbertonschool.com/holberton-logo.png" alt="Holberton School"  /></a>
</p>
