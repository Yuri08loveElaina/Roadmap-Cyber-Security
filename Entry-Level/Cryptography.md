# Lộ Trình Cryptography Entry-Level Siêu Chi Tiết

> Dành cho người mới bắt đầu học Cryptography, làm quen các thuật toán cơ bản, giải mã, và ứng dụng.

---

## 1. Mục tiêu Giai đoạn Entry

| Mục tiêu                         | Mô tả chi tiết                           |
|---------------------------------|-----------------------------------------|
| Hiểu khái niệm mã hóa cơ bản     | Mã hóa, giải mã, khóa công khai/riêng tư|
| Nắm thuật toán mã hóa đơn giản   | Caesar, Vigenère, XOR, Base64            |
| Giải mã mã đơn giản              | Caesar, XOR cipher, mã thay thế          |
| Hiểu hash và ứng dụng            | MD5, SHA-1, SHA-256                      |
| Làm quen công cụ mã hóa          | openssl, hashcat, Python Crypto          |

---

## 2. Công cụ Sử Dụng

| Công cụ           | Mục đích                               |
|-------------------|----------------------------------------|
| openssl           | Mã hóa/giải mã, tạo và kiểm tra hash   |
| hashcat           | Crack hash                            |
| CyberChef         | Mã hóa, giải mã online                 |
| Python + PyCryptodome | Viết script mã hóa, giải mã          |

---

## 3. Kiến thức nền tảng

- **Caesar cipher:** dịch chữ cái theo số bước  
- **Vigenère cipher:** mã hóa với key dạng chuỗi  
- **XOR cipher:** XOR dữ liệu với khóa byte  
- **Base64:** mã hóa nhị phân sang chuỗi  
- **Hash:** MD5, SHA-1, SHA-256  

---

## 4. Lịch trình học & lệnh thực hành

### Tuần 1-2: Mã hóa và giải mã cơ bản

- Mã Base64:  
  `echo "Hello" | base64`  
- Giải Base64:  
  `echo "SGVsbG8=" | base64 -d`  
- Giải mã Caesar cipher (dịch ngược 3 bước) tự viết Python hoặc tay  
- Giải mã XOR cipher với key biết trước bằng Python hoặc bash  

### Tuần 3-4: Hash function và kiểm tra

- Tạo hash file:  
  `md5sum file.txt`  
  `sha1sum file.txt`  
  `sha256sum file.txt`  
- Viết script Python kiểm tra hash  
- Dùng hashcat brute-force hash MD5:  
  `hashcat -m 0 hash.txt wordlist.txt`  

### Tuần 5-6: openssl và mã hóa RSA

- Tạo cặp khóa RSA 2048-bit:  
  `openssl genpkey -algorithm RSA -out private.pem -pkeyopt rsa_keygen_bits:2048`  
  `openssl rsa -pubout -in private.pem -out public.pem`  
- Mã hóa file bằng public key:  
  `openssl rsautl -encrypt -pubin -inkey public.pem -in message.txt -out message.enc`  
- Giải mã file bằng private key:  
  `openssl rsautl -decrypt -inkey private.pem -in message.enc -out message.dec.txt`  

---

## 5. Tài liệu tham khảo

- https://cryptopals.com/  
- https://pycryptodome.readthedocs.io/en/latest/  
- https://www.openssl.org/docs/man1.1.1/man1/  
- https://gchq.github.io/CyberChef/  

---

## 6. Kết quả mong đợi cuối Entry

| Kỹ năng                  | Mô tả                                |
|--------------------------|-------------------------------------|
| Hiểu thuật toán cơ bản    | Giải mã Caesar, XOR, Base64         |
| Dùng hash function       | Tạo và kiểm tra hash MD5/SHA1/SHA256|
| Sử dụng openssl cơ bản   | Tạo khóa, mã hóa, giải mã RSA       |
| Viết script đơn giản     | Python mã hóa/giải mã cơ bản         |

---

*Elaina Core* – Đồng hành cùng bạn trên con đường làm chủ Cryptography.
