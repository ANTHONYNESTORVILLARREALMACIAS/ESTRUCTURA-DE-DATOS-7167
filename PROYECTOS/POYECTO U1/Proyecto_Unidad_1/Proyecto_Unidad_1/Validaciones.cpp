#include "Validaciones.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#define dim3 10


char* Validaciones::ingreson1(const char* msj) {
	char* daton1 = new char[20];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			printf("%c", c);
			daton1[i++] = c;
		}
	}
	daton1[i] = '\0';
	return daton1;
}


char* Validaciones::ingreson2(const char* msj) {
	char* daton2 = new char[20];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			printf("%c", c);
			daton2[i++] = c;
		}
	}
	daton2[i] = '\0';
	return daton2;
}


char* Validaciones::ingresoap1(const char* msj) {
	char* datoap1 = new char[15];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			printf("%c", c);
			datoap1[i++] = c;
		}
	}
	datoap1[i] = '\0';
	return datoap1;
}


char* Validaciones::ingresoap2(const char* msj) {
	char* datoap2 = new char[15];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			printf("%c", c);
			datoap2[i++] = c;
		}
	}
	datoap2[i] = '\0';
	return datoap2;
}


char* Validaciones::ingresoplaca(const char* msj) {
	char* datoplaca = new char[10];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= 'A' && c <= 'Z') || (c == '-') || (c >= '0' && c <= '9')) {
			printf("%c", c);
			datoplaca[i++] = c;
		}
	}
	datoplaca[i] = '\0';
	return datoplaca;
}

char* Validaciones::ingresocolorveh(const char* msj) {
	char* datocveh = new char[15];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			printf("%c", c);
			datocveh[i++] = c;
		}
	}
	datocveh[i] = '\0';
	return datocveh;
}


char* Validaciones::ingresocedula(const char* msj) {
	char* datoced = new char[11];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= '0' && c <= '9')) {
			printf("%c", c);
			datoced[i++] = c;
		}
	}
	datoced[i] = '\0';
	return datoced;
}


char* Validaciones::ingresomarca(const char* msj) {
	char* datomar = new char[15];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			printf("%c", c);
			datomar[i++] = c;
		}
	}
	datomar[i] = '\0';
	return datomar;
}


char* Validaciones::ingresokilometraje(const char* msj) {
	char* datokil = new char[15];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= '0' && c <= '9')) {
			printf("%c", c);
			datokil[i++] = c;
		}
	}
	datokil[i] = '\0';
	return datokil;
}


char* Validaciones::ingresoanio(const char* msj) {
	char* datoanio = new char[5];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= '0' && c <= '9')) {
			printf("%c", c);
			datoanio[i++] = c;
		}
	}
	datoanio[i] = '\0';
	return datoanio;
}


char* Validaciones::ingresodia(const char* msj) {
	char* datodia = new char[3];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= '0' && c <= '9')) {
			printf("%c", c);
			datodia[i++] = c;
		}
	}
	datodia[i] = '\0';
	return datodia;
}


char* Validaciones::ingresomes(const char* msj) {
	char* datomes = new char[3];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = _getch()) != 13) {
		if ((c >= '0' && c <= '9')) {
			printf("%c", c);
			datomes[i++] = c;
		}
	}
	datomes[i] = '\0';
	return datomes;
}

void Validaciones::separar_cifras(long int x, int B[]){
    long int coc,i=9;
    do {
        coc=x/10;
        B[i]=x%10;
        i--;
        x=coc;
    }while (coc!=0);
}

int Validaciones::validar(long int x, int B[]){
    int pares=0, impares=0, aux,resta;
    while ((x<0) && (x>3999999999))
    {
        printf ("el valor ingresado es incorrecto ");
        scanf_s("%ld",&x);
    }
    for(int i=0;i<dim3-1;i+=2)
    {
        B[i]*=2;
        if(B[i]>9)
            B[i]-=9;
        impares+=B[i];
    }

    for (int i=1;i<dim3-1;i+=2)
    {
        pares+=B[i];
    }
     aux=impares+pares;
     resta=((aux/10)+1)*10;
     resta-=aux;
     if(aux==10)
        resta=0;
     if (B[9]==resta)
        return(1);
     else
        return (0);
}
