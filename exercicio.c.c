#include <stdio.h>
#include <stdlib.h>

/* Aluno: Gabriel Miller Silone | RA: 234930*/

void criptografar(){

	FILE *arquivo;
	arquivo=fopen("entrada.txt","r"); //arquivo onde colocar a mensagem para criptografar
	FILE *saida;
	saida=fopen("criptografado.txt","w+"); //arquivo com a mensagem criptografada
	
	char c;
	char d;
	c=fgetc(arquivo);
	
	while (!feof(arquivo)){
		d=c +3;
		fputc(d,saida);
		c=fgetc(arquivo);
	}
	
	fclose(arquivo);
}

void descriptografar(){
	
	FILE *arquivo;
	arquivo=fopen("criptografado.txt","r"); //arquivo com a mensagem criptografada
	FILE *saida;
	saida=fopen("decodificado.txt","w+"); //arquivo com a mensagem descriptografada
	
	char c;
	char d;
	
	c=fgetc(arquivo);
	while (!feof(arquivo))
	{
		d=c - 3;
		fputc(d,saida);
		c=fgetc(arquivo);
	}
	
	fclose(arquivo);
}


int main(arquivo) {
	
	int op;
	
	printf ("\n--------------------------------------------\n");
    printf ("\n -- Sistema de Criptografia - CifraCesar --\n");
    printf ("\n--------------------------------------------\n");

    printf ("\t\t Escolha uma Opcao: \n\n");

            printf ("1-)Criptografar Texto \n");
            printf ("2-)Decifrar Codigo \n");
            printf ("0-)Sair \n");
            scanf  ("%d",&op);

            if (op ==  1)
                {
                    criptografar();
                    system("cls");
                    printf("Arquivo Criptografado.\nAbra o arquivo criptografado.txt!\nPara uma nova operacao, por favor compilar de novo!");
                }

            else if (op == 2)
                {
                    descriptografar();
                    system("cls");
					printf("Arquivo Descriptografado.\nAbra o arquivo descriptografado.txt!\nPara uma nova operacao, por favor compilar de novo!");
                }
                
            else if (op == 0)
                {
                    return 0;
                }
	
	return 0;
}
