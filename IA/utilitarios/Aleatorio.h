
//Autor: Cleisson Barbosa

/*-----------------Respostas aleatorias---------------------------------------------
Descrição: Procedimento para respostas aleatorias da maquina
----------------------------------------------------------------------------------*/


void RespostaAleatorio(int aleatorio){
	
	srand(time(NULL));
	aleatorio = rand () % 8;
	
	switch(aleatorio){
	
	case 0:
		textcolor(LIGHT_GREEN);
		printf("Não..\n\n");
		textcolor(WHITE);
		break;
	case 1:
		textcolor(LIGHT_GREEN);
		printf("sim..\n\n");
		textcolor(LIGHT_GRAY);
		break;
	case 2:
		textcolor(LIGHT_GREEN);
		printf("Não faça planos, apenas váh..\n\n");
		textcolor(LIGHT_GRAY);
		break;
	case 3:
		textcolor(LIGHT_GREEN);
		printf("o que vc quer dizer com isso?..\n\n");
		textcolor(LIGHT_GRAY);
		break;
	case 4:
		textcolor(LIGHT_GREEN);
		printf("O que realmente você quer saber?..\n\n");
		textcolor(LIGHT_GRAY);
		break;
	case 5:
		textcolor(LIGHT_GREEN);
		printf("Não sei o que dizer!\n\n");
		textcolor(LIGHT_GRAY);
		break;
	case 6:	
     	textcolor(LIGHT_GREEN);
		printf("Eu poderia me ofender, mas sou uma maquina!\n\n");
		textcolor(LIGHT_GRAY);
		break;
	case 7:
	    textcolor(LIGHT_GREEN);	
		printf("Eu sou uma maquina..\n\n");
		textcolor(LIGHT_GRAY);
		break;
	default:
		textcolor(RED);
		printf("\n\nERROR!!...\n\n\n\n");
		break;
    }
   
}

 /*------------------------------------------------------------------------------*/
