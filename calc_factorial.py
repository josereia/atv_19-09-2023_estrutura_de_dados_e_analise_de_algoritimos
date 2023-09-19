def calculate_factorial(n):
    if n == 0:
        return 1
    else:
        return n * calculate_factorial(n - 1)


def main():
    number = 5
    result = calculate_factorial(number)
    print(f"O fatorial de {number} é {result}")


if __name__ == "__main__":
    main()
