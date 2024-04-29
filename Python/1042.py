nums = input().split()
for i in range(len(nums)):
    nums[i] = int(nums[i])
numsOrden = nums[:]
numsOrden.sort()
for i in range(len(numsOrden)):
    print(numsOrden[i])
print("", end="\n")
for i in range(len(nums)):
    print(nums[i])
