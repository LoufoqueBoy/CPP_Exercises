#pragma once
#include <iostream>
#include <math.h>
#include <optional>
#include "Plush.hpp"

class PlushStore{
    public:
        PlushStore(const std::string& name)
        : _name { name }
        {
        
        }

         void loan (int loan){
            _wealth_amount += loan;
        }

        int make_plush(int price){
            if(_wealth_amount > 0 && !failure){
                _experience ++;
                _stock_size.emplace_back(price + fmax(_experience,((_experience * price) / 100)));
                if(_wealth_amount - price < 0){
                    _wealth_amount = 0;
                    failure = true;
                }
                else{
                    _wealth_amount -= price;
                }
            }
            return price + fmax(_experience,((_experience * price) / 100));
        }

        std::optional<Plush> buy(int money){
            for(auto it = _stock_size.begin(); it != _stock_size.end(); it++){
                if(money >= it->get_cost()){
                    _wealth_amount += it->get_cost();
                    auto plush = *it;
                    _stock_size.erase(it);
                    return plush;
                }
            }
            return std::nullopt;
        }

        int get_experience(){
            return _experience;
        }

        const std::string& get_name() const{
            return _name;
        }

        int get_debt_amount(){
            return _wealth_amount + (0.1 * _wealth_amount);
        }

        int get_wealth_amount() const{
            return _wealth_amount;
        }
        int get_stock_size() const{
            return _stock_size.size();
        }


    private:
        const std::string _name;
        int _wealth_amount = 0;
        std::vector<Plush> _stock_size;
        int _experience = 0;
        bool failure = false;
        
};