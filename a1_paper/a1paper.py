def main():
    w = 2**(-5/4)
    h = 2**(-3/4)
    needed = 2
    tot = 0

    _ = int(input().strip())
    papers = map(int, input().split())

    for x in papers:
        tot += h * (needed / 2)
        needed = (needed - x) * 2
        if needed < 1:
            print(tot)
            return
        h, w = w, h/2
    print("impossible")
    return


if __name__ == '__main__':
    main()