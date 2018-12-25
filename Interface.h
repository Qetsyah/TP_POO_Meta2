/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Interface.h
 * Author: Qétsyah
 *
 * Created on 14 de Dezembro de 2018, 18:26
 */

#ifndef INTERFACE_H
#define INTERFACE_H

#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "Auto.h"


using namespace std;

class Interface {
    
public:

    void titleScreen()const;
    void printMap(vector <Cell*> map, int nCol, int nLin)const;
    string getFileName( bool correct );
    string getCommand();

};

#endif /* INTERFACE_H */

