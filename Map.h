/* 
 * File:   Map.h
 * Author: Mark Berube
 *
 * Created on March 20, 2012, 7:31 AM
 */
#include <string>

#ifndef MAP_H
#define	MAP_H

using namespace std;

class Map {
public:
    Map(int id, string name, string desc);
    Map(const Map& orig);
    virtual ~Map();
    
    void SetSouth(int South);
    int GetSouth() const;
    void SetEast(int East);
    int GetEast() const;
    void SetWest(int West);
    int GetWest() const;
    void SetNorth(int North);
    int GetNorth() const;
    void SetDesc(string Desc);
    string GetDesc() const;
    void SetName(string Name);
    string GetName() const;
    void SetID(int ID);
    int GetID() const;  
    
private:
    
    string Name;
    string Desc;

    int ID;
    
    int North;
    int West;
    int East;
    int South;
    
};

#endif	/* MAP_H */

