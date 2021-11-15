# 비트 연산자을 통해 짝수, 홀수 판별
# XOR 연산자 :: 홀수이면 -1, 짝수이면 +1
# AND 연산자 :: 홀수이면 1, 짝수면 0 

def oddEven(num) :
    return ["Even", "Odd"][num & 1]