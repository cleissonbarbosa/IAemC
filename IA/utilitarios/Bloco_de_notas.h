
//Autor: Cleisson Barbosa

/*----------------------------------------------------------------------------------
------------------------Função que abre o bloco de notas---------------------------- 
-----------------------------------------------------------------------------------*/

void Notepad(){
	
     digitando ();
     printf("Abrindo...\n\n");
     textcolor(LIGHT_GREEN);
     sleep(1);
     system("start notepad");
     textcolor(LIGHT_GRAY);
	
}//fim da função
