//
// Created by jeana on 26/03/2024.
//
#include "wagon.h"

const char sprite[WAGON_HEIGHT][WAGON_LENGTH] = {
        {'|', ' ', ' ', ' ', ' ', '|'},
        {' ', '_', '_', '_', '_', ' '},
        {' ', 'o', ' ', ' ', 'o', ' '}
};

Wagon* createEmptyWagon() {
    Wagon* newWagon = (Wagon*) malloc(sizeof(Wagon));
    for (int row = 0; row < WAGON_HEIGHT; row++) {
        for(int column = 0; column < WAGON_LENGTH; column++) {
            newWagon->sprite[row][column] = sprite[row][column];
        }
    }
    for (int i = 0; i < WAGON_CAPACITY; i++) {
        newWagon->stuff[i] = ' ';
    }
    newWagon->stuffQuantity = 0;
    newWagon->next = NULL;
    return newWagon;
}

void deleteWagon(Wagon **wagon) {
    free(*wagon);
    *wagon = NULL;
}

void displayWagon(Wagon *wagon) {
    for (int row = 0; row < WAGON_HEIGHT; row++) {
        for(int column = 0; column < WAGON_LENGTH; column++) {
            if ((row == 0) && ((column != 0) || (column == WAGON_LENGTH-1))) {
                printf("%c", wagon->stuff[column - 1]);
            } else {
                printf("%c", wagon->sprite[row][column]);
            }
        }
        printf("%c", '\n');
    }
}

void addStuff(Wagon *wagon, char stuff) {
    if (wagon->stuffQuantity < WAGON_CAPACITY) {
        wagon->stuff[wagon->stuffQuantity++] = stuff;
    }
}
