# Aula 04 - VPL 01 - Ranking (4 pts)

## Data de entrega: segunda, 31 Ago 2020, 23:59

## Arquivos requeridos: main.cpp, Estudante.cpp (Baixar)

Tipo de trabalho: Trabalho individual

**A interface de um TAD que representa um estudante já foi definida no arquivo Estudante.hpp. Como atributos esse TAD possui o nome, número de matrícula e notas (exatamente 5). A única operação especificada é calcularRSG(). Essa função deve calcular a média e retornar como um float. Inicialmente, você deve escrever a implementação para esse TAD.**

**Em seguida, escreva um programa que lê as informações de exatamente 10 alunos como entrada e os salva em um vetor. Em seguida, ele deve escrever na saída a matrícula, nome e o RSG dos três melhores alunos de forma ordenada pelo RSG (do maior para o menor). O RSG deve ser escrito com precisão de 2 casas decimais*. Em caso de empate, selecione o que possuir a menor matrícula.**

**Exemplo:**

input = 

2015000111 João 60 60 55 82 90

2015111222 Maria 85 83 60 75 61

2015222333 Carlos 72 99 80 73 78

2015333444 Felipe 89 67 72 75 80

2015444555 Carolina 55 83 95 92 60

2015555666 Joana 64 67 69 69 65

2015666777 Gabriel 93 85 95 87 91

2015777888 Fernanda 82 66 78 65 77

2015888999 Daniel 68 71 72 77 77

2015999000 Marcos 77 57 60 58 58

output =

2015666777 Gabriel 90.20

2015222333 Carlos 80.40

2015444555 Carolina 77.00

Você pode copiar o arquivo Estudante.hpp aqui caso queira testar localmente.

*Referências:*

http://www.cplusplus.com/reference/iomanip/setprecision/

*Arquivos requeridos:*

main.cpp Estudante.cpp

*******************************
2015000111 João 60 60 55 82 90
2015111222 Maria 85 83 60 75 61
2015222333 Carlos 72 99 80 73 78
2015333444 Felipe 89 67 72 75 80
2015444555 Carolina 55 83 95 92 60
2015555666 Joana 64 67 69 69 65
2015666777 Gabriel 93 85 95 87 91
2015777888 Fernanda 82 66 78 65 77
2015888999 Daniel 68 71 72 77 77
2015999000 Marcos 77 57 60 58 58