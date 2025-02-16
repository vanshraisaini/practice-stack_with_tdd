#include "my_stack/my_stack.h"
#include <stdexcept>

stack::stack(){
    this->length = 0;
}

int stack::get_size(){
    return this->length;
}

void stack::push(int element){
    if(this->length==10){
        throw std::runtime_error("Stack Overflow");
    }   
    this->data[length] = element;
    length++;
}

int stack::pop(){
    if(this->length == 0){
        throw std::runtime_error("Stack Underflow");
    }
    int aPoppedElement = this->data[length-1];
    length--;
    return aPoppedElement;
}