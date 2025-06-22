# Lộ Trình Reverse Engineering Entry-Level Siêu Chi Tiết

> Dành cho người mới bắt đầu học RE, mục tiêu làm quen với phân tích file nhị phân, đọc hiểu assembly cơ bản và patch binary.

---

## 1. Mục tiêu Giai đoạn Entry

| Mục tiêu                         | Mô tả chi tiết                           |
|---------------------------------|-----------------------------------------|
| Hiểu cấu trúc file thực thi      | ELF (Linux) / PE (Windows)              |
| Đọc hiểu assembly cơ bản         | Các lệnh x86/x64: mov, call, cmp, jmp   |
| Làm quen với debugger            | Sử dụng gdb, IDA Free, Ghidra           |
| Phân tích mã máy đơn giản        | Tìm hàm `main`, `strcmp`, vòng lặp      |
| Thực hành patch chương trình    | Sửa điều kiện kiểm tra password          |
| Hiểu phân tích tĩnh và động      | Khi nào dùng Ghidra, khi nào dùng gdb   |

---

## 2. Công cụ Sử Dụng

| Công cụ           | Mục đích                                   |
|-------------------|--------------------------------------------|
| gdb + pwndbg      | Debug nhị phân, theo dõi register, step    |
| Ghidra / IDA Free | Phân tích tĩnh, xem flow, decompile         |
| objdump, readelf  | Xem header, dump assembly                    |
| strings, hexedit  | Tìm chuỗi, chỉnh sửa nhị phân                |
| Python + pwntools | Viết script hỗ trợ exploit (giai đoạn sau) |

---

## 3. Kiến thức Nền Tảng

### 3.1 Assembly cơ bản (x86/x64)

- Thanh ghi: `eax`, `ebx`, `ecx`, `edx`, `rsp`, `rbp`, `rip`  
- Các lệnh phổ biến: `mov` (di chuyển dữ liệu), `call` (gọi hàm), `jmp` (nhảy điều kiện hoặc không điều kiện), `cmp` (so sánh), `je`, `jne` (nhảy nếu bằng/không bằng), `push`, `pop` (thao tác stack), `ret` (trả về hàm)  

### 3.2 Cấu trúc file ELF / PE

- Sections: `.text` (code), `.data`, `.rodata` (chuỗi), `.bss`  
- Entry point, symbol table  
- GOT/PLT (Global Offset Table/Procedure Linkage Table)  

### 3.3 Phân tích tĩnh và động

- Phân tích tĩnh: xem code, đồ thị hàm bằng Ghidra hoặc IDA  
- Phân tích động: chạy file với gdb, xem register, trace execution

---

## 4. Lịch trình học & bài tập thực hành

### Tuần 1-2: Làm quen & Phân tích nhị phân cơ bản

- Xem header file ELF: `readelf -h <file>`  
- Dump assembly: `objdump -d <file>`  
- Tìm chuỗi: `strings <file> | grep "password"`  
- Viết chương trình C đơn giản có `strcmp` check password  
- Dùng Ghidra mở file, xem hàm `main`  
- Patch binary thay `jne` thành `je` để bypass kiểm tra  

### Tuần 3-4: Debug với gdb

- Debug chạy step qua từng lệnh assembly  
- Quan sát thay đổi register, stack  
- Thực hành ghi đè return address  
- Thực hành giả mạo giá trị trả về hàm `strcmp`  

### Tuần 5-6: Phân tích tĩnh sâu hơn

- Đọc flow control phức tạp (vòng lặp, if-else)  
- Phân tích hàm gọi đệ quy, xử lý chuỗi mã hóa  
- Viết script Python giải mã XOR hoặc Base64  

---

## 5. Tài liệu Tham khảo

- https://github.com/0xAX/asm  
- https://www.youtube.com/watch?v=QeEjaQUvx_M  
- https://picoctf.org/  
- https://opensecuritytraining.info/IntroX86.html  

---

## 6. Kết quả mong đợi cuối Entry

| Kỹ năng | Mô tả |
|--------|------|
| Phân tích file ELF/PE cơ bản | Hiểu header, segment, section |
| Debug dòng lệnh | Biết dùng `gdb` để quan sát flow |
| Đọc/patch nhị phân | Biết sửa điều kiện trong binary |
| Dò chuỗi mã hóa | Dùng Python viết decrypt script |
| Dùng công cụ phân tích tĩnh | Ghidra/IDA Free để dịch code ra C-like |

---

> **Bạn đã sẵn sàng để bước vào thế giới Reverse Engineering? Hãy bắt đầu với những bài lab đơn giản và dần nâng cao kỹ năng!**

---

*Elaina Core* – Cùng bạn đồng hành trên con đường trở thành thiên tài RE.
