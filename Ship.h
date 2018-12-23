/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ship.h
 * Author: vasco
 *
 * Created on 26 de Outubro de 2018, 23:39
 */

#ifndef SHIP_H
#define SHIP_H

#include "Cell.h"


class Ship {
    int ID;
    static int counter;
    Cell* position;
    
public:
    Ship(Cell* p);
    ~Ship();
    
    
    bool changePosition();  // aqui temos de mandar a posição nova
    
//Gets
    int getId() const;
    Cell* getPosition() const;
};

#endif /* SHIP_H */