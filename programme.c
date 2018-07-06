/* FICHIER GENERE PAR LE COMPILATEUR SIMPLE */

#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include<string.h>

int _esaisie;
char _csaisie;
char* _tsaisie;

int main(void){
	long entier=0;
	bool booleen=true;
	printf("%s","J'aime beaucoup les cookies ! \n");
	long e_i=0;
void 
test	(){
	entier=4;
	}
test();
	printf("%ld",entier);
	printf("%s","\n");
	printf("%s","tapez une valeur :\n> ");
	if((_tsaisie=malloc(sizeof(char)))==NULL){
	printf("Erreur de reallocation memoire sur la variable entier !");
	exit(-1);
	}
	_esaisie=0;
	do{
	_csaisie=getchar();
	_tsaisie[_esaisie]=_csaisie;
	if((_tsaisie=realloc(_tsaisie,sizeof(char)*(_esaisie+2)))==NULL){
	printf("Erreur de reallocation memoire sur la variable entier !");
	exit(-1);
	}
	_esaisie++;
	}while(_csaisie!='\n');
	_tsaisie[_esaisie-1]='\0';
	entier=strtold(_tsaisie,NULL);
	free(_tsaisie);
void 
table_mul_10	(){
	int i0;
	for(i0=0;i0<10;i0+=1){
	printf("%ld",10*e_i);
	printf("%s","\n");
	e_i+=1;
	}
	}
table_mul_10();
	return EXIT_SUCCESS;
}
