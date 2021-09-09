#include <iostream>
#include <map>
#include <set>  // Unoreder set would be better


int main() {
    int n; std::cin >> n;
    std::map<std::string, std::set<std::string>> courses;
    for (int i=0; i<n; i++) {
        std::string firstName, lastName, course;
        std::cin >> firstName >> lastName >> course;
        std::string name = firstName.append(lastName);
        if (courses.find(course) == courses.end()) {
            std::set<std::string> name_set;
            courses[course] = name_set;
            courses[course].insert(name);
        } else {
            if (courses[course].find(name) == courses[course].end()) {
                courses[course].insert(name);
            }
        }
    }

    for (auto &course : courses) {
        std::cout << course.first << " " << course.second.size() << std::endl;
    }

    return 0;
}