#pragma once
#pragma once
#include "Card.hpp"

enum class TrapType{
    Normal, Continuous,  Counter
};


std::string to_string(TrapType type) {
    switch(type){
        case TrapType::Normal : return "Normal";
        case TrapType::Continuous : return "Continuous";
        case TrapType::Counter : return "Counter";
    }
}

class Trap : public Card{
    public:
        Trap(const std::string& id, const std::string& name, TrapType type)
        : Card{id, CardType::Trap}
        , _type {type}
        {
            this->set_name(name);
            _symbol = u8"罠";
        }

        TrapType get_trap_type() const{
            return _type;
        }

    private:
        TrapType _type;
};

