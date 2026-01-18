// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#ifndef DOCTOR_DATA_H
#define DOCTOR_DATA_H
#include <string>

namespace star_map{
    enum class System{
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven{
    class Vessel{
        public:
            Vessel(std::string name, int generation, star_map::System current_system = star_map::System::Sol);

            Vessel replicate(std::string n);
            bool shoot_buster();
            void make_buster();
    
            std::string name = "";
            int generation = 0;
            int busters = 0;
            star_map::System current_system{};
    };

    std::string get_older_bob(const Vessel&, const Vessel&);
    bool in_the_same_system(const Vessel&, const Vessel&);
}

/*
hp1, üapöhp2ö % Äcountöiöma1,
    öhp2ö % Älawöhp3öö / önextöstepö % Ädacöiöml1ö % Älawö7ö % Ädacöiömb1ö %
        Ärandomöö % Äscrö9sö % Äsirö9sö % Äxctöhr1ö % Äaddöiömx1ö %
        Ädacöiömx1ö % Äswapö % Äaddöiömy1ö % Ädacöiömy1ö % Ärandomö % Äscrö9sö %
        Äsirö9sö % Äxctöhr2ö % Ädacöiömdyö % Ädioöiömdxö % Äsetupö.hpt,
    3ö % Älacöranö % Ädacöiömth
*/
#endif