/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Galleon.h
 * Author: vasco
 *
 * Created on 2 de Janeiro de 2019, 23:24
 */

#ifndef GALLEON_H
#define GALLEON_H

#include "Ship.h"

class Galleon: public Ship {
public:
    Galleon(Cell * p, char i, int sold, int wat, int cp);
    //Galleon(const Galleon& orig);
    virtual ~Galleon();
};

#endif /* GALLEON_H */

