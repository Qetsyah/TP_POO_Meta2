/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Frigate.h
 * Author: vasco
 *
 * Created on 2 de Janeiro de 2019, 23:30
 */

#ifndef FRIGATE_H
#define FRIGATE_H

#include "Ship.h"

class Frigate: public Ship {
public:
    Frigate(Cell * p, char i, int sold, int wat, int cp);
    //Frigate(const Frigate& orig);
    virtual ~Frigate();
};

#endif /* FRIGATE_H */

