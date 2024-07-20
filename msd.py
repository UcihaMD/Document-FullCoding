def cek_prima(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

number = int(input("Masukkan angka untuk diperiksa keprimaan: "))
if cek_prima(number):
    print(f"{number} adalah bilangan prima.")
else:
    print(f"{number} bukan bilangan prima.")


def faktorial(n):
    if n == 0:
        return 1
    else:
        return n * faktorial(n-1)

number = int(input("Masukkan angka untuk dihitung faktorialnya: "))
print(f"Faktorial dari {number} adalah {faktorial(number)}")
