def jumlah_digit(n):
    if n == 0:
        return 0
    return (n % 10) + jumlah_digit(n // 10)

n = int(input())
print(f"Jumlah digit dari {n} adalah {jumlah_digit(n)}")