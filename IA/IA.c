#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#include "Conectivo.h"

/* Autor: Cleisson Barbosa*/


/*----------------------------------------------------------------------------------
------------------------Fim das Funções ou metodos---------------------------------- 
-----------------------------------------------------------------------------------*/

                             
							  
							  //Função principal - entrada de dados e saida

int main(int argc, char *argv[]) {
    
	//constantes
	const char *cabecalho = "\n   IA para Estudos e desenvolvimento  - Digite: (sair) Para fechar a aplicação\n";
	const char *cabecalho2 = "    Comandos: ";
	
	//variaveis
	char search[256], google[256]="http://www.google.com.br/search?q=";
	char googleimage[256]="https://www.google.com.br/search?site=imghp&tbm=isch&source=hp&q=";
	int aleatorio=0, i=0, decisao=0;
	char pergunta[30], comando[30],argumento[30];
   //fimVariaveis
	 

	//inicio

	setlocale(LC_ALL, "portuguese");//Habilita a acentuação para o português
	
    /* 
	for(i=0; i<100; i++){
		system("color f1");
		printf("\n\n                            Carregando.. %d%%",i);
		//Sleep(3);
		//system("cls");
	}*/
	system("title CBF IA");
	//system("cls");
	//sleep(10);
	//system("color 07");
	
	//cabeçalho	
	textcolor(WHITE);
	printf("%s",cabecalho);	
	printf("%s",cabecalho2);
	textcolor(LIGHT_RED);
	printf("Help - abrir navegador - pesquisa - word - limpa a tela... \n\n");
	textcolor(LIGHT_GRAY);
	
   //textcolor(LIGHT_GRAY);
	
	//inicio do loop
while(stricmp(pergunta, "sair")!=0){
                        
		srand(time(NULL));
      aleatorio = rand () % 2;
	
	   // system("color f0");
	   
       //entrada de dados
	   printf("\nDiga alguma coisa:> ");
	   fflush(stdin);
	   gets(pergunta);
	   
	       
		            /*Comandos abaixo*/
	   
	   
	    //chama função de pesquisa no google
	   if(strstr(pergunta,"pesquisa") || stricmp(pergunta,"quero pesquisar") == 0){ 
               PesquisaGoogle (decisao,google,googleimage, search);
               if(PesquisaGoogle == NULL)
               printf("\nNão foi possivel fazer a pesquisa!\n\n");  
        }
      //chama função que explica os comandos
      else if(strstr(pergunta, "help")){
		   	help();
	   }
	   //chama função que limpa a tela do usuario
       else if(strstr(pergunta, "limpa") && strstr(pergunta, "tela")){	
   	           limpa();
	   }
		                                       
     //chama função que abre o navegador
      else if(strstr(pergunta,"abra meu navegador") || stricmp(pergunta,"abrir navegador") == 0){
     	      AbrirNavegador(aleatorio);
     	      if(AbrirNavegador == NULL)
            printf("\nNão foi possivel fazer a pesquisa!\n\n");
      }
		    
                                           
		                                       
      //chama função que abri o Bloco de notas
      else if(strstr(pergunta,"notepad") || stricmp(pergunta,"abrir notepad") == 0){
              Notepad();
      }
											   
		   
	   //chama função que abri o wordpad 
	   else if(strstr(pergunta,"wordpad") || stricmp(pergunta,"abrir wordpad") == 0){
               Wordpad();
	   }											   
											   
	   //chama função que abri o microsoft word
       else if(strstr(pergunta, "word") || stricmp(pergunta, "abrir o word")==0){	
   	           Word();
	   }
	   else if(strstr(pergunta, "cmd") || stricmp(pergunta, "cmd")==0){	
                 printf("\n\n");
   	           cmd(comando,argumento);
	   }
 
        Dialogo(pergunta, aleatorio);
        
}                             

        //system("cls");
	
	return 0;
	
}
