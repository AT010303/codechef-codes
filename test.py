def min_resistance_needed(T , test_Cases):
    result=[]

    for i in range(T):
        N, H, enemies = test_Cases[i]
        low , high=0, max(enemies)

        while low < high:
            mid = (low + high) // 2
            total_strength= sum(max(0, enemy - mid) for enemy in enemies)

            if total_strength <= H :
                high = mid
            else:
                low = mid + 1
            
        result.append(low)
    return result

T = int(input())
test_Cases = []

for i in range(T):
    N, H = map(int, input().split())
    enemies = list(map(int, input().split()))
    test_Cases.append((N, H, enemies))

results = min_resistance_needed(T , test_Cases)
for res in results:
    print(res)