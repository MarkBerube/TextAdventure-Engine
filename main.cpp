/* 
 * File:   main.cpp
 * Author: Mark Berube
 *
 * Created on March 20, 2012, 7:28 AM
 */

#include <cstdlib>

#include "commands.h"


using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    string buff;
    Map *mbuff;
    Player *mc;
    vector<Map*> ml;


    mbuff = new Map(0,"Introduction Map","This is just to demo what this program is capable of.");    
    mbuff->SetEast(1);
    
    ml.push_back(mbuff);
    
    mbuff = new Map(1,"Introduction Map: East","This is just to demo what this program is capable of.");    
    mbuff->SetEast(1);
    ml.push_back(mbuff);
    
    mc = Intro();
    mc->SetLoc(0);
    
    while(commandparse(mc,ml) != 1);
    
    return 0;
}

