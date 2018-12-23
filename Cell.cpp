/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cell.cpp
 * Author: vasco
 * 
 * Created on 6 de Novembro de 2018, 17:20
 */

#include "Cell.h"


char Cell::getIcon() const{
    return icon;
}

int Cell::getX() const{
    return x;
}

int Cell::getY() const{
    return y;
}
