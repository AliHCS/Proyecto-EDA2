FILE *usuarios,*registro,*agregar,*pub,*archivo;

	char opc,opcion;
    char nombre[30],nombre1[30],nombre2[30],lectura[100],amigo1[30],escribe[100],tex[5]="\n";
    char contra[30],*cadena,amigo[30],amigos[30]="-amigos.txt",publicaciones[30]="-publicaciones.txt";
    char publicacion[50],*agamigo,*agpublicacion,amigo2[30],lectura2[100],nombre3[30],*agamigo2;
	int op;

sesio(){
                printf("Ingresa tu nombre de usuario:\n");
        		setbuf(stdin,NULL);
        		gets(nombre);
        		strcpy(nombre1,nombre);
        		strcpy(nombre3,nombre);
        		agamigo2=strcat(nombre3,amigos);

        		printf("\nIngresa la contraseña:\n");
        		setbuf(stdin,NULL);
        		gets(contra);
        		cadena=strcat(nombre1,contra);

        		if ((registro=fopen(nombre,"r"))!=NULL){
        			archivo =fopen("insesion.txt","r");
        			while(feof(archivo)==NULL) {
        			fscanf(archivo,"%s",&lectura);
        			//fclose(archivo);
        			//fclose(registro);
        		if (strcmp(lectura,cadena)==0){
            		printf("\nSesion iniciada con exito\n");
            		system("pause");
            	do{
            		//system("cls");
            		system("clear");
            		usuarios=fopen(nombre,"w");
            		fclose(usuarios);
            		printf("\n¿Que desea hacer?\n");
            		printf("1.Escribir Publicacion.\n");
            		printf("2.Ver publicaciones.\n");
            		printf("3.Agregar amigos.\n");
            		printf("4.Ver lista de amigos.\n");
            		printf("5.Cerrar sesion.\n");
            		printf("\nSelecciona una opcion.\n");
            		scanf("%c",&opcion);

            		switch(opcion){
            				case '1':
            				    //system("cls");
            				    system("clear");
            				    printf("Escribe tu publicacion.\n");
            				    setbuf(stdin,NULL);
            				    gets(escribe);
            				    strcat(escribe,tex);
            				    pub=fopen(agpublicacion,"a");
            				    fputs(escribe,pub);
            				    fclose(pub);
            				    printf("Publicacion agregada con exito.\n");
            				    getch();
                				break;
            				case '2':
            				    if ((archivo=fopen(agpublicacion,"r"))!=NULL);{
            				    while(feof(archivo)==NULL) {
                                    fscanf(archivo," %[^\n]",&lectura2);
                                    printf("\n%s",lectura2);
            				    }
            				    fclose(archivo);}
            				    getch();
                				break;
            				case '3':
            				    //system("cls");
            				    system("clear");
            				    printf("Ingrese el nombre del amigo que desea agregar.\n");
            				    setbuf(stdin,NULL);
            				    gets(amigo);
            				    strcpy(amigo2,amigo);
            				    strcat(amigo,tex);

            				    if ((agregar = fopen(amigo2,"r"))!=NULL){
                                    printf("Amigo agregado a la lista.\n");
                                    //fclose(agregar);
            				    }else {
            				        printf("El usuario no existe.\n");
            				        break;}

            				        pub = fopen(agamigo2,"a");
                                    fputs(amigo,pub);
                                    fclose(pub);
            				        getch();
                				break;
            				case '4':
            				    if ((archivo=fopen(agamigo2,"r"))!=NULL);{
            				    while(feof(archivo)==NULL) {
                                    fscanf(archivo," %[^\n]",&lectura2);
                                    printf("\n%s",lectura2);
            				    }
            				    fclose(archivo);}
            				    getch();
                				break;
            		}}while(opcion!='5');break;

        		}else{
            		printf("La contraseña es incorrecta.\n");
            		getch();
        		}}
        		fclose(archivo);
        		fclose(registro);
        		}else {
            		printf("Usuario no registrado.\n");
            		getch();
        		}


}
