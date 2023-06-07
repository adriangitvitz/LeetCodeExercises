def majorityElement(nums: list) -> int:
    frequencies: dict = {}
    num_size: int = len(nums)
    for v in nums:
        if v > 0:
            if v in frequencies:
                frequencies[v] += 1
            else:
                frequencies[v] = 1
            if frequencies[v] > (num_size // 2):
                return v
    return 1


# Boyer–Moore majority vote algorithm
# def majorityElement(nums: list) -> int:
#     t,c = 0,0
#     for v in nums:
#         if c == 0:
#             t = v
#             c = 1
#         elif t == v:
#             c += 1
#         else:
#             c -= 1
#     return t


def main():
    nums: list = [3, 2, 3]
    k: int = majorityElement(nums)
    print(k)


if __name__ == "__main__":
    main()
