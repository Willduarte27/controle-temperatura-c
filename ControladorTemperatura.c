#include <stdio.h>
#include <stdlib.h>


// Registra a entrada da temperatura do usuário
float LerTemperatura()
     {
        float temperatura;
        printf("Digite a temperatura atual:  ")
         scanf("%f", &temperatura);
         return temperatura
     }

 // Análisa a temperatura de acordo com a condicao definida
int AnalisarTemperatura(float temperatura)
{
    if(temperatura < 18)
        {
        return 1;
        }
    else if (temperatura > 25)
        {
        return 2;
        }
    else
    {
        return 3;
    }

}
// Exibe o resultado de acordo com a condicao anterior
void ExibirResultado(int resultado)
    {
        if(resultado == 1)
            {
                printf("Aquecendo!")
            }
        else if (resultado == 2)
            {
               printf("Resfriando !")
            }
        else
            {
                printf("Temperatura Estável!")
            }

    }

int main()
{
    int opcao = 1;

    // Loop para voltar a primeira funcao ou sair do sistema
    while (opcao == 1)
    {
        float temperatura = LerTemperatura();
        int analise = AnalisarTemperatura(temperatura);
        ExibirResultado(analise);

        printf("\nDeseja testar novamente? (1 - Sim / 2 - Nao): ");
        scanf("%d", &opcao);
        printf("\n-----------------------------------\n\n");
    }

    printf("Programa encerrado.\n");
    return 0;
}
