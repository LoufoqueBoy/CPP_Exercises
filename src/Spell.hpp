#pragma once
#include "Card.hpp"

enum class SpellType{
    Normal, Equip,  Continuous, QuickPlay, Field
};


std::string to_string(SpellType type) {
    switch(type){
        case SpellType::Normal : return "Normal";
        case SpellType::Equip : return "Equip";
        case SpellType::Continuous : return "Continuous";
        case SpellType::QuickPlay : return "Quick-Play";
        case SpellType::Field : return "Field";
    }
}

class Spell : public Card{
    public:
        Spell(const std::string& id, const std::string& name, SpellType type)
        : Card{id, CardType::Spell}
        , _type {type}
        {
            this->set_name(name);
            _symbol = u8"魔";
        }

        SpellType get_spell_type() const{
            return _type;
        }

    private:
        SpellType _type;
};

