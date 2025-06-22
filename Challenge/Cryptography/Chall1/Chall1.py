def caesar_decrypt(ciphertext, shift=3):
    result = ""
    for c in ciphertext:
        if c.isalpha():
            base = ord('A') if c.isupper() else ord('a')
            result += chr((ord(c) - base - shift) % 26 + base)
        else:
            result += c
    return result

ciphertext = "Khoor Zruog!"
plaintext = caesar_decrypt(ciphertext)
print("Decrypted:", plaintext)
