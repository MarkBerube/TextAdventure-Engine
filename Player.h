/* 
 * File:   Player.h
 * Author: Mark Berube
 *
 * Created on March 20, 2012, 7:56 AM
 */
#include <string>
#include <vector>
#ifndef PLAYER_H
#define	PLAYER_H

using namespace std;
class Player {
public:
    
    Player(string name);
    Player(const Player& orig);
    virtual ~Player();
    void SetInv(vector<int> Inv);
    vector<int> GetInv() const;
    void SetProp(vector<string> Prop);
    vector<string> GetProp() const;
    void SetName(string Name);
    string GetName() const;
    void SetLoc(int Loc);
    int GetLoc() const;
    
private:

    string Name;
    vector<string> Prop;
    vector<int> Inv;
    int Loc;
};

#endif	/* PLAYER_H */

