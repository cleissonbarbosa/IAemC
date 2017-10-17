
char cmd(char comando[30], char argumento[30]){
	  //argumento = "start cd c://";
     
     while(stricmp(argumento,"exit")!=0){
                                      
     printf(":> ");
     gets(comando);
     
	    //system(argumento);         
        
     //else if(stricmp(comando,"ping")==0)
     //sprintf(comando,"ls %s",argumento); //passando um argumento para a função system
     if(stricmp(comando,"exit")==0){
        argumento = "echo Digite sair para voltar ao inicio";
		system(argumento);
	 }
	 else if(stricmp(comando,"sair")==0){
     	argumento = "exit";
	 }
	 else{
	 	 system(comando); 
	 }
	 
	 fflush(stdin);
     
     }

}
