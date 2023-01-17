# Greed_DryCleanShop

**Número da Lista**: 24<br>
**Conteúdo da Disciplina**: Greed<br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 18/0117548  |  [Bruno Carmo Nunes](https://github.com/brunocmo) |
| 17/0150747  |  [Marcos Vinícius Rodrigues da Conceição](https://github.com/marcos-mv) |

## Video

## Sobre

O projeto tem a implementação de pequena empresa de lavanderia chamada DryClothes, onde tem como início das operações às 8 horas e termina às 17 horas. Os clientes deixam na lavanderia seu nome, quantidade e o tempo que podem buscar seus conjuntos de roupas e tecidos. Com a ajuda do algoritmo ganancioso minimize lateness, iremos otimizar a ordem do trabalho na empresa.

## Screenshots

## Instalação
**Linguagem**: C++<br>

Feito e usado no kernel: **GNU/Linux 6.1.1-arch1-1 x86_64**

Tenha o *git*, *make* e o compilador *c++* versão C++11 instalado na sua maquina.
De preferência, para não ocorrer problemas, use o Ubuntu.

Para clonar:

`git clone https://github.com/projeto-de-algoritmos/Greed_DryClothes.git`

Para compilar o programa:

`make`

Para executar o programa:

`make run`

Para limpar os arquivos .o e bin do programa:

`make clean`

## Uso
Primeiro compile o programa com o `make` e depois execute o programa com `make run` , vai apresentar-se na tela inicial um menu, onde o usuário pode escolher inserir conjunto de roupas, listar pedidos e gerar otimização.

Na opção 1, você coloca o Nome (sem sobrenome e não composto), número de conjunto de roupas, e o prazo estimado pelo empregado.

Na opção 2, irá mostrar uma lista das informações de cada pedido do cliente, onde nota-se que o campo Tempo ideal de lavagem será a quantidade necessario para lavar o conjunto.

Depois de inserido a quantidade desejada de roupas e tecidos, a opção 3 serve para gerar a otimização da ordem dos serviços sobre os conjuntos. Onde irá apresentar o nome do cliente, dia e horário para o cliente resgatar sua propriedade, e também, o atraso relacionado a estimativa.

Por fim a opção 0 para sair do programa.

## Outros
Quando executar o programa no CLI, use-o em tela cheia para melhor aproveitamento do mesmo.

