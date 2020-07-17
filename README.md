# RankingCasasPop

Esse arquivo de texto contém as considerações de implementação de um [desafio técnico](https://www.notion.so/Desafio-t-cnico-2f53347cf16a418fb75c67c978ab1a0e).


## Implementação

Buscando simplicidade, foi utilizada a linguagem C++. O banco de dados foi abstraído com um Tipo Abstrato de Dados, agregando tudo em um arquivo chamado `Familias.json`, na pasta `Data`. O envio para o módulo Contemplados é feito com o método `sendToContemplados`, e para fins de teste, gera uma impressão na tela com as informações requisitadas.

## Algoritmo

Para gerar uma lista ordenada de famílias que obedecem aos critérios estabelecidos, a classe `Ranking` foi criada, responsável por fazer as verificações e somar os pontos. Em resumo, o método `getRanking`:

- Recebe uma família, definida pela classe `Family`;
- Inicialmente descarta famílias inaptas com o método `isQualified`, que considera os critérios estabelecidos;
- Soma o total de pontos, acessando métodos separados para cada critério.

Separando os critérios em métodos, mantém-se um sistema coeso. Se novos critérios forem requisitados, eles podem facilmente ser adicionados com a inclusão de novos métodos.

Ao final, obtém-se uma lista de famílias com suas devidas pontuações, que é ordenada e enviada ao módulo contemplados com `sendToContemplados`.
