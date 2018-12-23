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

void Interface::titleScreen() const {
   
cout << "__________                  ____    __________         __    __  .__                 "             << endl;
cout << "\\______   \\__ __  _____    /  _ \\   \\______   \\_____ _/  |__/  |_|  |   ____   ______"        << endl;
cout << " |       _/  |  \\/     \\   >  _ </\\  |    |  _/\\__  \\   __\\   __\\  | _/ __ \\ /  ___/"      << endl;
cout << " |    |   \\  |  /  Y Y  \\ /  <_\\ \\/  |    |   \\ / __ \\|  |  |  | |  |_\\  ___/ \\___ \\ "    << endl;
cout << " |____|_  /____/|__|_|  / \\_____\\ \\  |______  /(____  /__|  |__| |____/\\___  >____  >"         << endl;
cout << "        \\/            \\/         \\/         \\/      \\/                     \\/     \\/ "      << endl;
 
}

void Interface::printMap() const{
    vector <Cell*> map = getMap();
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

