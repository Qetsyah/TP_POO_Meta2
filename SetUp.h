/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SetUp.h
 * Author: Qétsyah
 *
 * Created on 14 de Dezembro de 2018, 18:17
 */

#ifndef SETUP_H
#define SETUP_H

#define MIN_X_SIZE 20   // colunas
#define MIN_Y_SIZE 10   // linhas

#include "Cell.h"
#include "Ship.h"
#include "Dock.h"
#include "Interface.h"
#include "Player.h"
#include "Auto.h"

#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

class SetUp {
    //Players data
    int coins;
    unsigned int score;
    int soldiersPort;
    vector <Ship*> playerShips;
    vector <Dock*> playersDocks;

    //Game data
    vector <Cell*> map;
    int nColumns, nLines;

    int probPirate;
    int shipPrice;
    int soldierPrice;
    int fishSellPrice;
    int priceBuyStuff; // stuff é mercadorias
    int priceSellStuff;
    int probEvent;
    int probStorm;
    int probMermaids;
    int probDeadCalm;
    int probRiot;
    vector <Ship*> pirateShips;
    vector <Dock*> pirateDocks;

public:
    bool readFile(Interface &interface, Player &player, Auto &autO);
    bool initAuto(Auto &autO);
    bool initPlayer(Player &player);
    int exit();

};

#endif /* SETUP_H */

