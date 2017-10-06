
//Autor: Cleisson Barbosa

/*----------------------------------------------------------------------------------
------------------------Função de pesquisa no Google---------------------------------- 
-----------------------------------------------------------------------------------*/

int PesquisaGoogle (int decisao, char google[128], char googleimage[128], char search[128]){
     
	fflush(stdin);
	textcolor(LIGHT_GREEN);
	printf("\nPesquisar sobre?:> ");
   gets(search); 
	printf("\n\nImagens(1) ou sites(2)?:> ");
	scanf("%d",&decisao);   
	textcolor(LIGHT_GRAY);                                         
    //strstr("http://www.google.com.br/search?q=");																							
    switch (decisao){
		case 2: 
				strcat(google, search);
				//strcpy(search, 256, 256, 0);
                ShellExecute(NULL, "open", google, "", NULL, SW_SHOWNORMAL);
        break;
        
		case 1:
                strcat(googleimage, search);	
                //strcpy(search, 256, 256, 0);
                ShellExecute(NULL, "open", googleimage, "", NULL, SW_SHOWNORMAL);
        break;
	
	    default:
		        printf("\nErro, essa opção é inexistente!\nEscolha (1) Para imagens ou (2) Para Sites.\n\n");
	}
    strcpy(google,"http://www.google.com.br/search?q=");
    strcpy(googleimage,"https://www.google.com.br/search?site=imghp&tbm=isch&source=hp&q=");		
		//memset(search, 0, 256);
      //strcpy(search, 256, 256, 0);
    //ShellExecute(NULL, "open", google, "", NULL, SW_SHOWNORMAL);
    
    return EXIT_SUCCESS;

}//fim da função
