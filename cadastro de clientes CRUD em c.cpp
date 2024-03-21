// projeto de cadastro de cliente
//crud em C

#include<stdio.h>
#include<math.h>
#include<locale.h> //biblioteca para usar acentuações




int main(){
setlocale(LC_ALL,"Portuguese"); //continuação da biblioteca acima 
char nomecadastro[61] ; //variavel para aceitar letras
  int cadastro, consulta, atualizacao, deletar, cadastro1, idcadastro, idconsulta;// dando erro

printf("\n\n ---- CADASTRO DE CLIENTES ---- \n\n");

printf("\n CRIAR CADASTRO \n 1-SIM  2-NÃO\n");
printf("\n");
scanf("%d",&cadastro);
printf("\n--------\n");
if (cadastro==1){
   	
	printf("digite seu nome e sobrenome (sem espaço)\n");
	scanf("%s",&nomecadastro);
	printf("\n\n");
	
	printf("cpf \n");
	scanf("%f",&cadastro1);
	printf("\n\n");
	
	printf("rg \n ");
	scanf("%f",&cadastro1);
	printf("\n\n");
	
	printf("cep \n");
	scanf("%f",&cadastro1);
	printf("\n\n");	
	
	printf("escolha seu id (1 a 100)\n");
	scanf("%f", &idcadastro);
	printf("\n\n");
	
}
 
printf("\n CONSULTAR CADASTRO\n 1-SIM  2-NÃO\n");
printf("\n");
scanf("%d",&consulta);
if (consulta==1){
	printf("digite o id do cadastro");
	scanf("%f",&idconsulta);
	else if(idconsulta==idcadastro){ // erro nessa linha 
		printf("%s",nomecadastro);
	}
	}


printf("\n ATUALIZAR CADASTRO \n 1-SIM  2-NÃO\n");
scanf("%d",&atualizacao);

printf("\n DELETAR CADASTRO \n 1-SIM  2-NÃO\n");
scanf("%d",&deletar);
printf("\n\n--------\n \n");





// criar o else if
// fechar o else 
return 0;
}
