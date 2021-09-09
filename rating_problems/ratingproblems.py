def main():
    n, k = map(int, input().split())
    total = 0
    for i in range(k):
        total += int(input())
    max_total = (total + (n-k)*3)/n
    min_total = (total - (n-k)*3)/n
    print(f"{min_total} {max_total}")


if __name__ == "__main__":
    main()