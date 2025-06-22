# 🐣 Entry-Level Pwn Roadmap (Binary Exploitation) by Elaina Core

> 🎯 Mục tiêu: Hiểu và thực hành khai thác các lỗi bảo mật cơ bản trong binary  
> ⏳ Thời gian khuyến nghị: 4–8 tuần với nền tảng C căn bản  
> 🛠️ Dành cho ai muốn theo hướng Offensive Security, CTF Pwn

---

## 🔹 PHẦN 1 – KIẾN THỨC NỀN TẢNG CẦN CÓ

- Ngôn ngữ C căn bản (biến, con trỏ, mảng, hàm)
- Hệ điều hành Linux, dòng lệnh, quyền truy cập file
- Lệnh gdb debug cơ bản: break, run, next, step, print, disas
- Kiến thức về bộ nhớ: stack, heap, data segment

---

## 🔹 PHẦN 2 – LÀM QUEN VỚI FILE BINARY (ELF)

- Khái niệm ELF (Executable and Linkable Format)
- Phân tích file với lệnh:
  - `file binary`
  - `readelf -h binary`
  - `objdump -d binary > binary.asm`
  - `strings binary`
- Chạy và debug file bằng gdb

---

## 🔹 PHẦN 3 – STACK BUFFER OVERFLOW (BOF)

- Lỗi tràn bộ đệm vùng stack
- Cách overwrite EIP/RIP để redirect luồng chạy
- Đọc và hiểu shellcode đơn giản
- Bypass NX (Non-executable stack) bằng ROP (giới thiệu sơ)

---

## 🔹 PHẦN 4 – VIẾT SHELLCODE VÀ PAYLOAD

- Shellcode Linux x86/x64 cơ bản (execve, read, write)
- NOP sled, inject shellcode vào bộ đệm
- Viết payload bằng Python (pwntools)
- Gửi payload qua input file hoặc network socket

---

## 🔹 PHẦN 5 – RETURN ORIENTED PROGRAMMING (ROP)

- Khi không thể inject shellcode, dùng ROP để gọi hàm system("/bin/sh")
- Tìm gadget bằng ROPgadget, ropper
- Điều khiển tham số hàm (rdi, rsi, rdx cho x64)
- Chuỗi ROP mẫu, gọi hàm mprotect, mmap

---

## 🔹 PHẦN 6 – FORMAT STRING

- Lỗi format string, đọc/ghi bộ nhớ từ xa
- Leak địa chỉ trên stack/libc
- Ghi đè Global Offset Table (GOT) để redirect hàm
- Viết exploit format string bằng pwntools

---

## 🔹 PHẦN 7 – HEAP EXPLOITATION

- Khái niệm malloc, free, chunk, heap metadata
- Các kỹ thuật tấn công: fastbin dup, tcache poisoning
- Lab nổi tiếng: house of force, house of spirit, tcache dup
- Dùng heap để ghi đè function pointer, vtable

---

## 🔹 PHẦN 8 – TOOLKIT PWN

- `gdb` + plugin: pwndbg, peda, gef
- `pwntools`: viết script exploit, send/recv
- `ROPgadget`, `ropper`: tìm gadget ROP
- `checksec`: kiểm tra bảo vệ binary (NX, PIE, Canary)
- `libc-database` & `one_gadget`: tìm libc và gadgets

---

## 🔹 PHẦN 9 – LAB THỰC HÀNH

- [Protostar Exploit Education](https://exploit.education/protostar/)
- [ROP Emporium](https://ropemporium.com/)
- [picoCTF Binary Exploitation](https://play.picoctf.org/)
- [HackTheBox Pwn Challenges](https://app.hackthebox.com/challenges)

---

## 🏁 TỔNG KẾT VÀ HƯỚNG PHÁT TRIỂN

- Nắm vững cơ bản Stack Overflow, ROP, Format String, Heap Exploit
- Thực hành nhiều lab trên CTF platform
- Học reverse engineering (Ghidra, IDA Pro)
- Nâng cao: bypass ASLR, PIE, NX, canary
- Viết tool khai thác tự động

---

## 📚 TÀI LIỆU THAM KHẢO

- [LiveOverflow Youtube](https://www.youtube.com/c/LiveOverflow)
- [CTF Wiki - Binary Exploitation](https://ctf-wiki.org/pwn/)
- [Pwntools Documentation](https://docs.pwntools.com/en/stable/)
- [How2Heap](https://github.com/shellphish/how2heap)
- [Exploit Education](https://exploit.education/)

---

📌 **Biên soạn bởi Yuri08 | Elaina Core**  
📅 Last updated: 2025-06-22  
📩 Contact: github.com/Yuri08loveElaina
