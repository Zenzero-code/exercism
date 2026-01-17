#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> round_scores(student_scores.size());
    
    for(unsigned int i=0; i<student_scores.size(); i++)
        round_scores[i] = static_cast<int>(student_scores[i]);
    
    return round_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int counter = 0;

    for(unsigned int i=0; i<student_scores.size(); i++)
        if(student_scores[i] <= 40)
            counter++;
    
    return counter;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int score_range = (highest_score - 40)/4;
    std::array<int, 4> grades = {};
    
    for(int i=0; i<4; i++)
        grades[i] = 41 + (i * score_range);
    
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> rankings;

    for(unsigned int i=0; i<student_scores.size(); i++){
        std::string to_add = std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
        rankings.push_back(to_add);
    }
    
    return rankings;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    unsigned int perfect_score_pos = -1;
    
    for(unsigned int i=0; i<student_scores.size(); i++){
        if(student_scores[i] == 100){
            perfect_score_pos = i;
            break;
        }
    }
    
    if(perfect_score_pos != -1)
        return student_names[perfect_score_pos];
    
    return "";
}
