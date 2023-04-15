#pragma once
#include <iostream>

enum class CardType{
    Monster, Spell, Trap
};

std::string to_string(CardType type) {
    switch(type){
        case CardType::Monster : return "Monster";
        case CardType::Spell : return "Spell";
        case CardType::Trap : return "Trap";
    }
}

class Card{
    public:
        Card(const std::string& id, CardType type)
        : _id {id}
        , _type {type}
        {
        }

        const std::string& get_id() const{
            return _id;
        }

        CardType get_type() const{
            return _type;
        }

        const std::string& get_name() const{
            return _name;
        }

        const std::string& get_description()const{
            return _description;
        }

        void set_name(const std::string& name){
            _name = name;
        }

        void set_description(const std::string& description){
            _description = description;
        }

        const std::string& get_symbol() const { 
            return _symbol; 
        }


    protected:
        std::string _symbol;

    private:
        std::string _id;
        CardType _type;
        std::string _name;
        std::string _description;

};



