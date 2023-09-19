def binary_search(number_list, first_index, last_index, searched_value):
    if last_index >= first_index:
        middle_element_index = (first_index + last_index) // 2
        middle_element = number_list[middle_element_index]

        if middle_element == searched_value:
            return f"{middle_element} encontrado na posição {middle_element_index}"

        elif middle_element > searched_value:
            new_position = middle_element_index - 1
            # novo último índice é a nova posição
            return binary_search(
                number_list,
                first_index,
                new_position,
                searched_value,
            )

        elif middle_element < searched_value:
            new_position = middle_element_index + 1
            # novo primeiro índice é a nova posição
            return binary_search(
                number_list,
                new_position,
                last_index,
                searched_value,
            )

    else:
        return "Não aparece na lista"


def main():
    list = [1, 9, 11, 21, 34, 54, 67, 90]
    search = 34
    first = 0
    last = len(list) - 1

    binary_search_result = binary_search(list, first, last, search)

    print(
        "Busca binária: " + binary_search_result,
    )  # resultado da busca binária


if __name__ == "__main__":
    main()
