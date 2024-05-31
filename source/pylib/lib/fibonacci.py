def fibonacci(n):
    """
    매개변수로 들어온 n값 미만의 피보나치 수열을 출력
    입력인수는 정수
    return X
    
    ex. n=5이면, 0 1 1 2 3 5
    """
    a,b = 0,1
    while a<n:
        print(a, end=' ')
        a, b = b, a+b
    print(end='\n')

if __name__=='__main__':
    fibonacci(100)
    print(__name__, '에서 테스트함')