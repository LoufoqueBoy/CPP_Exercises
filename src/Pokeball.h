#pragma once
#include <memory>
#include <utility>
#include "Pokemon.h"

using PokemonPtr =  std::unique_ptr<Pokemon>;
// A ball where a Pokemon sleeps.
class Pokeball
{
    public:
        Pokeball()
        {
        }

        bool empty() const{
           return _pokemon == nullptr; 
        }

        void store(PokemonPtr pokemoPtr) {
            _pokemon = std::move(pokemoPtr);
        }

        const Pokemon& pokemon()const {
            return *_pokemon;
        }


    private:
        PokemonPtr _pokemon;

};
