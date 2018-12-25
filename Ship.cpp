/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * escuna = schooner
 * galeao = galeon
 * veleiro = sailboat
 * frigata = frigate  
*/

/* 
 * File:   Ship.cpp
 * Author: vasco
 * 
 * Created on 26 de Outubro de 2018, 23:39
 */


#include "Ship.h"

int Ship::counter = 1;

Ship::Ship(Cell* p, char i): position(p), icon(i){
        ID = counter++;
}

Ship::~Ship() {
}

bool Ship::changePosition(){
    
}

Cell* Ship::getPosition() const{
    return position;
}

void Ship::setPosition(Cell* x){
    position = x;
}

void Ship::setPosition(int x, int y){
    position->setX(x);
    position->setY(y);
}

