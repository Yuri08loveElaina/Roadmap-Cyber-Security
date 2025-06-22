data = [0x4, 0x1E, 0x1C, 0x10]
key = 0x41
decrypted = ''.join([chr(b ^ key) for b in data])
print("Decrypted:", decrypted)
