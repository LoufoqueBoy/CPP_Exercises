#pragma once
#include <memory>
#include <utility>
#include "Pokeball.h"

// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.
class PC
{
    public:
        PC()
        {
        }

        const std::vector<PokemonPtr>& pokemons()const {
            return _pokemons;
        }

        void transfer(PokemonPtr poke){
            _pokemons.emplace_back(std::move(poke));
        }
    
    private:
        std::vector<PokemonPtr> _pokemons;

};
