def majorityElement(nums: list) -> int:
    frequencies: dict = {}
    num_size: int = len(nums)
    for v in nums:
        if v > 0:
            f = v % num_size
            if f in frequencies:
                frequencies[f] += 1
            else:
                frequencies[f] = 1
            if frequencies[f] > (num_size // 2):
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
    nums: list = [2, 2, 1, 1, 1, 2, 2]
    k: int = majorityElement(nums)
    print(k)


if __name__ == "__main__":
    main()
