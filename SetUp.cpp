/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SetUp.cpp
 * Author: Qétsyah
 * 
 * Created on 14 de Dezembro de 2018, 18:17
 */

#include "SetUp.h"

bool SetUp::readFile(Interface &interface, Player &player, Auto &autO) {
    //Control variables 
    string filename;
    ifstream fileReceiver;
    bool exists = false;
    bool empty = true;


    // File buffer, command and value
    string buffer;
    istringstream iss;
    string command, pao, queijo;
    string valueBuffer;
    int value;
    bool D = false;
    
    interface.titleScreen();
    int x=0;
    do {
        if(x==0){
        pao = interface.getFileName(true);}
        else{
             pao = interface.getFileName(false);
        }
        
        iss.str(pao);
        getline(iss, queijo, ' ');
        getline(iss, filename);

        if (queijo == "config") {
            do {
                do {

                    fileReceiver.open(filename.c_str());

                    if (fileReceiver.good())
                        exists = true;
                    else 
                        x++;
                     
                } while (!exists);

                if (fileReceiver.eof()) { // se o ficheiro não estiver vazio, leu a primeira linha
                    x++;
                    fileReceiver.close();
                } else
                    empty = false;
            } while (empty);

            D = true;
            
            fileReceiver.close(); //Ficheiro foi verificado, existe e não está vazio
            x = 0;
             D = true;
        }
        else x++;
    } while (D == false);

    fileReceiver.open(filename);

    for (int i = 0; i < 2; i++) {
        getline(fileReceiver, command, ' ');
        getline(fileReceiver, valueBuffer);
        value = stoi(valueBuffer);

        vector <string> lista{"linhas", "colunas"};


        if (command == lista[i]) {


            switch (i) {
                case (0):
                    if (value < MIN_Y_SIZE) {
                        cout << "Not enough lines" << endl;
                        this->exit(); // at a later date maybe change this to ask for another valid file;
                    } else
                        nLines = value;

                    break;
                case (1):
                    if (value < MIN_X_SIZE) {
                        cout << "Not enough columns" << endl;
                        this->exit(); // at a later date maybe change this to ask for another valid file;
                    } else
                        nColumns = value;

                    break;

            }
        }
    }


    // Passar o mapa do ficheiro para a memória
    char mapinha[nLines][nColumns + 1];

    for (int x = 0; x < nLines; x++) {
        for (int w = 0; w < nColumns + 1; w++)
            fileReceiver.get((mapinha[x][w]));

    }


    for (int x = 0; x < nLines; x++) {
        for (int y = 0; y < (nColumns + 1); y++) {
            if ((y) == (nColumns));
            else {
                char ICON = mapinha[x][y];
                map.push_back(new Cell(x, y, ICON));

                switch (ICON) {
                    case('A'):
                        playersDocks.insert(playersDocks.begin(), (new Dock(100, map.back())));
                        break;
                    case('a'):
                        playersDocks.push_back(new Dock(100, map.back()));
                        break;
                    case('B'):
                        pirateDocks.insert(pirateDocks.begin(), (new Dock(100, map.back())));
                        break;
                    case('b'):
                        pirateDocks.push_back(new Dock(100, map.back()));
                }
            }
        }
    }

    //Inicializar o resto das variáveis

    vector <string> variaveis{"moedas", "probpirata", "preconavio", "precosoldado",
        "precovendpeixe", "precocompmercad", "precovendmercad", "soldadosporto",
        "probevento", "probtempestade", "probsereias", "probcalmaria", "probmotim"};

    while (!fileReceiver.eof()) {

        getline(fileReceiver, command, ' ');
        getline(fileReceiver, valueBuffer);
        value = stoi(valueBuffer);

        for (int g = 0; g < variaveis.size(); g++) {
            if (command == variaveis[g]) {
                switch (g) {
                    case (0):
                        coins = value;
                        break;
                    case (1):
                        probPirate = value;
                        break;
                    case (2):
                        shipPrice = value;
                        break;
                    case (3):
                        soldierPrice = value;
                        break;
                    case (4):
                        fishSellPrice = value;
                        break;
                    case (5):
                        priceBuyStuff = value;
                        break;
                    case (6):
                        priceSellStuff = value;
                        break;
                    case (7):
                        if ((value != 100) && (value > 0)) {
                            soldiersPort = value;
                            for (int f = 0; f < playersDocks.size(); f++) {
                                playersDocks[f]->setSoldiers(soldiersPort);
                            }
                        } else soldiersPort = 100;
                        break;
                    case (8):
                        probEvent = value;
                        break;
                    case (9):
                        probStorm = value;
                        break;
                    case (10):
                        probMermaids = value;
                        break;
                    case (11):
                        probDeadCalm = value;
                        break;
                    case (12):
                        probRiot = value;
                        break;

                }
            }

        }

    }
        bool a,b=false;
        
        cout << "chegamos ao fim de ler o ficheiro" << endl;
        a = this->initPlayer(player);
        b = this->initAuto(autO);
        
        if( (a && b) == true){
            return true;
        }


}



bool SetUp::initPlayer(Player &player) { //coloca os valore do ficheiro no player
    cout << "entramos no que inicia as veriaveis do player" << endl;
    bool a, b, c, d =false;
    
    if ( ( (player.setCoins(coins)) &&
           (player.setSoldiersPort(soldiersPort)) &&
           (player.setPlayerShips(playerShips)) &&
           (player.setPlayersDocks(playersDocks)) ) == true )
        return true;
   
}


bool SetUp::initAuto(Auto& autO){ //coloca os valores do ficheiro no autO
    cout << "entramos no que inicia as variaveis do auto" << endl;
if( ( (autO.setNColumns(nColumns)) &&
        (autO.setNLines(nLines)) &&
        (autO.setMap(map)) &&
        (autO.setProbPirate(probPirate)) &&
        (autO.setShipPrice(shipPrice)) &&
        (autO.setSoldierPrice(soldierPrice)) &&
        (autO.setFishSellPrice(fishSellPrice)) &&
        (autO.setPriceBuyStuff(priceBuyStuff)) &&
        (autO.setPriceSellStuff(priceSellStuff)) &&
        (autO.setProbEvent(probEvent)) &&
        (autO.setProbStorm(probStorm)) &&
        (autO.setProbMermaids(probMermaids)) &&
        (autO.setProbDeadCalm(probDeadCalm)) &&
        (autO.setProbRiot(probRiot)) &&
        (autO.setPirateShips(pirateShips)) &&
        (autO.setPirateDocks(pirateDocks))  ) == true )
    return true;

}

int SetUp::exit(){
    cout<<"jogo terminou " << endl;
    return -1;
}

