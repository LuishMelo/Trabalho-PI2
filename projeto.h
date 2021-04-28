#include <stdio.h>
#include <math.h>

extern void tempoDoar();
extern void comidaDoar();
extern void dinheiroDoar();
extern void prodLimpeDoar();
extern void metersToCentimeters();
extern void fraldaDoar();
extern void racaoDoar();
extern void matEscolaDoar();
extern void brinqueDoar();
extern void objetosDoar();
extern void livrosDoar();
extern void calcadosDoar();
extern void roupaInfanDoar();
extern void roupAdultoDoar();
extern void roupaCamaDoar();
extern void moveisDoar();
extern void higienePessoaDoar();
extern void conhecimDoar();
extern void cadastroOng();

extern void tempoDoar() {
  int alternativa1;
  printf("\nCom o que você quer ajudar hoje?\n");
  printf("1) Ação na rua   2) Serviços diversos\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Com o que você quer ajudar hoje?\n");
  printf("1) Ação na rua   2) Serviços diversos\n");  
  scanf("%i", &alternativa1);
  }
  printf("\nEm que região da cidade você deseja relizar essa ajuda?\n");
  printf("1) Zona Norte   2) Zona Sul   3) Zona Oeste   4) Centro\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Em que região da cidade você deseja relizar essa ajuda?\n");
  printf("1) Zona Norte   2) Zona Sul   3) Zona Oeste   4) Centro\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}
extern void comidaDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Crianças   2) Idosos   3) Pessoas em situação de rua   4) Hospitais\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Crianças   2) Idosos   3) Pessoas em situação de rua   4) Hospitais\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}
extern void dinheiroDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Crianças   2) Idosos   3) Pessoas em situação de rua   4) Hospitais\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Crianças   2) Idosos   3) Pessoas em situação de rua   4) Hospitais\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere enviar a quantia?\n");
  printf("1) Cartão de crédito   2) Boleto   3) Pix   4) Dinheiro\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere enviar a quantia?\n");
  printf("1) Cartão de crédito   2) Boleto   3) Pix   4) Dinheiro\n");
  scanf("%i", &alternativa1);
 }
 printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}
extern void prodLimpeDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Hospitais   3) Orfanatos   4) Creches\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Hospitais   3) Orfanatos   4) Creches\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}

//extern void fraldaDoar() {
//}  
 
extern void racaoDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Cães   2) Gatos   3) Outros\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >3)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Cães   2) Gatos   3) Outros\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}
extern void matEscolaDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Orfanatos   2) Creches   3) Outros\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >3)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Orfanatos   2) Creches   3) Outros\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");  
}
//extern void brinqueDoar() {
//  }

extern void objetosDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Hospitais   3) Orfanatos   4) Creches   5) Outros\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >5)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Hospitais   3) Orfanatos   4) Creches   5) Outros\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}
extern void livrosDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Orfanatos   3) Creches   4) Outros\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Orfanatos   3) Creches   4) Outros\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}
//extern void calcadosDoar() {
//}

extern void roupaInfanDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Creches   2) Hospital Infantil   3) Orfanatos   4) Outros\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Creches   2) Hospital Infantil   3) Orfanatos   4) Outros\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}

extern void roupAdultoDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Hospitais   3) Pessoas em situação de rua   4) Outros\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Hospitais   3) Pessoas em situação de rua   4) Outros\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}

extern void roupaCamaDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Hospitais   3) Orfanatos   4) Creches   5) Outros\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >5)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Hospitais   3) Orfanatos   4) Creches   5) Outros\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}

extern void moveisDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Orfanatos   3) Creches   4) Outros\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Orfanatos   3) Creches   4) Outros\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}

extern void higienePessoaDoar() {
  int alternativa1;
  printf("\nQuem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Hospitais   3) Orfanatos   4) Creches   5) Pessoas em situação de rua   6) Outros\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >6)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Quem você quer ajudar?\n");
  printf("1) Lar de idosos   2) Hospitais   3) Orfanatos   4) Creches   5) Pessoas em situação de rua   6) Outros\n");
  scanf("%i", &alternativa1);
  }
  printf("\nComo você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Como você prefere que seja feita a entrega da doação?\n");
  printf("1) Peguem em minha residência   2) Entregar no endreço escolhido pelo projeto social\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}

extern void conhecimDoar() {
  int alternativa1;
  printf("\nCom o que você quer ajudar hoje?\n");
  printf("1) Aulas   2) Palestras\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >2)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Com o que você quer ajudar hoje?\n");
  printf("1) Aulas   2) Palestras\n");  
  scanf("%i", &alternativa1);
  }
  printf("\nEm que região da cidade você deseja relizar essa ajuda?\n");
  printf("1) Zona Norte   2) Zona Sul   3) Zona Oeste   4) Centro\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Em que região da cidade você deseja relizar essa ajuda?\n");
  printf("1) Zona Norte   2) Zona Sul   3) Zona Oeste   4) Centro\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Você encontrou uma instituição para poder ajudar hoje----\n");
}

extern void cadastroOng() {
  int alternativa1;
  char nome[61], nome1[61], instagram[61], alvo[61];
  printf("\nPrimeiro nome do projeto social: ");
  scanf("%s", nome);
  printf("\nÚltimo nome do projeto social: ");
  scanf("%s", nome);
  printf("\nRede social: ");
  scanf("%s", instagram);
  printf("\nLocal onde atua:\n");
  printf("1) Zona Norte   2) Zona Sul   3) Zona Oeste   4) Centro\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >4)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Local onde atua:\n");
  printf("1) Zona Norte   2) Zona Sul   3) Zona Oeste   4) Centro\n");
  scanf("%i", &alternativa1);
  }
  printf("\nPúblico que atende:\n");
  printf("1) Lar de idosos   2) Hospitais   3) Orfanatos   4) Creches   5) Pessoas em situação de rua   6) Outros\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >6)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Público que atende:\n");
  printf("1) Lar de idosos   2) Hospitais   3) Orfanatos   4) Creches   5) Pessoas em situação de rua   6) Outros\n");
  scanf("%i", &alternativa1);
  }
  printf("\nDoações que aceita:\n");
  printf("1) Trabalho voluntário   2) Comida   3) Dinheiro   4) Ração   5) Livros   6) Brinquedos   7)Roupas   8) Material escolar   9) Produtos de higiene pessoal\n");
  scanf("%i", &alternativa1);
  while ((alternativa1 < 1) || (alternativa1 >9)) {
  printf("\nEscolha uma das alternativas possíveis\n");
  printf("Doações que aceita:\n");
  printf("1) Trabalho voluntário   2) Comida   3) Dinheiro   4) Ração   5) Livros   6) Brinquedos   7)Roupas   8) Material escolar   9) Produtos de higiene pessoal\n");
  scanf("%i", &alternativa1);
  }
  printf("\n----Parabéns! Cadastro efetuado com sucesso----\n");
}
