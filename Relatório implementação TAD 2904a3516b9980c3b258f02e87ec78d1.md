# Relatório implementação TAD

### Alunos

Richard Matheus Bezerra Ataliba (20240023956)

Jarlisson Ivis dos Santos Barreto (20240023061)

# Classe e implementação - ArraySet

# Class Set

## Métodos

- Construtor

Existem dois construtores para a classe Set. Um que inicializa a capacidade do conjunto de acordo com o valor fornecido no construtor; O outro permite que o objeto seja inicializado sem passar a capacidade como parâmetro usando uma capacidade constate definida no arquivo Set.hpp na const int CAPACITY_DEFAULT = 17;

- add

O método **Add** é responsável por inserir novos elementos no conjunto.
Antes de realizar a inserção, ele executa duas verificações:
• **Capacidade:** certifica-se de que ainda há espaço disponível no conjunto.
• **Duplicidade:** verifica se o elemento já existe no conjunto, evitando repetições.
Somente após passar por essas duas verificações, o elemento é adicionado com sucesso ao conjunto.

Retorna True ou False se não passar nas verificações

- contains

Usa o algoritmo de busca sequencial para verificar se o elemento passado como parâmetro está ou não presente no conjunto

Retorna True se o elemento for encontrado, ou False se não.

- remove

O remove recebe um elemento como parâmetro e usa o algoritmo de busca sequencial para localizar o index do elemento, e então remove o elemento movendo cada próximo elemento
ao índice atual após isso reduz a quantidade de elementos no conjunto

Retorna False se o elemento não estiver no conjunto, e retorna True se for removido com sucesso

- size

Retorna apenas a quantidade de elementos presentes no conjunto

- isEmpty

Retorna True se o conjunto estiver vazio, e False se não