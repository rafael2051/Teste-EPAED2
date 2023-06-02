#include <stdio.h>
#include <stdlib.h>
//Dê um include no seu EP abixo.
//Basta digitar #include "<nome do arquivo>.cpp"
//Lembre-se de colocar tanto o seu EP quanto a main na mesma pasta
//#include "EP.cpp"

void todasAbertas(int * a, int N){

    for(int i = 1;i <= N;i++){
        a[i] = 1;
    }

}

void imprimeResposta(NO * resposta, int ini, int fim, int noTeste, int * a, int N, int chave){
	NO * p = resposta;
	printf("Teste %d:\n", noTeste);
	printf("Salas trancadas: ");
	for(int i = 1;i <= N; i++)
        	if(!a[i])
            		printf("%d ", i);
	printf("\n");
	printf("Chave: %d\n", chave);

	if(p){
		printf("O caminho mais curto de %d ate %d e: ", ini + 1, fim + 1);
		while(p){
			printf("%d", p->adj);
			if(p->prox)
				printf(" -> ");
			p = p->prox;
		}
		printf("\n");
	}
	else{
		printf("Bem nao ha caminho de %d ate %d.\n", ini + 1, fim + 1);
	}
}

int main() {

	int N = 9;
	int A = 15;
	int aberto[] = {0, 1,1,1,1,1,1,1,1,1};

	int ijpeso[]={1,2,1, 1,4,2, 1,6,1, 1,8,4, 2,3,4,
				  2,4,2, 2,8,1, 2,9,5, 3,4,1, 3,5,1,
				  4,5,1, 5,6,2, 6,7,1, 7,8,2, 8,9,1};
	int noTeste = 1;
	NO * teste = NULL;


	// o EP sera testado com uma serie de chamadas como esta

	inicio = 1;
	fim = 9;
	chave = 3;
	aberto[2] = 0;
	teste = caminho(N, A, ijpeso, aberto, inicio, fim, chave);
	imprimeResposta(teste, inicio - 1, fim - 1, noTeste, aberto, N, chave);
	noTeste++;
	printf("\n");

	inicio = 1;
	fim = 9;
	chave = 7;
	aberto[2] = 0;
	aberto[8] = 0;
	teste = caminho(N, A, ijpeso, aberto, inicio, fim, chave);
	imprimeResposta(teste, inicio - 1, fim - 1, noTeste, aberto, N, chave);
	noTeste++;
	printf("\n");

	inicio = 1;
	fim = 9;
	chave = 3;
	aberto[2] = 0;
	aberto[8] = 0;
	teste = caminho(N, A, ijpeso, aberto, inicio, fim, chave);
	imprimeResposta(teste, inicio - 1, fim - 1, noTeste, aberto, N, chave);
	noTeste++;
	printf("\n");

	inicio = 1;
	fim = 9;
	chave = 3;
	aberto[2] = 0;
	aberto[4] = 0;
	aberto[8] = 0;
	teste = caminho(N, A, ijpeso, aberto, inicio, fim, chave);
	imprimeResposta(teste, inicio - 1, fim - 1, noTeste, aberto, N, chave);
	noTeste++;
	printf("\n");

	inicio = 9;
	fim = 4;
	chave = 7;
	todasAbertas(aberto, N);
	teste = caminho(N, A, ijpeso, aberto, inicio, fim, chave);
	imprimeResposta(teste, inicio - 1, fim - 1, noTeste, aberto, N, chave);
	noTeste++;
	printf("\n");

	inicio = 9;
	fim = 4;
	chave = 7;
	aberto[2] = 0;
	teste = caminho(N, A, ijpeso, aberto, inicio, fim, chave);
	imprimeResposta(teste, inicio - 1, fim - 1, noTeste, aberto, N, chave);
	noTeste++;
	printf("\n");

	inicio = 9;
	fim = 4;
	chave = 7;
	aberto[1] = 0;
	aberto[2] = 0;
	teste = caminho(N, A, ijpeso, aberto, inicio, fim, chave);
	imprimeResposta(teste, inicio - 1, fim - 1, noTeste, aberto, N, chave);
	noTeste++;
	printf("\n");

	inicio = 9;
	fim = 4;
	chave = 7;
	todasAbertas(aberto, N);
	aberto[8] = 0;
	teste = caminho(N, A, ijpeso, aberto, inicio, fim, chave);
	imprimeResposta(teste, inicio - 1, fim - 1, noTeste, aberto, N, chave);
	noTeste++;
	printf("\n");

	inicio = 8;
	fim = 6;
	chave = 3;
	todasAbertas(aberto, N);
	aberto[2] = 0;
	aberto[5] = 0;
	aberto[6] = 0;
	teste = caminho(N, A, ijpeso, aberto, inicio, fim, chave);
	imprimeResposta(teste, inicio - 1, fim - 1, noTeste, aberto, N, chave);
	noTeste++;
	printf("\n");

	inicio = 8;
	fim = 6;
	chave = 3;
	todasAbertas(aberto, N);
	aberto[1] = 0;
	aberto[5] = 0;
	aberto[6] = 0;
	teste = caminho(N, A, ijpeso, aberto, inicio, fim, chave);
	imprimeResposta(teste, inicio - 1, fim - 1, noTeste, aberto, N, chave);
	noTeste++;
	printf("\n");

	return 0;
}
