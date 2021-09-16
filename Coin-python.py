n, k = map(int, input().split())

coin = []
count = 0


for i in range(n):
    num = int(input())
    coin.append(num)

coin.reverse()

for i in range(len(coin)):
    if k >= coin[i]:
        count += k //coin[i]
        k %= coin[i]
        

print(count)
