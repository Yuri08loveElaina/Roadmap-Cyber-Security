1. Pwn1 – Simple Buffer Overflow
Mục tiêu:
Khai thác lỗi tràn bộ đệm stack (buffer overflow) do fgets(buf, 256, stdin) đọc quá kích thước buffer buf[64].

Yêu cầu:

Gửi payload đủ dài để tràn vùng buf, ghi đè lên return address trên stack.

Thay đổi return address thành địa chỉ hàm win() để thực thi shell /bin/sh.

Kỹ năng cần:

Hiểu cấu trúc stack frame

Tính toán offset đến return address

Tìm địa chỉ hàm win() trong binary (dùng gdb hoặc objdump)

Tạo payload tương ứng (ví dụ với pwntools)

2. Pwn2 – Buffer Overflow có Canary
Mục tiêu:
Binary bật bảo vệ stack canary (Stack Protector), khiến tràn buffer nếu không đúng canary sẽ crash.

Yêu cầu:

Tìm cách rò rỉ giá trị canary (ví dụ leak từ lỗi khác hoặc qua debug).

Gửi payload có canary đúng để không bị phát hiện.

Ghi đè return address thành win() và thực thi shell.

Kỹ năng cần:

Hiểu cơ chế stack canary

Tìm cách leak hoặc đoán canary

Kết hợp payload đúng cấu trúc bộ nhớ có canary

3. Pwn3 – Buffer Overflow có NX (No eXecute) + PIE tắt
Mục tiêu:
Binary có NX (không cho phép code trên stack) và bật ASLR (bạn đã tắt PIE để địa chỉ tĩnh).

Yêu cầu:

Vì không thể inject shellcode trên stack, bạn phải xây dựng ROP chain (Return Oriented Programming) để gọi win().

Tạo payload ghi đè return address thành chuỗi địa chỉ gadget ROP hoặc trực tiếp là hàm win().

Kỹ năng cần:

Hiểu NX, ASLR, PIE

Dùng công cụ tìm gadget (ROPgadget, ropper)

Viết payload ROP bằng pwntools hoặc thủ công

Tính toán offset chính xác
