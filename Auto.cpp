/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Auto.cpp
 * Author: Qétsyah
 * 
 * Created on 17 de Dezembro de 2018, 12:05
 */


#include "Auto.h"
//Sets
bool Auto::setNLines(int x){
    nLines = x;
    return true;
}

bool Auto::setNColumns(int x){
    nColumns = x;
    return true;
}

bool Auto::setMap( vector <Cell*> MAP){
    map = MAP;
    return true;
}

bool Auto::setProbPirate(int x){
    probPirate = x;
    return true;
}

bool Auto::setShipPrice(int x){
    shipPrice = x;
    return true;
}

bool Auto::setSoldierPrice(int x){
    soldierPrice = x;
    return true;
}

bool Auto::setFishSellPrice(int x){
    fishSellPrice = x;
    return true;
}

bool Auto::setPriceBuyStuff(int x){
    priceBuyStuff = x;
    return true;
}

bool Auto::setPriceSellStuff(int x){
    priceSellStuff = x;
    return true;
}

bool Auto::setProbEvent(int x){
    probEvent = x;
    return true;
}

bool Auto::setProbStorm(int x){
    probStorm = x;
    return true;
}

bool Auto::setProbMermaids(int x){
    probMermaids = x;
    return true;
}

bool Auto::setProbDeadCalm(int x){
    probDeadCalm = x;
    return true;
}

bool Auto::setProbRiot(int x){
    probRiot = x;
    return true;
}

bool Auto::setPirateShips(vector<Ship*>& s){
    for(int i = 0; i < s.size(); i++){
        pirateShips.push_back(new Ship( s[i]->getPosition() ));
    }
    return true;
}

bool Auto::setPirateDocks(vector<Dock*>& d){
    for(int i = 0; i < d.size(); i++){
        pirateDocks.push_back(new Dock( d[i]->getSoldiers(), d[i]->getThisIsMe()));
    }
    return true;
}



//Gets

int Auto::getNColumns() const{
    return nColumns;
}

int Auto::getNLines() const{
    return nLines;
}

int Auto::getProbPirate() const{
    return probPirate;
}

int Auto::getShipPrice() const{
    return shipPrice;
}

int Auto::getSoldierPrice() const{
    return soldierPrice;
}

int Auto::getFishSellPrice()const{
    return fishSellPrice;
}

int Auto::getPriceBuyStuff()const{
    return priceBuyStuff;
}

int Auto::getPriceSellStuff()const{
    return priceSellStuff;
}

int Auto::getProbEvent() const{
    return probEvent;
}

int Auto::getProbStorm() const{
    return probStorm;
}

int Auto::getProbMermaids() const{
    return probMermaids;
}

int Auto::getProbDeadCalm() const{
    return probDeadCalm;
}

int Auto::getProbRiot() const{
    return probRiot;
}

/*vector <Dock*> & Auto::getPirateDocks() const{
    return &pirateDocks;
}

vector <Ship*> & Auto::getPirateShips() const{
    return &pirateShips ;
}
*/

//TODO: isto
vector <Cell*> Auto::getMap() {
    return map;
} 
