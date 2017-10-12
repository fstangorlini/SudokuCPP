/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: FELIPES
 *
 * Created on October 5, 2017, 2:53 PM
 */


#include <cstdlib>
#include <iostream>
#include "LinkedList.h"
#include "Cell.h"
#include "Puzzle.h"



using namespace std;

/*
 *
 */
int main(int argc, char** argv)
{
    cout << "_______________________Start_______________________" << endl;
    
    Cell *c1 = new Cell();
    Cell *c2 = new Cell();
    c1->display();
    c2->display();
    std::cout << "\n";
    c1->eliminate(1); //Deveria eliminar o 1 só no c1
    c2->eliminate(2); //Deveria eliminar o 2 só no c2
    c1->display();
    c2->display();
    std::cout << "\n";

    
    cout << "________________________End________________________" << endl;
    return 0;
}
