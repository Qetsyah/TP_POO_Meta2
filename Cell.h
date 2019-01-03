/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cell.h
 * Author: vasco
 *
 * Created on 6 de Novembro de 2018, 17:20
 */

#ifndef CELL_H
#define CELL_H

class Cell {
    char icon;
    int x, y;

public:

    Cell(int X, int Y, char i) : x(X), y(Y), icon(i) {}
    ~Cell();

//sets
    bool setX(int xx);
    bool setY(int yy);
    bool setIcon(char i);
//gets
    int getX() const;
    int getY() const;
    char getIcon() const;
};

bool operator==(const Cell& pri, const Cell& seg);

#endif /* CELL_H */
