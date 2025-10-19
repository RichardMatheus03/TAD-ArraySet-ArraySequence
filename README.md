### **Alunos**

Richard Matheus Bezerra Ataliba (20240023956)

Jarlisson Ivis dos Santos Barreto (20240023061)

**Link do repositório da implementação**

https://github.com/RichardMatheus03/TAD-ArraySet-ArraySequence

# Descrição dos métodos - ArraySet

## Construtor

- **Parâmetros:** `capacity` (opcional) - A capacidade inicial do conjunto.
- **Descrição:** Inicializa um novo conjunto. Pode receber uma capacidade inicial ou usar um valor padrão.
- **Retorno:** Nenhum.

## add

- **Parâmetros:** `element` - O elemento a ser adicionado.
- **Descrição:** Adiciona um elemento ao conjunto, se houver capacidade e o elemento não existir.
- **Retorno:** `true` se o elemento for adicionado, `false` caso contrário.

## contains

- **Parâmetros:** `element` - O elemento a ser verificado.
- **Descrição:** Verifica se um elemento está presente no conjunto usando o algoritmo de busca sequencial.
- **Retorno:** `true` se o elemento existir, `false` caso contrário.

## remove

- **Parâmetros:** `element` - O elemento a ser removido.
- **Descrição:** Remove um elemento do conjunto. Também usa o algoritmo de busca sequencial para verificar se o elemento está no conjunto.
- **Retorno:** `true` se o elemento for removido, `false` se não for encontrado.

## size

- **Parâmetros:** Nenhum.
- **Descrição:** Retorna o número de elementos no conjunto.
- **Retorno:** A quantidade de elementos no conjunto.

## isEmpty

- **Parâmetros:** Nenhum.
- **Descrição:** Verifica se o conjunto está vazio.
- **Retorno:** `true` se o conjunto estiver vazio, `false` caso contrário.

## Print do terminal ao executar os testes

 

![image.png](attachment:94c6b766-5417-4757-8698-4bcaf1dd3df6:image.png)

# Descrição dos métodos - ListSequence

## Construtor

- **Parâmetros:** Nenhum.
- **Descrição:** Inicializa uma nova sequência vazia.
- **Retorno:** Nenhum.

## Destrutor

- **Parâmetros:** Nenhum.
- **Descrição:** Libera a memória alocada para os nós da sequência.
- **Retorno:** Nenhum.

## get

- **Parâmetros:** `i` - A posição do elemento na sequência.
- **Descrição:** Retorna o elemento na i-ésima posição da sequência.
- **Retorno:** O elemento na posição `i`.

## insert

- **Parâmetros:**
    - `i` - A posição onde o elemento será inserido.
    - `element` - O elemento a ser inserido.
- **Descrição:** Insere um elemento na i-ésima posição da sequência.
- **Retorno:** Nenhum.

## insertBegin

- **Parâmetros:** `element` - O elemento a ser inserido.
- **Descrição:** Insere um elemento no início da sequência.
- **Retorno:** Nenhum.

## insertEnd

- **Parâmetros:** `element` - O elemento a ser inserido.
- **Descrição:** Insere um elemento no final da sequência.
- **Retorno:** Nenhum.

## remove

- **Parâmetros:** `i` - A posição do elemento a ser removido.
- **Descrição:** Remove o elemento na i-ésima posição da sequência.
- **Retorno:** O elemento removido.

## removeBegin

- **Parâmetros:** Nenhum.
- **Descrição:** Remove o primeiro elemento da sequência.
- **Retorno:** O elemento removido.

## removeEnd

- **Parâmetros:** Nenhum.
- **Descrição:** Remove o último elemento da sequência.
- **Retorno:** O elemento removido.

## getFirst

- **Parâmetros:** Nenhum.
- **Descrição:** Retorna o primeiro nó da sequência.
- **Retorno:** Um ponteiro para o primeiro nó.

## print

- **Parâmetros:** Nenhum.
- **Descrição:** Imprime os elementos da sequência no console.
- **Retorno:** Nenhum.

## isEmpty

- **Parâmetros:** Nenhum.
- **Descrição:** Verifica se a sequência está vazia.
- **Retorno:** `true` se a sequência estiver vazia, `false` caso contrário.

## getQuantity

- **Parâmetros:** Nenhum.
- **Descrição:** Retorna o número de elementos na sequência.
- **Retorno:** A quantidade de elementos.

## Print do terminal ao executar os testes

![image.png](attachment:8084d6c5-4ede-4f60-b568-92fe4a7440b9:image.png)
