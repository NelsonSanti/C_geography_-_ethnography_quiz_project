/*
	Name: Nelson Santiago
	Copyright: 
	Author: 
	Date: 05/01/24 14:03
	Description: 
*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<conio.h>
#include<time.h>

int main()
{
	
	char escolha;
	char escolhaNiveis;
	char startInicial, startAvancado;
	srand(time(NULL));
	int aleatorio;
	int aleatorio2;
	char perguntasInicial [10][200]={"Vila Nova de Gaia e a 3a cidade mais populosa de Portugal.", "Alfacinha e um termo usado para designar as pessoas que gostam de alface.", "Os habitantes naturais da Guarda chamam-se guardanapos.", "Os ovos moles sao um doce tradicional de Coimbra.", "A francesinha portuense leva primeiro o molho e no topo o ovo.", "A cidade do Porto ja teve 3 clubes de futebol na primeira liga profissional da modalidade.", "O rio Douro nasce no Porto.", "O rio Douro desagua junto as cidades do Porto e Vila Nova de Gaia.", "O portugues e a unica lingua oficial falada em Portugal.", "Setubal e uma cidade pertencente a regiao de Estremadura."};
	char perguntasAvancado [10][500]={"A etnografia e uma metodologia das Ciencias Sociais, que tem como objetivo estudar a cultura de um povo e o comportamento dos animais.", "A Geografia e a ciencia que estuda o espaco geografico e a relacao entre a sociedade e o meio.", "A geografia geral e dividida principalmente em dois ramos sendo eles a geografia fisica que aborda as questoes naturais referentes ao planeta, e a geografia humana que aborda as relacoes sociais e o ser humano.", "A Europa e composta por 5 microestados.", "Para alem da linha do equador, o planeta terra e composto por 2 tropicos.", "Rafa e uma cidade Israelita.", "Sidney e a capital da Australia.", "O Egito foi considerado o pais mais rico de Africa em 2023.", "Umbundo e uma lingua falada em Angola.", "A Europa e composta por 50 paises."};
	int respostasInicial [10]={1, 2, 2, 2, 2, 1, 2, 1, 2, 1};// Para verificar respostas corretas ou erradas comparar com rep saved e trocar de bool para int para colocar verdadeiro ou falso
	int respostasAvancado [10]={2, 1, 1, 2, 1, 2, 2, 1, 1, 1};
	int respSaved[10];
	int respSaved2[10];
	char respUser;
	char respUser3;
	char respUser5;
	char respUser6;
	char respUser7;
	char respUser8;
	int respostasCertas=0;
	int respostasErradas=0;
	int numeroJogos=0;
	
	
	
	recomeco:
	system("CLS");
	system("color 0f");
	Sleep(1000);
	for(int contEstrelas=0; contEstrelas<=45;contEstrelas++){
		printf("*");
	}
	printf("\n* Quiz v1.0 - Nelson Santiago | Menu Inicial *\n");
	int contEstrelas=0;
	for(contEstrelas=0; contEstrelas<=41; contEstrelas++){
		printf("*");
	}
	printf("2024");
	
	printf("\n                              1: Nivel de dificuldade");
	printf("\n                              2: Instrucoes de utilizacao");
	printf("\n                              3: Sair do programa");
	printf("\n\nPrima o numero correspondente a sua escolha: ");
	escolha=getch();
	if(escolha=='1'){
		recomecoNiveis:
		printf("\a");
		Sleep(3000);
		system("CLS");
		Sleep(2000);
		system("color f0");
		printf("Escolha o nivel de dificuldade\n\n\n");
		printf("1- Nivel inicial: \n2- Nivel avancado: \n");
		escolhaNiveis=getch();
		if(escolhaNiveis=='1'){
			system("CLS");
			Sleep(2000);
			do{
			printf("Nivel inicial\n");
			for(int contEstrelas=0; contEstrelas<13; contEstrelas++){
			printf("*");	
		}
		for(int desfazerResp=0; desfazerResp<10; desfazerResp++){
				respSaved[desfazerResp]=0;
			}
			respostasCertas=0;
			respostasErradas=0;
		printf("\n1- Vila Nova de Gaia e a 3a cidade mais populosa de Portugal.\n2- Alfacinha e um termo usado para designar as pessoas que gostam de alface.\n3- Os habitantes naturais da Guarda chamam-se guardanapos.\n4- Os ovos moles sao um doce tradicional de Coimbra.\n5- A francesinha portuense leva primeiro o molho e no topo o ovo.\n6- A cidade do Porto ja teve 3 clubes de futebol na primeira liga profissional da modalidade.\n7- O rio Douro nasce no Porto.\n8- O rio Douro desagua junto as cidades do Porto e Vila Nova de Gaia.\n9- O portugues e a unica lingua oficial falada em Portugal.\n10- Setubal e uma cidade pertencente a regiao de Estremadura.");
		printf("\n\nComecar? \ns[im]\nn[ao]\n");
		startInicial=getch();
			if(startInicial!='s' && startInicial!='S' && startInicial!='n' && startInicial!='N'){
				printf("Escolha apenas \"s/S\" ou \"n/N\"\n");
				Sleep(2000);
				system("CLS");
			}
		}while(startInicial!='s' && startInicial!='S' && startInicial!='n' && startInicial!='N');
		if(startInicial=='s' || startInicial=='S'){
			system("CLS");
			Sleep(1000);
			numeroJogos++;
			printf("\nA jogar\n\n");
			for(int cont=0; cont<10; cont++){
				do{
 				aleatorio=rand()%10;				
				}while(respSaved[aleatorio]==1 || respSaved[aleatorio]==2);
					printf("%s\n", perguntasInicial[aleatorio]);
				
				do{
					respUser=getch();
					if(respUser!= 'v' && respUser!='f' && respUser!= 'V' && respUser!='F'){
						printf("\nApenas respostas com \"v/V\" ou \"f/F\" sao permitas\n");
					}
				}while(respUser!= 'v' && respUser!='f' && respUser!= 'V' && respUser!='F');
				if(respUser=='v'|| respUser=='V'){
					respSaved[aleatorio]=1;
				}
				else{
						respSaved[aleatorio]=2;
					}
			}
			printf("\n\nPretende ver o numero de respostas certas e erradas?\ns[im], n[ao]\n");
			do{
			respUser3=getch();
			if(respUser3!='s' && respUser3!='S' && respUser3!='n' && respUser3!='N'){
				printf("\a");
				system("color c0");
				}
			}while(respUser3!='s' && respUser3!='S' && respUser3!='n' && respUser3!='N');
			if(respUser3=='s' || respUser3=='S'){
				system("color f0");
				for(int contaRespostas=0; contaRespostas<10; contaRespostas++){
					if(respSaved[contaRespostas]==respostasInicial[contaRespostas]){
						printf("\nResposta %d certa", contaRespostas+1);
						respostasCertas++;
					}
					else{
						printf("\nResposta %d errada", contaRespostas+1);
						respostasErradas++;
					}
				}
				printf("\n\nRespostas certas: %d", respostasCertas);
				printf("\nRespostas erradas: %d", respostasErradas);
				printf("\n\nJogar novamente? s[im], n[ao]");
				do{
					respUser5=getch();
					if(respUser5!='s' && respUser5!='S' && respUser5!='n' && respUser5!='N'){
						printf("\a");
						system("color c0");
					}
				}while(respUser5!='s' && respUser5!='S' && respUser5!='n' && respUser5!='N');
				if(respUser5=='s' || respUser5=='S'){
					goto recomeco; //Tentei usar o do-while mas o código é tão grande que não conseguia fazer corresponder as chavetas do-while
				}
				else{
					system("CLS");
					Sleep(1000);
					system("color f0");
					printf("\n\nObrigado por ter jogado %d vez[es] ao meu quiz!", numeroJogos);
					Sleep(3000);
					}
			}
			else{
				printf("\n\nJogar novamente? s[im], n[ao]");
				do{
					respUser7=getch();
					if(respUser7!='s' && respUser7!='S' && respUser7!='n' && respUser7!='N'){
						printf("\a");
						system("color c0");
					}
				}while(respUser7!='s' && respUser7!='S' && respUser7!='n' && respUser7!='N');
				if(respUser7=='s' || respUser7=='S'){
					goto recomeco;
				}
				else{
				system("CLS");
				Sleep(1000);
				system("color f0");
				printf("\n\nObrigado por ter jogado %d vez[es] ao meu quiz!", numeroJogos);
				Sleep(3000);	
				}
			}
		}
		else
			if(startInicial=='n' || startInicial=='N'){
				goto recomecoNiveis;
			}
	}
	else
		if(escolhaNiveis=='2'){
		system("CLS");
		Sleep(2000);
		do{
		printf("Nivel avancado\n");
	for(int contEstrelas=0; contEstrelas<14; contEstrelas++){
		printf("*");
		}
	for(int desfazerResp2=0; desfazerResp2<10; desfazerResp2++){
		respSaved2[desfazerResp2]=0;
	}
		respostasCertas=0;
		respostasErradas=0;
		printf("\n1- A etnografia e uma metodologia das Ciencias Sociais, que tem como objetivo estudar a cultura de um povo e o comportamento dos animais.\n2- A Geografia e a ciencia que estuda o espaco geografico e a relacao entre a sociedade e o meio.\n3- A geografia geral e dividida principalmente em dois ramos sendo eles a geografia fisica que aborda as questoes naturais referentes ao planeta, e a geografia humana que aborda as relacoes sociais e o ser humano.\n4- A Europa e composta por 5 microestados.\n5- Para alem da linha do equador, o planeta terra e composto por 2 tropicos.\n6- Rafa e uma cidade Israelita.\n7- Sidney e a capital da Australia.\n8- O Egito foi considerado o pais mais rico de Africa em 2023.\n9- Umbundo e uma lingua falada em Angola.\n10- A Europa e composta por 50 paises.");
		printf("\n\nComecar? \ns[im]\nn[ao]\n");
		startAvancado=getch();
		if(startAvancado!='s' && startAvancado!='S' && startAvancado!='n' && startAvancado!='N'){
			printf("Escolha apenas \"s/S\" ou \"n/N\"\n");
			Sleep(2000);
			system("CLS");
		}
		}while(startAvancado!='s' && startAvancado!='S' && startAvancado!='n' && startAvancado!='N');
		if(startAvancado=='s' || startAvancado=='S'){
			system("CLS");
			Sleep(1000);
			numeroJogos++;
			respostasCertas=0;
			respostasErradas=0;
			printf("\nA jogar\n\n");
			for(int count=0;count<10;count++){
				char respUser2;
				do{
				aleatorio2=rand()%10;
				}while(respSaved2[aleatorio2]==1 || respSaved2[aleatorio2]==2);
				printf("%s\n", perguntasAvancado[aleatorio2]);
			do{
				respUser2=getch();
				if(respUser2!='v' && respUser2!='V' && respUser2!='f' && respUser2!='F'){
				printf("\nApenas respostas com \"v/V\" ou \"f/F\" sao permitas\n");
			}
		}while(respUser2!='v' && respUser2!='V' && respUser2!='f' && respUser2!='F');
			if(respUser2=='v' || respUser2=='V'){
			respSaved2[aleatorio2]=1;
			}
			else{
				respSaved2[aleatorio2]=2;
			}		
		}
		int respUser4;
		printf("\n\nPretende ver o numero de respostas certas e erradas?\ns[im], n[ao]\n");
		do{
		respUser4=getch();
		if(respUser4!='s' && respUser4!='S' && respUser4!='n' && respUser4!='N'){
			printf("\a");
				system("color c0");
				}
		}while(respUser4!='s' && respUser4!='S' && respUser4!='n' && respUser4!='N');
		if(respUser4=='s' || respUser4=='S'){
			system("color f0");
			for(int contaRespostas=0; contaRespostas<10; contaRespostas++){
				if(respSaved2[contaRespostas]==respostasAvancado[contaRespostas]){
					printf("Resposta %d certa\n", contaRespostas+1);
					respostasCertas++;
				}
				else{
					printf("Resposta %d errada\n", contaRespostas+1);
					respostasErradas++;
				}
			}
			printf("\n\nRespostas certas: %d", respostasCertas);
			printf("\nRespostas erradas: %d", respostasErradas);
			printf("\n\nJogar novamente? ");
			do{
				respUser6=getch();
				if(respUser6!='s' && respUser6!='S' && respUser6!='n' && respUser6!='N'){
					printf("\a");
					system("color c0");
				}
			}while(respUser6!='s' && respUser6!='S' && respUser6!='n' && respUser6!='N');
			if(respUser6=='s' || respUser6=='S'){
				goto recomeco;
			}
			else{
				system("CLS");
				Sleep(1000);
				system("color f0");
				printf("\n\nObrigado por ter jogado %d vez[es] ao meu quiz!", numeroJogos);
				Sleep(3000);
			}
		}
		else{
			printf("\n\nJogar novamente? s[im], n[ao]");
			do{
				respUser8=getch();
				if(respUser8!='s' && respUser8!='S' && respUser8!='n' && respUser8!='N'){
					printf("\a");
					system("color c0");
				}
			}while(respUser8!='s' && respUser8!='S' && respUser8!='n' && respUser8!='N');
			if(respUser8=='s' || respUser8=='S'){
				goto recomeco;
			}
			else{
			system("CLS");
			Sleep(1000);
			system("color f0");
			printf("\n\nObrigado por ter jogado %d vez[es] ao meu quiz!", numeroJogos);
			Sleep(3000);
			}
		}
	}
	else
		if(startAvancado=='n' || startAvancado=='N'){
			goto recomecoNiveis;
		}
	}
	else
		if(escolhaNiveis!='1' || escolhaNiveis!='2'){
			printf("\nNumero nao atribuido!\nO programa vai reiniciar.");
			Sleep(2000);
			system("CLS");
			goto recomeco;
		}
}
	else
		if(escolha=='2'){
			printf("\nInstrucoes de utilizacao\n");	
	for(contEstrelas=0; contEstrelas<=23; contEstrelas++){
		printf("*");
	}
	printf("\nSeja bem-vindo ao quiz Geografia e Etnografia.");
	printf("\nO quiz e composto por 20 questoes relacionadas com as areas da Geografia e tambem da Etnografia, e estao dividas entre dois niveis de dificuldade do jogo.");
	printf("\nEscolha por favor entre o nivel inicial e nivel avancado, antes de dar inicio ao seu jogo.\nCada um dos niveis contem 10 perguntas.");
	printf("\nTodas as questoes devem ser respondidas com \"verdadeiro\", ou \"falso\", utilizando as teclas \"v\" ou \"f\" respetivamente.");
	printf("\nNo final do seu jogo tera a possibilidade de ver o numero de respostas certas e erradas. Podera ainda escolher jogar novamente.");
	printf("\n\nPrima \'m/M\' para voltar ao menu inicial.");
	char letra;
	do{
	letra=getch();
	if(letra!='m' && letra!='M'){
		printf("\a");
	}
}while(letra!='m' && letra!='M');
	if(letra=='m' || letra=='M'){
		goto recomeco;
	}
}
	else
		if(escolha=='3'){
			printf("\nA sair do programa!");
			Sleep(2000);
			system("CLS");
		}
	else
		if(escolha!='1' || escolha!='2' || escolha!='3'){
			printf("\nNumero nao atribuido!\nO programa vai reiniciar");
			Sleep(2000);
			system("CLS");
			goto recomeco;
		}
	
}

	
	
	
	
