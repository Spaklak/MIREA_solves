nums = []
i = True
while i:
   i = input()
   if i: nums.append(int(i))

counts = []
for i in range(len(nums)):
    count = 0
    for x in range(i+1, len(nums)):
        if (nums[i]) > nums[x]:
            count += 1
    counts.append(count)
print(counts)