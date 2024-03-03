def solution(numbers):
    a = 0
    b = 0
    numbers.sort(reverse=True)
    a += numbers[0]
    b += numbers[1]
        
    return a * b 