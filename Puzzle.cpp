/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.cpp
 * Author: FELIPES
 * 
 * Created on October 5, 2017, 2:59 PM
 */

#include "Cell.h"
#include "Puzzle.h"
#include <iostream>

Cell *puzzle[9][9];
Cell tempList[9];

Puzzle::Puzzle()
{
    //Cell *c;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            //c = new Cell();
            puzzle[i][j] = new Cell();
            //std::cout << "puzzle[" << i << "][" << j << "]: " << puzzle[i][j] << std::endl;
            //std::cout << "&puzzle[" << i << "][" << j << "]: " << &puzzle[i][j] << std::endl;
            //std::cout << "cell: " << c << std::endl;
            //std::cout << "&cell: " << &c << std::endl;
        }
    }
    
    
}

void Puzzle::display()
{
    for(int i=0;i<9;i++)
    {
        if(i == 3 || i == 6) std::cout << std::endl;
        
        for(int j=0;j<9;j++)
        {
            if(j == 3 || j == 6) std::cout << "\t";
            puzzle[i][j]->display();
            
            
        }
            std::cout << std::endl;
    }
}

Cell *Puzzle::getList(int x, int type)
{
    if(x<0 || x>=9) return NULL;
    switch(type)
    {
        case 1: //Row
            for(int i=0;i<9;i++)
            {
                
            }
            
            break;
        case 2: //Column
            
            break;
        case 3: //Matrix
            
            break;
        default:
            // invalid type - do nothing
            break;
    }
    
    //puzzle[0][0].eliminate(1);
    //puzzle[0][0].eliminate(5);
    std::cout << "\nList is:" << std::endl;
    for(int i=0;i<9;i++)
    {
        //list[i].display();
    }
    std::cout << "\n\n";
    return NULL;
}

void Puzzle::eliminate(int row, int column, int value)
{
    if(row<0 || row>=9 || column<0 || column>=9 || value<0 || value>=9) return;
    for(int i=0;i<9;i++)
    {
        //if (puzzle[row][column][i] == value) {puzzle[row][column][i] = 0;}
    }
}

void Puzzle::setValue(int row, int column, int value)
{
    if(row<0 || row>=9 || column<0 || column>=9 || value<=0 || value>9) return;
    for(int i=0;i<9;i++)
    {
        //if (puzzle[row][column][i] != value) {puzzle[row][column][i] = 0;}
    }
}

int *Puzzle::findSingletons()
{
    int retValue[2] = {-1,-1};
    int occurrences[9] = {0,0,0,0,0,0,0,0,0};
    
    
    for(int row=0;row<9;row++)
    {
        for(int col=0;col<9;col++)
        {
            
            for(int possibility=0;possibility<9;possibility++)
            {
                //if(puzzle[row][col][possibility] > 0 && puzzle[row][col][possibility] <= 9)
                {
                    //occurrences[ puzzle[row][col][possibility] ]++;
                    std::cout << "puzzle[" <<row<<"]["<<col<<"]["<<possibility << "]++" << std::endl;
                }
            }
            for(int l=1;l<10;l++)
            {
                //If any count = 1, singleton was found
                if(occurrences[l-1] == 1)
                {
                    retValue[0] = row;
                    retValue[1] = col;
                    //return *retValue;
                }
            }
            
            //occurrences[9] = {0,0,0,0,0,0,0,0,0};
        }
        std::cout << "" << std::endl;
    }
}

void Puzzle::eliminateSingletons()
{
    int key;
    
}

bool Puzzle::solve()
{
    
    return false;
}

void Puzzle::test()
{
    
    std::cout << "puzzle[0,1]: " << puzzle[0][1] << std::endl;
    std::cout << "puzzle[0,2]: " << puzzle[0][2] << std::endl;
    
    std::cout << "&puzzle[0,1]: " << &puzzle[0][1] << std::endl;
    std::cout << "&puzzle[0,2]: " << &puzzle[0][2] << std::endl;
    
    
    puzzle[0][1]->display();
    puzzle[0][2]->display();
    
    puzzle[0][1]->eliminate(1);
    puzzle[0][2]->eliminate(2);
    
    puzzle[0][1]->display();
    puzzle[0][2]->display();
    
    std::cout << std::endl;
    
    puzzle[0][3]->eliminate(3);
    puzzle[0][4]->eliminate(4);
    puzzle[0][5]->eliminate(1);
    puzzle[0][6]->eliminate(1);
    puzzle[0][7]->eliminate(1);
    puzzle[0][8]->eliminate(1);
    
    display();
    
    getList(0,1);
    
}