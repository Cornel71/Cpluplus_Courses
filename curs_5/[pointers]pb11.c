#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */
/*
	Am vazut mai devreme, la exemplul 5 ca un pointer care nu pointeaza catre un spatiu din memorie nu poate fi folosit.
	Nu poti seta valoarea unui spatiu care nu a fost definit.

	In exemplele de pana acum defineam (alocam) spatiu definind variabile.
	Spre exemplu:
	int a; // Aloca spatiu in memorie pentru un singur intreg;
	float v[100]; // aloca spatiu in memorie pentru un 100  float-uri;

	Exista totusi o alta metoda de a aloca spatiu: folosind functia malloc.
	Aceasta permite alocarea dinamica, a unui bloc de memorie, de orice dimensiune dorita.


    //aloca memorie ptr. n întregi:
    int * a = (int *) malloc( n * sizeof(int));

    //aloca memorie ptr. n întregi si initializeaza cu zerouri
    int * a= (int*) calloc (n, sizeof(int) );



	******************************
*/
int main()
{
    int *p;  // declaratia unui pointer la un intreg

	p = (int *) malloc(sizeof(int));  // folsind functia malloc pentru a aloca spatiu catre un int,
										//si facem pointerul p sa pointeze catre spatiul respectiv
	/*
		Explicatie sintaxa malloc:
		sizeof(int) -> functia malloc ia ca parametrul numarul de bytes ce trebuie alocati.
					   Ca sa nu tinem minte cati bytes ocupa un int, sau orice alt tip de date mai complex
					   folosim functia sizeof
		(int *)     -> functia malloc returneaza un pointer catre tipul de data void.
					   Asadar, convertim acel pointer void intr-un pointer catre int.
	*/
    *p = 135; // corect - p pointeaza catre spatiul alocat de mai sus
     printf("Memoria alocata = %p\n", *p );
     printf("Memoria alocata = %o\n", *p );
     printf("Memoria alocata = %d\n", *p );

     free(p);  // eliberam spatiul alocat



    return 0;
}
