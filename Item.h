/* 
 * File:   Items.h
 * Author: Mark Berube
 *
 * Created on March 20, 2012, 7:38 AM
 */
#include <string>
#include <vector>
#ifndef ITEM_H
#define	ITEM_H

using namespace std;
class Item {
public:
    Item();
    Item(const Item& orig);
    
    virtual ~Item();
    void SetProp(vector<int> Prop);
    vector<int> GetProp() const;
    void SetDesc(string Desc);
    string GetDesc() const;
    void SetID(int ID);
    int GetID() const;
    void SetName(string Name);
    string GetName() const;
    void SetUseD(string UseD);
    string GetUseD() const;
    void SetUseZ(int UseZ);
    int GetUseZ() const;
    void SetUseZReq(int UseZReq);
    int GetUseZReq() const;
    
private:
    string Name;
    int ID;
    string Desc;
    
    vector<int> Prop;
    
    int UseZReq;
    int UseZ;
    string UseD;

    
};

#endif	/* ITEM_H */

