#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

//1
ArrayList *createList(void) {
  ArrayList * list = (ArrayList *)malloc(sizeof(ArrayList));
  list->data = (void **)malloc(2*sizeof(void**));
  list->size = 0;
  list->capacity = 2;
  return list;
}

void append(ArrayList * l, void * data){
  if(l->size == l->capacity){
    l->capacity *= 2;
    l->data = realloc(l->data,l->capacity*sizeof(void**));
  }
  
  l->data[l->size] = data;
  l->size++;
}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
