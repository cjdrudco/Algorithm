def solution(n, k):
    dc = (n // 10) * 2000
    price = n * 12000 + k * 2000 - dc
    return price
    