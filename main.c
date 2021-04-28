#include <stdio.h>
#include "projeto.h"

void fimPrograma (int *x);

int main (void) {
  
  int numeroMenu;
  
  printf("\nComo você deseja ajudar hoje?\n");
  printf(" 1 - Seu tempo\n 2 - Comida\n 3 - Dinheiro\n 4 - Produto de limpeza\n 5 - Fralda\n 6 - Ração\n 7 - Material escolar\n 8 - Brinquedos\n 9 - Objetos\n10 - Livros\n11 - Calçados\n12 - Roupas infantis\n13 - Roupas de adulto\n14 - Roupa de cama\n15 - Móveis\n16 - Higiene pessoal\n17 - Conhecimento\n18 - Cadastrar projetos sociais\n\n");

while (1){

  switch (numeroMenu) {

    default: // caso nenhuma das opções forem escolhidas
    scanf("%i", &numeroMenu);
    if ((numeroMenu < 1 ) || (numeroMenu >18)) {
      printf("\nOpção inválida. Tente novamente.\n");
      printf("Como você deseja ajudar hoje?\n");
    }
    break; 
       
    case 1:
      tempoDoar();
      fimPrograma(&numeroMenu);
    break;

    case 2:
      comidaDoar();
      fimPrograma(&numeroMenu);
    break;

    case 3:
      dinheiroDoar();
      fimPrograma(&numeroMenu);
    break;

    case 4:
    case 5:
      prodLimpeDoar();
      fimPrograma(&numeroMenu);
    break;

    case 6:
      racaoDoar();
      fimPrograma(&numeroMenu);
    break;

    case 7:
    case 8:
      matEscolaDoar();
      fimPrograma(&numeroMenu);
    break;

    case 9:
      objetosDoar();
      fimPrograma(&numeroMenu);
    break;

    case 10:
    case 11:
      livrosDoar();
      fimPrograma(&numeroMenu);
    break;

    case 12:
      roupaInfanDoar();
      fimPrograma(&numeroMenu);
    break;

    case 13:
      roupAdultoDoar();
      fimPrograma(&numeroMenu);
    break;

    case 14:
      roupaCamaDoar();
      fimPrograma(&numeroMenu);
    break;

    case 15:
      moveisDoar();
      fimPrograma(&numeroMenu);
    break;

    case 16:
      higienePessoaDoar();
      fimPrograma(&numeroMenu);
    break;

    case 17:
      conhecimDoar();
      fimPrograma(&numeroMenu);
    break;

    case 18:
      cadastroOng();
      fimPrograma(&numeroMenu);
    break;

    case 100:
    return 0;
  }
} 
}
void fimPrograma(int *x){
  *x = 100;

};