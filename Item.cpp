/* 
 * File:   Item.cpp
 * Author: Mark Berube
 * 
 * Created on March 20, 2012, 7:38 AM
 */

#include "Item.h"

Item::Item() {
}

Item::Item(const Item& orig) {
}

Item::~Item() {
}

void Item::SetProp(vector<int> Prop) {
    this->Prop = Prop;
}

vector<int> Item::GetProp() const {
    return Prop;
}

void Item::SetDesc(string Desc) {
    this->Desc = Desc;
}

string Item::GetDesc() const {
    return Desc;
}

void Item::SetID(int ID) {
    this->ID = ID;
}

int Item::GetID() const {
    return ID;
}

void Item::SetName(string Name) {
    this->Name = Name;
}

string Item::GetName() const {
    return Name;
}

void Item::SetUseD(string UseD) {
    this->UseD = UseD;
}

string Item::GetUseD() const {
    return UseD;
}

void Item::SetUseZ(int UseZ) {
    this->UseZ = UseZ;
}

int Item::GetUseZ() const {
    return UseZ;
}

void Item::SetUseZReq(int UseZReq) {
    this->UseZReq = UseZReq;
}

int Item::GetUseZReq() const {
    return UseZReq;
}

