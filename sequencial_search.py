def sequential_search(list, element):
    for index, item in enumerate(list):
        if item == element:
            return f"{element} encontrado na posição {index}"
    return "Não aparece na lista"


def main():
    list = [1, 9, 11, 21, 34, 54, 67, 90]
    search = 34

    sequential_search_result = sequential_search(list, search)

    print(
        "Busca sequencial: " + sequential_search_result,
    )  # resultado da busca sequencial


if __name__ == "__main__":
    main()
