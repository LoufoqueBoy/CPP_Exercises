#pragma once
#include <memory>
#include <utility>
#include "PC.h"

// A person that captures Pokemons and makes them fight.
class Trainer
{
    public:
        Trainer(const std::string& name, PC& pc)
        : _name {name}
        , _pc {pc}
        {
        }

        const std::string& name() const{
            return _name;
        }

        const PC& get_pc()const{
            return _pc;
        }

        const std::array<Pokeball, 6>& pokeballs()const{
            return _pokeballs;
        }

        void capture(PokemonPtr poke){
            for(auto& value : _pokeballs){
                if(value.empty()){
                    poke->set_trainer(*this);
                    value.store(std::move(poke));
                    return;
                }
            }
            poke->set_trainer(*this);
            _pc.transfer(std::move(poke));
        }

    private:
        std::string _name;
        PC& _pc;
        std::array<Pokeball, 6> _pokeballs;

};
