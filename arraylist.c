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
  list->data = (void **) malloc(2*sizeof(void**));
  list->size = 0;
  list->capacity = 2;
  return list;
}

//2
void append(ArrayList * l, void * data){
  if(l->size == l->capacity){
    l->capacity *= 2;
    l->data = realloc(l->data, l->capacity*sizeof(void**));
  }
  
  l->data[l->size] = data;
  l->size++;
}

//3
void push(ArrayList * l, void * data, int i){
  if(i > l->size) return;
  
  if(l->size == l->capacity){
    l->capacity *= 2;
    l->data = realloc(l->data, l->capacity*sizeof(void**));
  }

  for(int j = l->size ; j > i ; j--)
  {
    l->data[j] = l->data[j-1];
  }

  l->data[i] = data;
  l->size++;
}

//4
void* get(ArrayList * l, int i){
  if(i >= l->size) return NULL;
  
  if(i < 0)
  {
    return l->data[i+l->size]; 
  }
  return l->data[i];
}

//5
void* pop(ArrayList * l, int i){
  if(l->size == 0) return NULL;
  
  if(i < 0){
    i = i+l->size;
    return NULL;
}

//6
//remove elements
void clean(ArrayList * l){

}

int get_size(ArrayList * l){
    return l->size;
}