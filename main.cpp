/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Qétsyah
 *
 * Created on 14 de Dezembro de 2018, 18:11
 */

#include <cstdlib>

#include "SetUp.h"
#include "Game.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    bool on;
    SetUp setup;
    Interface interface;
    Player player;
    Game game;
    Auto autO;

    if((setup.readFile(interface, player, autO)) == true)//começa game
        on = game.running(interface, autO, player);
    else
        cout << "nao iniciou as variaveis por alguma razao" << endl;
        


    return 0;
}

