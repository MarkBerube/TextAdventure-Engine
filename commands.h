/*
 * File:   commands.h
 * Author: Mark Berube
 *
 * Created on March 20, 2012, 8:06 AM
 */
#include "Heads.h"

#ifndef COMMANDS_H
#define	COMMANDS_H
using namespace std;

Player* Intro() {
    string s;
    Player *ptr;
    cout << "Welcome to the world!" << endl;
    cout << "What is your name traveler?" << endl << "Enter your name: ";
    getline(cin, s);
    cout << "Ah, of course, you looked like a \"" << s <<
            "\". Would have called you that anyway." << endl <<
            "Now then, how about we start this adventure. To get an idea how to play, hit ?(or nothing) and learn the commands."
            << endl;

    ptr = new Player(s);

    return ptr;

}

void HelpMe() {

    cout << "HELP:" << endl;
    cout << "Good luck." << endl;

}

void Invalid() {

    cout << "Could you repeat that? Didn't quite catch that." << endl;

}

void Look(Player *p, vector<Map*> ml) {
    cout << " -- " << ml.at(p->GetLoc())->GetName() << " -- " << endl;
    cout << ml.at(p->GetLoc())->GetDesc() << endl;

}

void Go(Player *p, vector<Map*>ml, string p2) {
    if (p2 == "East" || p2 == "east") {
        if (p->GetLoc() == ml.at(p->GetLoc())->GetEast()) {
            cout << "You can't go that way!" << endl;
            return;
        }

        cout << "You traveled East of " << ml.at(p->GetLoc())->GetName() << "." << endl;
        p->SetLoc(ml.at(p->GetLoc())->GetEast());
        return;
    }

    if (p2 == "West" || p2 == "west") {
        if (p->GetLoc() == ml.at(p->GetLoc())->GetWest()) {
            cout << "You can't go that way!" << endl;
            return;
        }

        cout << "You traveled West of " << ml.at(p->GetLoc())->GetName() << "." << endl;
        p->SetLoc(ml.at(p->GetLoc())->GetWest());
        return;
    }

    if (p2 == "North" || p2 == "north") {
        if (p->GetLoc() == ml.at(p->GetLoc())->GetNorth()) {
            cout << "You can't go that way!" << endl;
            return;
        }

        cout << "You traveled North of " << ml.at(p->GetLoc())->GetName() << "." << endl;
        p->SetLoc(ml.at(p->GetLoc())->GetNorth());
        return;
    }

    if (p2 == "South" || p2 == "south") {
        if (p->GetLoc() == ml.at(p->GetLoc())->GetSouth()) {
            cout << "You can't go that way!" << endl;
            return;
        }

        cout << "You traveled South of " << ml.at(p->GetLoc())->GetName() << "." << endl;
        p->SetLoc(ml.at(p->GetLoc())->GetSouth());
        return;
    }
    Invalid();
    return;
}

int commandparse(Player *p, vector<Map*> ml) {

    string line;
    int lnum;
    string p1;
    string p2;

    getline(cin, line);

    if (line.empty()) {
        HelpMe();
        return 0;
    }

    if (line[0] == '?') {
        HelpMe();
        return 0;
    }

    lnum = line.find_first_of(" ", 1);
    p1 = line.substr(0, lnum);
    p2 = line.substr(lnum + 1, line.length() - 1);

    if (p1 == "Quit" || p1 == "quit") return 1;


    if (p1 == "look" || p1 == "Look") {
        Look(p, ml);
        return 0;
    }
    if (p1 == "go" || p1 == "Go") {
        Go(p, ml, p2);
        return 0;
    }
    if (p1 == "use" || p1 == "Use") {
        cout << "You used " << p2 << ",it was pretty awesome.";
        return 0;
    }

    Invalid();
    return 0;
}
#endif	/* COMMANDS_H */

