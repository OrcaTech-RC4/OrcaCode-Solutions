def main():
    d = list()
    bracket_dict = {'(': ')',
                    '[': ']',
                    '{': '}'}

    n = int(input())
    line = input()

    for i in range(n):
        if line[i] == " ":
            continue
        if line[i] == "(" or line[i] == "[" or line[i] == "{":
            d.append(line[i])
            continue
        if len(d) == 0:
            print(f"{line[i]} {i}")
            return
        top_element = d.pop()
        if line[i] != bracket_dict[top_element]:
            print(f"{line[i]} {i}")
            return
    print("ok so far")


if __name__ == "__main__":
    main()
