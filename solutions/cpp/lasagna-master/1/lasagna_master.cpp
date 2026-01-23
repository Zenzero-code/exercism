#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
    int preparationTime(std::vector<std::string>& l_vector, int avg_time){
        return static_cast<int>(l_vector.size()) * avg_time;
    }

    //if the average time is not passed, we use 2 by default
    int preparationTime(std::vector<std::string>& l_vector){
        return static_cast<int>(l_vector.size()) * 2;
    }

    amount quantities(std::vector<std::string>& l_vector){
        amount res{0, 0};

        for(unsigned int i=0; i<l_vector.size(); i++){
            if(l_vector.at(i) == "noodles")
                res.noodles += 50;
            if(l_vector.at(i) == "sauce")
                res.sauce += 0.2;
        }

        return res;
    }

    void addSecretIngredient(std::vector<std::string>& my_list, const std::vector<std::string>& friend_list){
        my_list.at(my_list.size() - 1) = friend_list.at(friend_list.size() - 1);
    }

    std::vector<double> scaleRecipe(const std::vector<double>& two_ppl_portions, int portions_num){
        std::vector scaled_portions(two_ppl_portions);

        for(unsigned int i=0; i<scaled_portions.size(); i++){
            scaled_portions.at(i) = (scaled_portions.at(i) * portions_num)/2;
        }

        return scaled_portions;
    }

    void addSecretIngredient(std::vector<std::string>& my_list, std::string secret){
        my_list.at(my_list.size() - 1) = secret;
    }
    
}  // namespace lasagna_master
