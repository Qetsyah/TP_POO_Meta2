/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.cpp
 * Author: Qétsyah
 * 
 * Created on 14 de Dezembro de 2018, 18:52
 */

#include "Game.h"

//RUNNING

bool Game::running(Interface &interface, Auto &autO, Player &player) {
    bool running = true, executed, wishes = true;
    vector <int> commands;
    
    do {
        wishes = this->commandReader(interface, commands);
        
        int x = commands.size();
        
        if (commands[x - 1] == (-1)) {  //SAIR DO JOGO, O COMANDO EXIT FOI PEDIDO
            running = false;
        }
        else {  //CHAMA METODO DE EXECUTAR COMANDOS E MANDA VECTOR
            interface.printMap(autO, player);
            executed = this->commandExecutor(commands, autO, player);
            //running = true;
            interface.printMap(autO, player);
        }

    } while (running == true);
    return true;
}

//COMMAND READER

bool Game::commandReader(Interface &interface, vector <int> &commands) {
    string command;
    bool s = false;

    
    do {
    command = interface.getCommand();

        for (int i = 0; i < wishList.size(); i++) {
            if (command == wishList[i]) {
                switch (i) {

                    case(0):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(1): //COMANDO PROX, PASSA Á PROCIMA FASE
                        commands.push_back(i);
                        return true;
                        s = true;
                        break;
                    case(2):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(3):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(4):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(5):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(6):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(7):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(8):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(9):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(10):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(11):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(12):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(13):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(14):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(15):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(16):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(17):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(18):
                        commands.push_back(i);
                        s = true;
                        break;
                    case(19):
                        //COMANDO ESPECIFICO QUE TERMINA LOGO O JOGO
                        commands.push_back(-1);
                        return true;
                        s = true;
                        break;
                }
            }
        }
    } while (s == false);
    return true;
}

//COMMAND EXECUTOR

bool Game::commandExecutor(vector <int> &commands, Auto &autO, Player &player){
    for(int i = 0; i < commands.size(); i++){
            switch (commands[i]) {
                case(0):
                    cout << " Comando exec " << endl;
                    break;
                case(1):
                    cout << " Comando prox " << endl;
                    compranav(autO, player);
                    moveShips(autO, player);
                    break;
                case(2):
                    cout << " Comando compranav " << endl;
                    compranav(autO, player);                    
                    break;
                case(3):
                    cout << " Comando vendenav " << endl;
                    break;
                case(4):
                    cout << " Comando lista" << endl;
                    break;
                case(5):
                    cout << " Comando compra" << endl;
                    break;
                case(6):
                    cout << " Comando vende " << endl;
                    break;
                case(7):
                    cout << " Comando move " << endl;
                    break;
                case(8):
                    cout << " Comando auto " << endl;
                    break;
                case(9):
                    cout << " Comando stop" << endl;
                    break;
                case(10):
                    cout << " Comando pirata" << endl;
                    break;
                case(11):
                    cout << " Comando evpos " << endl;
                    break;
                case(12):
                    cout << " Comando evnav " << endl;
                    break;
                case(13):
                    cout << " Comando moedas " << endl;
                    moedas(autO, player);
                    break;
                case(14):
                    cout << " Comando vaipara " << endl;
                    break;
                case(15):
                    cout << " Comando comprasold " << endl;
                    break;
                case(16):
                    cout << " Comando saveg " << endl;
                    break;
                case(17):
                    cout << " Comando loadg " << endl;
                    break;
                case(18):
                    cout << " Comando delg " << endl;
                    break;
                case(19):
                    cout << " Comando sair" << endl;
                    break; 
            }
    }
}

void Game::moedas(Auto& autO, Player& player){
    
    int x = 0;
    
    do{
        
        cout << "Insert a valid amount of coins!" << endl;
        cin >> x;
    } while(x<=0);
    
    player.incCoins(x);
}

void Game::compranav(Auto& autO, Player& player){
    char type;
    bool validType = false;
    
    do{
        cout << "Insert a valid ship type! ('V', 'G' 'E', 'F', 'H')" << endl;
        cin >> type;
        
        if(type == 'V' || type == 'G' || type == 'E' || type == 'F' || type == 'H')
            validType = true;
        
    } while(!validType);
    
    
    
    /*
     
     Ver se tem dinheiro e depois dar pushback
     
     
     */
    
    //Cell* p, char i, int sold, int wat, int cp
    
    if(player.getCoins() >= 200){
        if(type == 'V'){
            player.getPlayerShips().push_back(new Sailboat(player.getPlayerDocks()[0]->getThisIsMe(), type, 75, 200, 100));
        }
        if(type == 'G'){
            player.getPlayerShips().push_back(new Galleon(player.getPlayerDocks()[0]->getThisIsMe(), type, 75, 200, 100));
        }
        if(type == 'E'){
            player.getPlayerShips().push_back(new Schooner(player.getPlayerDocks()[0]->getThisIsMe(), type, 75, 200, 100));
        }
        if(type == 'F'){
            player.getPlayerShips().push_back(new Frigate(player.getPlayerDocks()[0]->getThisIsMe(), type, 75, 200, 100));
        }
        if(type == 'H'){
            player.getPlayerShips().push_back(new Hovercraft(player.getPlayerDocks()[0]->getThisIsMe(), type, 75, 200, 100));
        }
        
        player.incCoins(-200);
        
        //cout << player.getPlayerShips()[0]->getPosition()->getY() << endl;
    }
}

void Game::moveShips(Auto& autO, Player& player){
    
    Cell* newPos;
    
    for (int i = 0; i < player.getPlayerShips().size(); i++) {
        newPos = checkAround(player.getPlayerShips()[i], autO);
        if (newPos != nullptr){
            player.getPlayerShips()[i]->setPosition(newPos);
            cout << "Ship " << player.getPlayerShips()[i]->getId() << " moved sucessfully!" << endl;
            //cout << player.getPlayerShips()[i]->getPosition()->getX() << endl;
            //cout << player.getPlayerShips()[i]->getPosition()->getY() << endl;
        }

    }

}

Cell* Game::checkAround(Ship* ship, Auto& autO){
    int x = ship->getPosition()->getX();
    int y = ship->getPosition()->getY();
    
    /*9 if else*/
    
    if(autO.getMap()[(x-1)*(y-1)]->getIcon()=='.'){
        cout << "ifelse 1" << endl;
        return autO.getMap()[(x-1)*(y-1)];
    }else 
        if(autO.getMap()[(x)*(y-1)]->getIcon()=='.'){
        cout << "ifelse 2" << endl;
        return autO.getMap()[(x)*(y-1)];
    }else 
        if(autO.getMap()[(x+1)*(y-1)]->getIcon()=='.'){
        cout << "ifelse 3" << endl;
        return autO.getMap()[(x+1)*(y-1)];
    }else 
        if(autO.getMap()[(x-1)*(y)]->getIcon()=='.'){
        cout << "ifelse 4" << endl;
        return autO.getMap()[(x-1)*(y)];
    }else 
        if(autO.getMap()[(x+1)*(y)]->getIcon()=='.'){
        cout << "ifelse 5" << endl;
        return autO.getMap()[(x-1)*(y)];
    }else 
        if(autO.getMap()[(x-1)*(y+1)]->getIcon()=='.'){
        cout << "ifelse 6" << endl;
        return autO.getMap()[(x-1)*(y+1)];
    }else 
        if(autO.getMap()[(x)*(y+1)]->getIcon()=='.'){
        cout << "ifelse 7" << endl;
        return autO.getMap()[(x)*(y+1)];
    }else 
        if(autO.getMap()[(x+1)*(y+1)]->getIcon()=='.'){
        cout << "ifelse 8" << endl;
        return autO.getMap()[(x+1)*(y+1)];
    }else {
            
            cout << "shit" << endl;
            return nullptr;
    } 

}
                