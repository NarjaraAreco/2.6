/*
 ============================================================================
 Name        : 6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float  media, n1, n2, n3, n4, n5;
	char nome[15], disciplina[20];
	int q,p;

	printf ("Digite o seu nome:");
	scanf("%s",nome);

	printf ("\nDisciplina:");
	scanf("%s",disciplina);

	printf ("\nA quantidade de aulas?");
	scanf ("%d",&q);

	printf ("\nQuantidade de presenças:");
	scanf ("%d",&p);

   printf ("Nota n1:\n");
   scanf ("%f", &n1);

   printf ("Nota n2:\n");
   scanf ("%f", &n2);

   printf ("Nota n3:\n");
   scanf ("%f", &n3);

   printf ("Nota n4:\n");
   scanf ("%f", &n4);

   printf ("Nota n5:\n");
   scanf ("%f",&n5);

   p = ((p/q)*100);

   media = ( n1 + n2 + n3 + n4 + n5)/5;

     if (media >=7 && p >= 75 ) {
     printf("Situação: Aprovado \n");
     }

     if (media >4 && media <7) {
     	printf ("Situação: Recuperação\n");
     }

     if (media <4 && p<75) {
     	printf ("Situação: Reprovado\n");
     }
     return 0;
     }
