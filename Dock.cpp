/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dock.cpp
 * Author: vasco
 * 
 * Created on 26 de Outubro de 2018, 23:39
 */


#include "Dock.h"

Dock::Dock(int s, Cell* p):thisIsMe(p){
    soldiers = s;
}
bool Dock::setSoldiers(int x){
    soldiers = x;
}

Dock::~Dock() {
}

int Dock::getSoldiers() const{
    return soldiers;
}

Cell* Dock::getThisIsMe() const{
    return thisIsMe;
}

