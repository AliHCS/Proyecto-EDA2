#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"regis.c"


int main(void){

	    do{
	    //system("cls");
		system("clear");
		printf("\t -------------------------\n");
		printf("\t| W H I T E    R I V E R  |\n");
		printf("\t -------------------------\n\n");
		printf("1) Iniciar sesion.\n");
		printf("2) Registrarse.\n");
		printf("3) Salir.\n\n");
		printf("   Elige una opcion:   ");
		scanf("%d", &op);

		switch(op){
			case 1:
				//system("cls");
				system("clear");
				sesio();
        		break;

			case 2:
				//system("cls");
				system("clear");
				regis();
				break;

			case 3:
				//system("cls");
				system("clear");
				printf("\t\n¡Te esperamos pronto!\n");
				return 0;

			default:
				//system("cls");
				system("clear");
				printf("\nOPCION INVALIDA\n\n");
				op=5;
				system("pause");
			    break;

		}}while(op!=3);

	return 0;
}




