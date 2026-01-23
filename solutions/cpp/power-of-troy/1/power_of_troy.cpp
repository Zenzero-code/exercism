#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& h, std::string a_name){
        h.possession = std::make_unique<artifact>(a_name);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& a1, std::unique_ptr<artifact>& a2){
        std::swap(a1, a2);
    }

    void manifest_power(human& h, std::string p_name){
        h.own_power = std::make_shared<power>(p_name);
    }

    void use_power(human& h1, human& h2){
        h2.influenced_by = h1.own_power;
    }

    int power_intensity(human& h){
        return h.own_power.use_count();
    }
    
}  // namespace troy
