/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Puzzle.h
 * Author: FELIPES
 *
 * Created on October 6, 2017, 1:51 PM
 */

#ifndef PUZZLE_H
#define PUZZLE_H

class Puzzle
{
public:
    Puzzle();
    void display();
    bool solve();
    void test();
    
private:
    void eliminateSingletons();
    Cell *getList(int x, int type);
    void eliminate(int row, int column, int value);
    void setValue(int row, int column, int value);
    int *findSingletons();
    
};


#endif /* PUZZLE_H */

