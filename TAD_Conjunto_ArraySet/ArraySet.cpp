//
//  ArraySet.cpp
//  ArraySet
//

#include "Set.hpp"

Set::Set(){
    this->capacity = CAPACITY_DEFAULT;
    
    array = new std::string[this->capacity];
    
    this->quantity = 0;
    this->insertPosition = 0;
}

Set::Set(int initialCapacity){
    this->capacity = initialCapacity;
    
    array = new std::string[this->capacity];
    
    this->quantity = 0;
    this->insertPosition = 0;
}

Set::~Set(){
    delete [] array;
}

bool Set::add(std::string s){

    //Verifica se o elemento está no conjunto
    if (this->contains(s)){
        return false;
    }
    
    //Verifica se há espaço
    else if(this->quantity >= this->capacity){
        return false;
    }
    
    //Adiciona elemento e atualiza quantidade
    else{
        this->array[this->quantity] = s;
        this->quantity++;

        //retorna o true
        return true;
    }

}

bool Set::contains(std::string s){
    for( int i = 0; i < this->quantity; ++i ){
        if( array[i] == s ){
            return true;
        }
    }
    return false;
}

bool Set::remove(std::string s){

    int indexToRemove = -1;

    //Busca sequencial para encontrar o índice do elemento
    for (int i = 0; i < this->quantity; ++i){
        if(this->array[i] == s){
            indexToRemove = i;
            break;
        }
    }

    //Se não encontrar o elemento, retorna false
    if(indexToRemove == -1){
        return false;
    }

    //Remove o elemento movendo cada próximo elemento
    //ao índice atual
    if(indexToRemove != this->quantity - 1){
        this->array[indexToRemove] = this->array[this->quantity - 1];
    }

    //reduz a quantidade
    this->quantity--;

    //retorna true
    return true;
}

int Set::size(){
    return this->quantity;
}

bool Set::isEmpty(){
    return this->quantity == 0;
}
