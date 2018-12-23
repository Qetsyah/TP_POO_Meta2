/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.cpp
 * Author: Qétsyah
 * 
 * Created on 14 de Dezembro de 2018, 18:52
 */


#include "Player.h"

bool Player::setCoins(int x){
    coins = x;
    return true;
}

bool Player::setSoldiersPort(int x){
    soldiersPort = x;
    return true;
}

bool Player::setPlayerShips(vector<Ship*>& v){
    for(int i = 0; i < v.size(); i ++){
        playerShips.push_back(new Ship(v[i]->getPosition()));
    }
    
    return true;
}

bool Player::setPlayersDocks(vector<Dock*>& d){
     for(int i = 0; i < d.size(); i ++){
        playersDocks.push_back( new Dock(d[i]->getSoldiers(),d[i]->getThisIsMe()) );
    }
    
    return true;
}


