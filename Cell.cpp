/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cell.cpp
 * Author: FELIPES
 * 
 * Created on October 5, 2017, 2:55 PM
 */

#include "Cell.h"
#include <cstddef>
#include <iostream>

int cell[9];

Cell::Cell()
{
    for(int i=0;i<9;i++)
    {
        cell[i] = i+1;
    }
}

void Cell::display()
{
    std::cout << "[";
    for(int i=0;i<9;i++)
    {
        if(cell[i] != 0) std::cout << cell[i];
        else std::cout << " ";
        //if(i+1<9) std::cout << ",";
    }
    std::cout << "]";
}

void Cell::eliminate(int x)
{
    if(x>0 && x<=9)
    {
        //imagino que o erro esteja aqui...
        //mas no java o acesso é local
        cell[x-1] = 0;
    }
}

