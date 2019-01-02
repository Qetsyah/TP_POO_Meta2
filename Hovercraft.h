/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hovercraft.h
 * Author: vasco
 *
 * Created on 2 de Janeiro de 2019, 23:07
 */

#ifndef HOVERCRAFT_H
#define HOVERCRAFT_H

#include "Ship.h"

class Hovercraft: public Ship {
public:
    Hovercraft(Cell * p, char i, int sold, int wat, int cp);
    //Hovercraft(const Hovercraft& orig);
    virtual ~Hovercraft();
};

#endif /* HOVERCRAFT_H */

