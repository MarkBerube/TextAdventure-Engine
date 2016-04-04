/* 
 * File:   Map.cpp
 * Author: Mark Berube
 * 
 * Created on March 20, 2012, 7:31 AM
 */

#include "Map.h"

Map::Map(int id, string name, string desc) {
    this->Name = name;
    this->Desc = desc;
    this->ID = id;
}

Map::Map(const Map& orig) {
}

Map::~Map() {
}

void Map::SetSouth(int South) {
    this->South = South;
}

int Map::GetSouth() const {
    return South;
}

void Map::SetEast(int East) {
    this->East = East;
}

int Map::GetEast() const {
    return East;
}

void Map::SetWest(int West) {
    this->West = West;
}

int Map::GetWest() const {
    return West;
}

void Map::SetNorth(int North) {
    this->North = North;
}

int Map::GetNorth() const {
    return North;
}

void Map::SetDesc(string Desc) {
    this->Desc = Desc;
}

string Map::GetDesc() const {
    return Desc;
}

void Map::SetName(string Name) {
    this->Name = Name;
}

string Map::GetName() const {
    return Name;
}

void Map::SetID(int ID) {
    this->ID = ID;
}

int Map::GetID() const {
    return ID;
}

