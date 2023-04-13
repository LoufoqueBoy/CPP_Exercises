#include <iostream>
#include <set>
#include <vector>

std::set<std::string> make_exit_commands{
    return {"q", "quit", "e", "exit" };
}

bool execute_instruction(std::istream& input; ){
    
}
int main()
{
    while (true)
    {
        std::string exit;
        std::cin >> exit;
        for(auto it = make_exit_commands.begin(); it != make_exit_commands.end(); it++){
            if(exit == *it){
                flag = true;
                break;
            }
        }
        if(exit == "add"){
            std::string w1;
            std::string w2;
            std::cin >> w1;
            std::cin >> w2;
            std::cout << w1 << " => " << w2 << std::endl;
        }
          if(exit == "translate"){
            std::string w1;
            std::string w2;
            std::cin >> w1;
            std::cin >> w2;
            if(w2 == ""){
                std::cout << "???" << std::endl;
            }
            else{
                std::cout << w2 << std::endl;
            }
        }
        if(flag){
            return 0;
        }
    }
    return 0;
}