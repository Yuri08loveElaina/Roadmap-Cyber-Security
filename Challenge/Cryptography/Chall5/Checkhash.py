import hashlib

def file_hash(filename, algo='md5'):
    h = hashlib.new(algo)
    with open(filename, 'rb') as f:
        h.update(f.read())
    return h.hexdigest()

filename = 'password.txt'
print("MD5:", file_hash(filename, 'md5'))
print("SHA1:", file_hash(filename, 'sha1'))
print("SHA256:", file_hash(filename, 'sha256'))
