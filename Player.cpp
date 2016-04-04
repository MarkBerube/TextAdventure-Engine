/* 
 * File:   Player.cpp
 * Author: Mark Berube
 * 
 * Created on March 20, 2012, 7:56 AM
 */

#include "Player.h"

Player::Player(string name) {
    this->Name = name;
}

Player::Player(const Player& orig) {
}

Player::~Player() {
}

void Player::SetInv(vector<int> Inv) {
    this->Inv = Inv;
}

vector<int> Player::GetInv() const {
    return Inv;
}

void Player::SetProp(vector<string> Prop) {
    this->Prop = Prop;
}

vector<string> Player::GetProp() const {
    return Prop;
}

void Player::SetName(string Name) {
    this->Name = Name;
}

string Player::GetName() const {
    return Name;
}

void Player::SetLoc(int Loc) {
    this->Loc = Loc;
}

int Player::GetLoc() const {
    return Loc;
}

