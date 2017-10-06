

//Autor: Cleisson Barbosa

/*----------------------------------------------------------------------------------
--------------Função que abri os navegadores a pedido do usuario-------------------- 
-----------------------------------------------------------------------------------*/


int AbrirNavegador(int aleatorio){
	srand(time(NULL));
   aleatorio = rand () % 2;
	
   digitando ();
   
   textcolor(LIGHT_GREEN);
   printf("Abrindo...\n\n");
   
	if(aleatorio==1)
   {
	sleep(1);
	system( "start chrome");
   }
    
    else
	 {
    sleep(1);
    system ("start firefox");
	//system("cd / c:\Program Files (x86)\Google\Chrome\Application\chrome.exe");
    }
    textcolor(LIGHT_GRAY);
    
     return EXIT_SUCCESS;
    
}//fim da função
