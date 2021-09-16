def main():
    n, t = map(int, input().split())
    input_array = list(map(int, input().split()))
    # sort first since many of the subtask benefits from a sorted array
    input_array.sort()

    if t == 1:
        # 2 pointer technique
        start_index = 0
        end_index = n-1
        for i in range(n-1):
            sum_of_2_numbers = input_array[start_index] + input_array[end_index]
            if sum_of_2_numbers == 7777:
                print("Yes")
                return
            elif sum_of_2_numbers < 7777:
                start_index += 1
            elif sum_of_2_numbers > 7777:
                end_index -= 1
        print("No")
    if t == 2:
        # if there are duplicates, they will be side by side in sorted array
        for i in range(n-1):
            if input_array[i] == input_array[i+1]:
                print("Contains duplicate")
                return
        print("Unique")
    if t == 3:
        # if there is an integer that appears >N/2 times
        # it will occupy the middle index of the sorted array
        # just get value at middle index and count it
        middle_index = n // 2
        number_check = input_array[middle_index]
        if middle_index < input_array.count(number_check):
            print(number_check)
        else:
            print(-1)
    if t == 4:
        # just get middle value since array is sorted
        if n % 2 == 1:
            print(input_array[n//2])
        else:
            print(f"{input_array[n//2-1]} {input_array[n//2]}")
    if t == 5:
        pruned_a = [x for x in input_array if 99 < x < 1000]
        print(" ".join(map(str, pruned_a)))


if __name__ == "__main__":
    main()
