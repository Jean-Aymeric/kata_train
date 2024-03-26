//
// Created by jeana on 26/03/2024.
//
#include "wagon.h"

#ifndef KATA_TRAIN_TRAIN_H
#define KATA_TRAIN_TRAIN_H

typedef Wagon* Train;

Train createTrain();
void deleteTrain(Train *train);
void addWagonToTrain(Train train, Wagon* wagon);
void displayTrain(Train train);

#endif //KATA_TRAIN_TRAIN_H
