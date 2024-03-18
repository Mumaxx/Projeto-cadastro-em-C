// projeto de cadastro de cliente
//crud em C

#include<stdio.h>
#include<math.h>
#include<locale.h> //biblioteca para usar acentuações




int main(){
setlocale(LC_ALL,"Portuguese"); //continuação da biblioteca acima 
char nomecadastro[41]; //variavel para aceitar letras
float cadastro,cadastro1,consulta,idconsulta,atualizaçao,deletar,idcadastro,; // dando erro na hora de execução

printf("\n\n ---- CADASTRO DE CLIENTES ---- \n\n");

printf("\n CRIAR CADASTRO \n 1-SIM  2-NÃO\n");
printf("\n--------\n");
scanf("%f",&cadastro);

printf("\n CONSULTAR CONSULTA\n 11-SIM  12-NÃO\n");
scanf("%f",&consulta);

printf("\n ATUALIZAR CADASTRO \n 21-SIM  22-NÃO\n");
scanf("%f",&atualizaçao);

printf("\n DELETAR CADASTRO \n 31-SIM  32-NÃO\n");
scanf("%f",&deletar);
printf("\n\n--------\n \n");


if (cadastro==1){
	printf("escolha um numero de 1 a 100");
	scanf("%f",&idcadastro);
	printf("digite seu nome e sobrenome \n");
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
}

if(consulta==1){
	printf("digite o id de consulta");
	scanf("%f",&idconsulta);
	while (idconsulta==idcadastro){
		printf("\n %f, \n %s"idcadastro,nomecadastro,cadastro1);
	}
	
}


// criar o else if
// fechar o else 

}
