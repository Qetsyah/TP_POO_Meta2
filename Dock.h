/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dock.h
 * Author: vasco
 *
 * Created on 26 de Outubro de 2018, 23:39
 */

#ifndef DOCK_H
#define DOCK_H


#include "Cell.h"

class Dock {
    unsigned int soldiers;
    Cell* thisIsMe;

public:

    Dock(int s, Cell* p);
    ~Dock();

//Sets
    bool setSoldiers(int x);
//Gets
    int getSoldiers() const; 
    Cell* getThisIsMe() const;

};

#endif /* DOCK_H */