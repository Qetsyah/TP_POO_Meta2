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

void Interface::printMap(vector <Cell*> map, int nColumns) const{
    Consola::clrscr();
    titleScreen();
    
    for (int i = 0; i <= map.size(); i++) {

        if((i!=0 && i % nColumns == 0)|| i == map.size()){  //quadrados inferiores
            cout << "\n";
            
            for (int j = i-nColumns; j < i; j++) {
                if(map[j]->getIcon() == '.'){
                    if(j % 2 == 0)
                        Consola::setBackgroundColor(Consola::AZUL_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::AZUL);
                }
            if(map[j]->getIcon() == '+'){
                    if(j % 2 == 0)
                        Consola::setBackgroundColor(Consola::VERDE_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::VERDE);
                }
            if(map[j]->getIcon() == 'A' || map[j]->getIcon() == 'a'){
                    if(j % 2 == 0)
                        Consola::setBackgroundColor(Consola::BRANCO_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::BRANCO);
                }
                
            if(map[j]->getIcon() == 'B' || map[j]->getIcon() == 'b'){
                    if(j % 2 == 0)
                        Consola::setBackgroundColor(Consola::VERMELHO_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::VERMELHO);
                }
            
            cout << "  ";

            }

            cout << "\n";
            
            if(i==map.size()){
                 Consola::setBackgroundColor(Consola::PRETO);
                 return;
            }
                
        }
     
            if(map[i]->getIcon() == '.'){   //  quadrados superiores de cada Cell
                    if(i % 2 == 0)
                        Consola::setBackgroundColor(Consola::AZUL_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::AZUL);
                }
            if(map[i]->getIcon() == '+'){
                    if(i % 2 == 0)
                        Consola::setBackgroundColor(Consola::VERDE_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::VERDE);
                }
            if(map[i]->getIcon() == 'A' || map[i]->getIcon() == 'a'){
                    if(i % 2 == 0)
                        Consola::setBackgroundColor(Consola::BRANCO_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::BRANCO);
                }
                
            if(map[i]->getIcon() == 'B' || map[i]->getIcon() == 'b'){
                    if(i % 2 == 0)
                        Consola::setBackgroundColor(Consola::VERMELHO_CLARO);
                    else
                        Consola::setBackgroundColor(Consola::VERMELHO);
                }
            
            cout << map[i]->getIcon() << " ";
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

