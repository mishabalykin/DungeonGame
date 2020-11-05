#ifndef _ITEM_H
#define _ITEM_H
#include "include/model/equip/EnchantedWeapon.h"
#include "include/model/equip/Artefact.h"
#include "include/model/ObjectOnField.h"

class Item : public ObjectOnField {
public:
    string name;

    Item(const string &name) : name(name) {

    }

    Item() {}
};

#endif //_ITEM_H