#include"sesio.c"

regis(){
	            printf("Ingresa el nombre de usuario a registrar:\n");
        		setbuf(stdin,NULL);
        		gets(nombre);

        		strcpy(nombre2,nombre);
        		strcpy(amigo1,nombre);
        		strcpy(nombre1,nombre);

        		printf("\nIngresa la contraseña.\n");
        		setbuf(stdin,NULL);
        		gets(contra);

        		cadena=strcat(nombre1,contra);
        		strcat(cadena,tex);

        		if ((registro=fopen(nombre,"r"))!=NULL){
        			printf("El usuario ya esta registrado.\n");
        			fclose(registro);
        			system("pause");}
        		else{
        			usuarios = fopen(nombre,"w");
        			fclose(usuarios);

        			agpublicacion=strcat(nombre2,publicaciones);
                    pub=fopen(agpublicacion,"w");
                    fclose(pub);

                    agamigo=strcat(amigo1,amigos);
                    agregar=fopen(agamigo,"w");
                    fclose(agregar);

                    registro= fopen("insesion.txt","a+");
        			fprintf(registro,cadena,"\n");
        			fclose(registro);

        			printf("Usuario registrado con exito\n");
        			getch();
        		}
}
