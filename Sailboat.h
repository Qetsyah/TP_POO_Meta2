/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sailboat.h
 * Author: vasco
 *
 * Created on 25 de Dezembro de 2018, 17:48
 */

#ifndef SAILBOAT_H
#define SAILBOAT_H

#include "Ship.h"

class Sailboat: public Ship{
public:
    Sailboat(Cell * p);
    //Sailboat(const Sailboat& orig);
    virtual ~Sailboat();
};

#endif /* SAILBOAT_H */

