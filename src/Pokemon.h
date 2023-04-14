#pragma once

#include <string>
#include <iostream>

class Trainer;

// A creature that is cute and can fight other ones.
class Pokemon
{
    public:
        Pokemon(const std::string& name)
        : _name {name}
        , _id{_idStatic++}
        {
        }

        Pokemon(const Pokemon& other)
        : _name {other._name}
        , _id{_idStatic++}
        {
        }

        Pokemon& operator=(const Pokemon& other){
            if(this != &other){
                _name = other._name;
            }
            return *this;
        }

        const std::string& name() const{
            return _name;
        }

        int id() const{
            return _id;
        }

        const Trainer* trainer() const{
            return _trainer;
        }

        void set_trainer(const Trainer& train){
            _trainer = &train;
        }

    private:
        std::string _name;
        static inline int _idStatic = 0;
        int _id = 0;
        const Trainer* _trainer;
};
