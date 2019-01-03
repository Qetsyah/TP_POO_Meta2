/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.h
 * Author: Qétsyah
 *
 * Created on 14 de Dezembro de 2018, 18:52
 */

#ifndef GAME_H
#define GAME_H


#include "SetUp.h"
#include "Sailboat.h"
#include "Galleon.h"
#include "Schooner.h"
#include "Frigate.h"
#include "Hovercraft.h"

#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


using namespace std;

class Game {
     vector <string> wishList{"exec","prox","compranav","vendenav",
            "lista","compra","vende","move","auto","stop","pirata",
            "evpos","evnav","moedas","vaipara","comprasold","saveg",
            "loadg","delg","sair"};
    
public:
    bool running( Interface &interface, Auto &autO, Player &player ); // este método é o que engloba o decorrer do jogo e as três estapas
    bool commandReader(Interface &interface, vector <int> &commands);
    bool commandExecutor(vector <int> &commands, Auto &autO, Player &player );
    bool battles();
    bool events();
    bool exit();
    
    void moedas(Auto &autO, Player &player);
    void compranav(Auto &autO, Player &player);

    void moveShips(Auto &autO, Player &player); // usado no prox
    Cell* checkAround(Ship* ship, Auto &autO);
};

#endif /* GAME_H */

