/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Auto.h
 * Author: Qétsyah
 *
 * Created on 17 de Dezembro de 2018, 12:05
 */

#ifndef AUTO_H
#define AUTO_H

#include <vector>

#include "Ship.h"
#include "Dock.h"

using namespace std;

class Auto {
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
    
    //sets
    bool setMap(vector <Cell*> &MAP);
    bool setNColumns(int x);
    bool setNLines(int x);
    bool setProbPirate(int x);
    bool setShipPrice(int x);
    bool setSoldierPrice(int x);
    bool setFishSellPrice(int x);
    bool setPriceBuyStuff(int x);
    bool setPriceSellStuff(int x);
    bool setProbEvent(int x);
    bool setProbStorm(int x);
    bool setProbMermaids(int x);
    bool setProbDeadCalm(int x);
    bool setProbRiot(int x);
    bool setPirateShips( vector <Ship*> &s);
    bool setPirateDocks( vector <Dock*> &d);
   
    //gets
    vector <Cell*> & getMap()const;
    int getNColumns()const;
    int getNLines()const;
    int getProbPirate()const;
    int getShipPrice()const;
    int getSoldierPrice()const;
    int getFishSellPrice()const;
    int getPriceBuyStuff()const;
    int getPriceSellStuff()const;
    int getProbEvent()const;
    int getProbStorm()const;
    int getProbMermaids()const;
    int getProbDeadCalm()const;
    int getProbRiot()const;
    vector <Ship*> & getPirateShips()const;
    vector <Dock*> & getPirateDocks()const;
    
    

};

#endif /* AUTO_H */

