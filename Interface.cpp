/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Interface.cpp
 * Author: Qétsyah
 * 
 * Created on 14 de Dezembro de 2018, 18:26
 */


#include "Interface.h"
#include "Consola.h"

void Interface::titleScreen() const {
   
cout << "__________                  ____    __________         __    __  .__                 "             << endl;
cout << "\\______   \\__ __  _____    /  _ \\   \\______   \\_____ _/  |__/  |_|  |   ____   ______"        << endl;
cout << " |       _/  |  \\/     \\   >  _ </\\  |    |  _/\\__  \\   __\\   __\\  | _/ __ \\ /  ___/"      << endl;
cout << " |    |   \\  |  /  Y Y  \\ /  <_\\ \\/  |    |   \\ / __ \\|  |  |  | |  |_\\  ___/ \\___ \\ "    << endl;
cout << " |____|_  /____/|__|_|  / \\_____\\ \\  |______  /(____  /__|  |__| |____/\\___  >____  >"         << endl;
cout << "        \\/            \\/         \\/         \\/      \\/                     \\/     \\/ "      << endl;
cout << "\n";
 
}

void Interface::printMap(Auto &autO, Player &player) const{
    Consola::clrscr();
    titleScreen();
    
    bool boat = false;
    int index;
    
    for (int i = 0; i <= autO.getMap().size(); i++) {
        
        for (int k = 0; k < player.getPlayerShips().size(); k++) {
            if(autO.getMap()[i] == player.getPlayerShips()[k]->getPosition()){
                //cout << "I'm here" << endl;
                boat = true;
                index = k;
            }
                

        }


        if((i!=0 && i % autO.getNColumns() == 0)|| i == autO.getMap().size()){  //quadrados inferiores
            cout << "\n";
            
            for (int j = i-autO.getNColumns(); j < i; j++) {
                if(autO.getMap()[j]->getIcon() == '.'){
                    if(j % 2 == 0)
                        Consola::setBackgroundColor(Consola::AZUL_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::AZUL);
                    if(boat == true)
                        if(player.getPlayerShips()[index]->getId() < 10)
                            cout << player.getPlayerShips()[index]->getId() << " ";
                        else
                            cout << player.getPlayerShips()[index]->getId();
                    else
                    cout << "  ";
                }
                else if(autO.getMap()[j]->getIcon() == '+'){
                    if(j % 2 == 0)
                        Consola::setBackgroundColor(Consola::VERDE_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::VERDE);
                    
                    cout << "  ";
                }
                else if(autO.getMap()[j]->getIcon() == 'A' || autO.getMap()[j]->getIcon() == 'a'){
                    if(j % 2 == 0)
                        Consola::setBackgroundColor(Consola::BRANCO_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::BRANCO);
                    
                    cout << "  ";
                }
                else if(autO.getMap()[j]->getIcon() == 'B' || autO.getMap()[j]->getIcon() == 'b'){
                    if(j % 2 == 0)
                        Consola::setBackgroundColor(Consola::VERMELHO_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::VERMELHO);
                    
                    cout << "  ";
                }
            
            

            }

            cout << "\n";
            
            if(i==autO.getMap().size()){
                 Consola::setBackgroundColor(Consola::PRETO);
                 return;
            }
                
        }
     //  quadrados superiores de cada Cell
            if(autO.getMap()[i]->getIcon() == '.'){   
                    if(i % 2 == 0)
                        Consola::setBackgroundColor(Consola::AZUL_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::AZUL);
                    
                    if(boat == true) 
                        cout << autO.getMap()[i]->getIcon() << player.getPlayerShips()[index]->getIcn();
                    else
                        cout << autO.getMap()[i]->getIcon() << " ";
                }
        else if(autO.getMap()[i]->getIcon() == '+'){
                    if(i % 2 == 0)
                        Consola::setBackgroundColor(Consola::VERDE_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::VERDE);
                    
                     cout << autO.getMap()[i]->getIcon() << " ";
                }
        else if(autO.getMap()[i]->getIcon() == 'A' || autO.getMap()[i]->getIcon() == 'a'){
                    if(i % 2 == 0)
                        Consola::setBackgroundColor(Consola::BRANCO_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::BRANCO);
                    
                     cout << autO.getMap()[i]->getIcon() << " ";
                }
                
        else if(autO.getMap()[i]->getIcon() == 'B' || autO.getMap()[i]->getIcon() == 'b'){
                    if(i % 2 == 0)
                        Consola::setBackgroundColor(Consola::VERMELHO_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::VERMELHO);
                    
                    cout << autO.getMap()[i]->getIcon() << " ";
                }
        
        boat = false;
 
    }


   
}

string Interface::getFileName(bool correct){
    string FileName;
  
    if( correct ){
    cout << "Insira o nome do ficheiro do qual quer ler as configuracoes: " << endl;
    getline(cin, FileName); }
    else{
        cout << "Nome de ficheiro incorrecto, insira um nome valido: " << endl;
        getline(cin, FileName);
    }
    return FileName;
    
    
}

string Interface::getCommand(){
    string command;
    bool owo = false;
    vector <string> wishList{"exec", "prox", "compranav", "vendenav",
        "lista", "compra", "vende", "move", "auto", "stop", "pirata",
        "evpos", "evnav", "moedas", "vaipara", "comprasold", "saveg",
        "loadg", "delg", "sair"};
        
    
        do{
        cout << "Insira um comando: " << endl;
        getline(cin,command);
        
        for(int i = 0; i < wishList.size(); i++){
            if(command == wishList[i])
            owo = true;
        } 
        }while(owo == false);
        
        if(owo == true) return command;
}

