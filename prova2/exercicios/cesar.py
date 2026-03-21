def shift_letter(text: str, offset: int):
    result = ''
    for letter in text:
        if letter == ' ':
            result += ' '
            continue

        # Usar valor ASCII
        ascii_val = ord(letter)
        current_index = ascii_val - ord('A')
        new_index = current_index - offset

        normalized = new_index % 26
        result += chr(normalized + ord('A'))

    return result


text = "Hzn oerir erivfnb fboer pevcgbtensvn".upper()

for i in range(26):
    result = shift_letter(text, i)
    print(f"Shift {i}: ", result)
