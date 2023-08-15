# Gerenciador de Busca de Carros - C++

Objetivo: Manipula uma lista com alocação contínua (vetores) numa aplicação que manipula informações de veículos de um site de busca para compra e venda.

Descrição: O aplicativo desenvolvido no projeto dgerencia listas de veículos em vetores de ponteiros para registros (structs). Cada linha do arquivo de entrada ou saída contém informações de apenas um veículo, conforme o modelo apresentado no arquivo-texto de exemplo “BD_veículos_2.txt”. Uma lista geral é criada seguindo a ordem apresentada no arquivo-texto, e novas listas são para ação quando for necessário. Além disso, também implementa as funções de inserção e remoção de veículos na lista principal, e novas listas quando necessário. Os vetores tem o limite máximo de 50 elementos. Ao final da execução, os dados são escritos novamente no arquivo-texto.

Arquivo de Clientes: Contém um número máximo de 50 linhas, onde cada linha contém 13 campos: modelo, marca, tipo, ano, quilometragem, potência do motor, combustível, câmbio, direção, cor, número de portas, placa e valor do veículo.

Requisitos: O aplicativo possui:

Apresentação um menu ao usuário com as opções de inclusão, 2 buscas e ordenação;
Inicialmente a lista é mantida na memória num vetor de ponteiros de registros (structs) na ordem de leitura do arquivo-texto;
Operações de busca: Busca de algum veículo pela placa, com opção de exclusão quando o veículo for encontrado. Busca dos 10 veículos mais próximos: o usuário deverá entrar com um valor de compra e o resultado deve ser no máximo os 10 veículos com valores mais próximos, na ordem do mais próximo até o mais distante do valor;
A operação de ordenação consiste em criar um segundo vetor de ponteiros de registros (structs) de 50 posições que aponta para os registros já alocados na leitura do arquivo-texto mas na ordem crescente indicados pelas placas dos veículos.
