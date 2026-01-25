#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string s){
        std::string res = "";

        for(unsigned int i=0; i<s.length(); i++){
            res += s[s.length()-1-i];
        }

        return res;
    }
}  // namespace reverse_string
