#pragma once

namespace space_age {

// TODO: add your solution here
    class space_age{
        public:
            space_age(long int seconds){
                age_in_seconds = seconds;
            }

            long seconds() const{
                return age_in_seconds;
            }

            double on_earth() const;
            double on_mercury() const;
            double on_venus() const;
            double on_mars() const;
            double on_jupiter() const;
            double on_saturn() const;
            double on_uranus() const;
            double on_neptune() const;
            
        private:
            long int age_in_seconds = 0;
    };
}  // namespace space_age
