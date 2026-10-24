def hanoi_langkah(n):
    if n == 0:
        return 0
    # Rekursi: 2 * langkah(n - 1) + 1
    return 2 * hanoi_langkah(n - 1) + 1

n = int(input())
print(f"Jumlah langkah minimum untuk {n} cakram adalah {hanoi_langkah(n)}")