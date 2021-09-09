# Note: Can use defaultdict to speed things up
#       Can do it using only 1 set (SM's answer)

def main():
    courses = dict()
    name_check = set()

    n = int(input())
    for i in range(n):
        first_name, last_name, course = input().split()
        name_course = first_name + last_name + course
        if name_course in name_check:
            continue
        else:
            name_check.add(name_course)
            if course not in courses.keys():
                courses[course] = 1
            else:
                courses[course] += 1

    course_counts = [(k, v) for k, v in courses.items()]
    course_counts.sort(key=lambda x: x[0])

    for entry in course_counts:
        print(f"{entry[0]} {entry[1]}")


if __name__ == "__main__":
    main()