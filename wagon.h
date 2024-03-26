//
// Created by jeana on 26/03/2024.
//
#include <stdlib.h>
#include <stdio.h>

#ifndef KATA_TRAIN_WAGON_H
#define KATA_TRAIN_WAGON_H

#define WAGON_HEIGHT 3
#define WAGON_LENGTH 6
#define WAGON_CAPACITY 4

typedef struct Wagon {
    char sprite[WAGON_HEIGHT][WAGON_LENGTH];
    char stuff[WAGON_CAPACITY];
    int stuffQuantity;
    struct Wagon* next;
} Wagon;

Wagon* createEmptyWagon();
void deleteWagon(Wagon **wagon);
void displayWagon(Wagon *wagon);
void addStuff(Wagon *wagon, char stuff);

#endif //KATA_TRAIN_WAGON_H
