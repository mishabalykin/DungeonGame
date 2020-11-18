#include "include/model/equip/Potion.h"


Potion::Potion(Level &level, string &fileName, string &name, string &type, string &subType, float x, float y, float w,
               float h, int layer, int state, const vector<pair<string, float>> &changesList) :
        Item(level, fileName, name, type, subType, x, y, w, h, layer, state) {
    this->changesList = changesList;
}
