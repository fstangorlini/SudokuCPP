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



using namespace std;

/*
 *
 */
int main(int argc, char** argv)
{
    cout << "Start..." << endl;
    LinkedList<int> intlist;
    intlist.addFirst(1);
    intlist.display();

    LinkedList<string> stringlist;
    cout << stringlist.isEmpty() << endl;
    cout << stringlist.size() << endl;
    stringlist.addLast("a");
    stringlist.addLast("x");
    stringlist.addLast("jasper");
    stringlist.addLast("goofy");
    cout << stringlist.size() << endl;
    stringlist.display();
    //cout << stringlist.get(0);

    std::string *str;
    //str = stringlist.toString();
    cout << str << endl;

    return 0;
}

