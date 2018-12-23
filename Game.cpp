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

bool Game::running(Interface &interface) {
    bool running, executed, wishes = true;
    vector <int> commands;
    
    do {
        wishes = this->commandReader(interface, commands);
        
        int x = commands.size();
        
        if (commands[x - 1] == (-1)) {  //SAIR DO JOGO, O COMANDO EXIT FOI PEDIDO
        }
        else {  //CHAMA METODO DE EXECUTAR COMANDOS E MANDA VECTOR
            executed = this->commandExecutor(commands);
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

bool Game::commandExecutor(vector <int> &commands){
    for(int i = 0; i < commands.size(); i++){
            switch (commands[i]) {
                case(0):
                    cout << " Comando exec " << endl;
                    break;
                case(1):
                    cout << " Comando prox " << endl;
                    break;
                case(2):
                    cout << " Comando compranav " << endl;
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


                