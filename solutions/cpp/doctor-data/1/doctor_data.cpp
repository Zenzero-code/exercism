// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#include "doctor_data.h"

namespace heaven{
    Vessel::Vessel(std::string name, int generation, star_map::System current_system) : name(name), generation(generation), current_system(current_system){};

    Vessel Vessel::replicate(std::string n){
        Vessel new_vessel{n, generation+1, current_system};
        return new_vessel;
    }

    bool Vessel::shoot_buster(){
        if(busters <= 0)
            return false;

        busters--;
        return true;
    }
    
    void Vessel::make_buster(){
        busters++;
    }

    std::string get_older_bob(const Vessel& v1, const Vessel& v2){
        if(v1.generation <= v2.generation)
            return v1.name;

        return v2.name;
    }

    bool in_the_same_system(const Vessel& v1, const Vessel& v2){
        if(v1.current_system == v2.current_system)
            return true;

        return false;
    }

}


/*
hp4,ölacöiömthö%Äsmaö%Äsubö(311040ö%Äspaö%Äaddö(311040ö%Ädacöiömthö%Äcountö.hpt,hp4ö%Äxctöhd2ö%Ädacöiöma1
hp2,öjmpö.
*/
