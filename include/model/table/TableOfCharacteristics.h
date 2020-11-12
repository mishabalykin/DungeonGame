#ifndef _TABLEOFCHARACTERISTICS_H
#define _TABLEOFCHARACTERISTICS_H

#include "Characteristic.h"

enum Shortnames {
    hp, mxhp, pr, pw, st, lp
};


class TableOfCharacteristics {
public:
//  Iterator it;
    Characteristic chars[4];

    Characteristic getCharacteristicByShortName(string shortname);

    void changeCharacteristicByShortName(string shortname, int diff);

    int getCount();

private:
//  map array;
};

#endif //_TABLEOFCHARACTERISTICS_H