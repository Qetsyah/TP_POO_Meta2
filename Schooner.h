/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Schooner.h
 * Author: vasco
 *
 * Created on 2 de Janeiro de 2019, 23:29
 */

#ifndef SCHOONER_H
#define SCHOONER_H

#include "Ship.h"

class Schooner: public Ship {
public:
    Schooner(Cell * p, char i, int sold, int wat, int cp);
    //Schooner(const Schooner& orig);
    virtual ~Schooner();
};

#endif /* SCHOONER_H */

