#include<stdio.h>
#include<locale.h>  //IMPORTEI 2 BLIBLIOTECAS

#define PESSOAS 100
#define TAM_NOME 50  // CRIAÇÃO DE CONSTANTES PARA AJUDAR NAS MATRIZES
#define TAM_SENHA 10
#define TAM_CPF 20

/* ### Integrantes -- VORTEX MOTORS --- ###
 Matheus de Luca Pereira do Vale - RGM: 
 Gabreiel - RGM: 
 Myllena Dionísio - RGM: 
 Felipe Diassis - RGM:
 João Victor - RGM:
 Julia Zezilia - RGM:
 Marcelo - RGM:
 Matheus Levy - RGM:
 Monteiro - RGM:
 Renan - RGM:*/

int main (){
	setlocale(LC_ALL, "Portuguese"); /*permite leitura dos ascentos -- está ligado com o lacale.h */
	
			
	char cpf [PESSOAS][TAM_CPF];
	char nome [PESSOAS][TAM_NOME];
	char nascimento [PESSOAS][20];  // DEFINIMOS MATRIZES E VETORES AQUI PARA AULIZAR NO CÓDIGO
	char email [PESSOAS][100];
	char endereco [PESSOAS][100];
	char senha[PESSOAS][TAM_SENHA];
	int opcao;
	int i = 0;  // CONTADOR PARA O SISTEMA GUARDAR MAIS DE UM CADASTRO
	do{
	
	
	printf("\n Digite seu nome completo: \n");
	fgets(nome [i], TAM_NOME , stdin);
	printf("\n Digite seu CPF (sem pontuação): \n");
	fgets(cpf[i] , TAM_CPF , stdin);
	printf("\n Digite sua data de nascimento (ex: dd/mm/aaaa): \n");  //AQUI, O CLIENTE INSERE AS INFORMAÇÕES NECESSÁRIAS PARA O CADASTRO, o [i] está
	scanf("%s" , nascimento[i]);									  // guardando no sistema	
	printf("\n Digite seu Email: \n");
	scanf("%s" , email[i]);
	printf("\n Crie uma senha: \n");
	scanf("%s" , senha[i]);
	
	
	
	

	printf( "Nome: %s" , nome[i]);
	printf( "CPF: %s" , cpf[i]);
	printf( "Nascimento: %s \n" , nascimento[i]);		// aqui, o sistema lê os dados informados
	printf( "Email: %s \n" , email[i]);
	
	
	
	i++; // usamos esse incremento para o sistema entender, que todo fim de cadastro, ele slave e passe para a próxima posição
	
	printf("\n Confirma os dados enviados? \n");
	printf("\n Digite 1 para sim, e 2 para Não \n");  // O cliente tem a possibilidade de corrigir os dados do início se desejar, ou continuar.
	scanf("%d" , &opcao);
	
	if (opcao == 1){
		printf("\n Dados enviados com sucesso \n");
		
		int servicos; 		/* No html, quando o clinte clica sem cadastrar depois de preencher todos os dados necessários, ele é encaminhado
							   para a página de serviços, onde ele vai escolher a sua necessidade*/
		
		printf("\n ### Selecione o serviço que deseja solicitar ###\n");
		printf(" \n 1 - Troca de peças \n");
		printf(" \n 2 - Carregamento \n ");  
		printf(" \n 3 - Entrega Rápida \n ");
		printf(" \n 5 - SAIR \n");
		scanf("%d" , &servicos);
		
		switch (servicos){  //usamos switch pois são varias opções, o que abre a possibilidade de deixar o código mais completo.
			
			case 1:
				
				int pecas;
				char modelo[50];
				char opcaoServ;
				char info[100];
				
				
				printf("\n ### TROCA DE PEÇAS ### \n");
				printf("\n Qual modelo do veiculo: \n");
				getchar();
				fgets(modelo, 50 , stdin);
				printf("\n Deseja apenas compra da peça ou compra + Instalação: \n");
				printf("\n Digite A para a primera opcao ou B para a segunda: \n" );
				scanf(" %c" , &opcaoServ);
				
				if(opcaoServ == 'A' || opcaoServ == 'a'){
					printf("\n ### APENAS COMPRA ### \n");
					
					printf("\n Selecione a peça desejada: \n");
					printf("\n 1 - motor");
					printf("\n 1 - peça 2");
					printf("\n 1 - peça 3");
					printf("\n 1 - peça 4");
					printf("\n 1 - peça 5");
					scanf("%d" , &pecas);
					
					switch(pecas){
					case 1:
						printf(" Você selecionou: MOTOR " );
						printf(" \n Digite observações necessárias: \n");
						getchar();
						fgets(info , 100 , stdin);
						printf("Peça solicitada! Se direcione a loja mais próxima para reealizar a retirada");
						break;
						
					case 2:
						printf(" Você selecionou: MOTOR " );
						printf(" \n Digite observações necessárias: \n");
						getchar();
						fgets(info , 100 , stdin);
						printf("Peça solicitada! Se direcione a loja mais próxima para reealizar a retirada");
						break;
						
					case 3:
						printf(" Você selecionou: MOTOR " );
						printf(" \n Digite observações necessárias: \n");
						getchar();
						fgets(info , 100 , stdin);
						printf("Peça solicitada! Se direcione a loja mais próxima para reealizar a retirada");
						break;
						
					case 4:
						printf(" Você selecionou: MOTOR " );
						printf(" \n Digite observações necessárias: \n");
						getchar();
						fgets(info , 100 , stdin);
						printf("Peça solicitada! Se direcione a loja mais próxima para reealizar a retirada");
						break;
						
					case 5:
						printf(" Você selecionou: MOTOR " );
						printf(" \n Digite observações necessárias: \n");
						getchar();
						fgets(info , 100 , stdin);
						printf("Peça solicitada! Se direcione a loja mais próxima para reealizar a retirada");
						break;
				}
					
					
				}
				 else if(opcaoServ == 'B'|| opcaoServ == 'b'){
					
					int pecas2;
					
					printf("\n ### COMPRA + INSTALAÇÃO \n ");
					
					printf("\n Selecione a peça desejada: \n");
					printf("\n 1 - motor");
					printf("\n 1 - peça 2");
					printf("\n 1 - peça 3");
					printf("\n 1 - peça 4");
					printf("\n 1 - peça 5");
					scanf("%d" , &pecas2);
					
					switch(pecas2){
					case 1:
						printf(" Você selecionou: MOTOR " );
						printf(" \n Digite observações necessárias: \n");
						getchar();
						fgets(info , 100 , stdin);
						printf("Peça solicitada! Se direcione a loja mais próxima para reealizar a retirada e instalação");
						break;
						
					case 2:
						printf(" Você selecionou: MOTOR " );
						printf(" \n Digite observações necessárias: \n");
						getchar();
						fgets(info , 100 , stdin);
						printf("Peça solicitada! Se direcione a loja mais próxima para reealizar a retirada e instalação");
						break;
						
					case 3:
						printf(" Você selecionou: MOTOR " );
						printf(" \n Digite observações necessárias: \n");
						getchar();
						fgets(info , 100 , stdin);
						printf("Peça solicitada! Se direcione a loja mais próxima para reealizar a retirada e instalação");
						break;
						
					case 4:
						printf(" Você selecionou: MOTOR " );
						printf(" \n Digite observações necessárias: \n");
						getchar();
						fgets(info , 100 , stdin);
						printf("Peça solicitada! Se direcione a loja mais próxima para reealizar a retirada e instalação");
						break;
						
					case 5:
						printf(" Você selecionou: MOTOR " );
						printf(" \n Digite observações necessárias: \n");
						getchar();
						fgets(info , 100 , stdin);
						printf("Peça solicitada! Se direcione a loja mais próxima para reealizar a retirada e instalação");
						break;
				}
						
				}
				else{
					printf("\n OPÇÃO INVÁLIDA ");
					
				}
				break;
				
				
				
			case 2:
				
				char placa[10];
				char cep[20];
				
				printf("\n ### CARREGAMENTO ### \n");
				
					printf("\n Digite seu CPF (sem pontuação): \n");
					getchar();
					fgets(cpf[i] , TAM_CPF , stdin);
					
					printf("\n Digite a placa do veículo: \n");
					fgets(placa , 20 , stdin);
					
					printf("\n Digite se CEP para localizarmos o ponto de carregamento mais próximo: \n");
					fgets(cep , 10 , stdin);
					
					printf("\n Ponto de carregamento localizado, será enviado o endereço ao seu email cadastrado. \n");
				break;
				
			case 3:
				
				int peca3;
				
				printf(" \n ###  ENTREGA RÁPIDA ### \n");
				
				printf("\n Digite seu CPF (sem pontuação): \n");
					getchar();
					fgets(cpf[i] , TAM_CPF , stdin);
					
					printf("\n Digite a placa do veículo: \n");
					fgets(placa , 20 , stdin);
					
					printf("\n Digite se CEP para entrega: \n");
					fgets(cep , 10 , stdin);
					
					printf("Selecione a peça desejada: \n");
					printf("\n 1 - motor");
					printf("\n 1 - peça 2");
					printf("\n 1 - peça 3");
					printf("\n 1 - peça 4");
					printf("\n 1 - peça 5");
					scanf("%d" , &peca3);
					
					switch(peca3){
						case 1:
							printf("\n Entrega solicitada!, será enviado a confirmação ao seu email cadastrado. \n");
							break;
							
							case 2:
							printf("\n Entrega solicitada!, será enviado a confirmação ao seu email cadastrado. \n");
							break;
							
							case 3:
							printf("\n Entrega solicitada!, será enviado a confirmação ao seu email cadastrado. \n");
							break;
							
							case 4:
							printf("\n Entrega solicitada!, será enviado a confirmação ao seu email cadastrado. \n");
							break;
							
							case 5:
							printf("\n Entrega solicitada!, será enviado a confirmação ao seu email cadastrado. \n");
							break;			
					}
					
				
				break;
				
		
		}
	}
		
		} while (opcao == 2 && i < PESSOAS);
}


