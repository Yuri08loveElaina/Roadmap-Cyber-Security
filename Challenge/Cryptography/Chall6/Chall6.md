Tạo hash file >echo -n "password123" | md5sum > hashes.txt
Chạy hashcat :hashcat -m 0 hashes.txt /path/to/wordlist/rockyou.txt
