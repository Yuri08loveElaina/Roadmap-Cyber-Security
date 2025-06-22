def vigenere_decrypt(ciphertext, key):
    result = ""
    key = key.upper()
    key_length = len(key)
    key_int = [ord(i) - ord('A') for i in key]
    for i, c in enumerate(ciphertext):
        if c.isalpha():
            base = ord('A') if c.isupper() else ord('a')
            k = key_int[i % key_length]
            result += chr((ord(c) - base - k) % 26 + base)
        else:
            result += c
    return result

ciphertext = "Lxfopvefrnhr"
key = "LEMON"
plaintext = vigenere_decrypt(ciphertext, key)
print("Decrypted:", plaintext)
