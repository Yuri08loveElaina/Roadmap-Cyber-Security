# 🕵️‍♂️ OHSINT Entry-Level Roadmap (by Elaina Core)

> 📌 Mục tiêu: Biết cách tìm kiếm thông tin về cá nhân, username, IP, domain, ảnh từ nguồn công khai  
> ⏳ Thời gian khuyến nghị: 1–2 tuần  
> 🛠️ Phù hợp: Red Team, Threat Intel, Trinh sát mạng xã hội, Phân tích CTI

---

## 🔹 PHẦN 1 – GIỚI THIỆU OSINT

### 📘 Khái niệm:
- **OSINT (Open Source Intelligence)**: Truy tìm từ nguồn công khai
- Mục đích: thu thập thông tin từ internet công khai không cần khai thác
- OSINT khác với hacking: không cần truy cập trái phép
- Chu trình OSINT: `Collection → Processing → Analysis → Report`

### ✅ Bài tập:
- Google: "Tên bạn" site:facebook.com
- Google: "email@gmail.com" site:github.com

## 🔹 PHẦN 2 – CÁC LOẠI DỮ LIỆU PHỔ BIẾN

Dữ liệu	             Ví dụ.         	Kỹ thuật tìm kiếm

Họ tên	         Nguyễn Văn A	     Google, Facebook, LinkedIn

Email.           	a@gmail.com.     	Hunter.io, EmailRep.io

Username	         admin123	        NameCheck, Sherlock

Domain         	example.com	       Whois, crt.sh, DNSDumpster

IP	         1.2.3.4	             ipinfo.io, Shodan

Ảnh	        ảnh đại diện           Google Reverse Image, ExifTool

## 🔹 PHẦN 3 – GOOGLE DORKS CƠ BẢN
🧠 Dork mẫu:

site:facebook.com "Nguyễn Văn Tuan"

filetype:pdf "password" site:gov.vn

intitle:"index of" "backup.zip"

✅ Bài tập:
- Tìm bài viết bạn đã từng post nhưng đã xóa khỏi FB (dùng cache)

- Tìm file rò rỉ của trường bạn học (PDF, doc)

- Tìm blog/website chứa password công khai (filetype:env)

## 🔹 PHẦN 4 – DÒ TÊN NGƯỜI DÙNG (USERNAME OSINT)
🧰 Công cụ:
- https://namecheckup.com

- https://whatsmyname.app

- Sherlock (tool tìm username)

✅ Bài tập:
- Dò username yuri08 trên toàn bộ social media

-Phân tích hành vi dựa trên thông tin public:

 Avatar

Ngày đăng ký

Bio, location

Liên kết từ mạng A → B (GitHub → LinkedIn)

## 🔹 PHẦN 5 – DÒ DOMAIN + EMAIL
🧰 Tool:
- https://whois.domaintools.com

- https://crt.sh

- https://hunter.io

- https://emailrep.io

✅ Bài tập:
- Tìm chủ sở hữu của một website

- Xác định địa chỉ email liên kết với website

- Check trust level email lạ qua emailrep.io

## 🔹 PHẦN 6 – ĐỊA CHỈ IP & HẠ TẦNG
🧰 Tool:
- https://shodan.io

- https://censys.io

- https://ipinfo.io

✅ Bài tập:
- Truy tìm dịch vụ chạy trên IP 1.2.3.4

- Dò camera public, hoặc router public

- Check VPS của công ty nào → tìm khách hàng khác

## 🔹 PHẦN 7 – PHÂN TÍCH ẢNH (Image & Metadata OSINT)
🧰 Tool:
- https://fotoforensics.com

- ExifTool (CLI)

- Google Reverse Image

- https://tineye.com

✅ Bài tập:
- Tìm ảnh gốc của một avatar Telegram

- Xem Exif ảnh chụp thật để biết GPS, camera

- exiftool image.jpg
- 
## 🔹 PHẦN 8 – LAB THỰC HÀNH OSINT ENTRY
🧪 Room & CTF gợi ý:

https://tryhackme.com/room/osintbasics

https://dfirdiva.com/ctf-osint/

https://www.hacktoria.com/

https://whatsmyname.app/

🏁 TỔNG KẾT – KỸ NĂNG SAU CẤP ENTRY
Nhiệm vụ	Đã hoàn thành?
Dò được social media từ username/email	✅
Biết dùng dork và tìm ảnh qua Google	✅
Tìm được thông tin domain + chủ sở hữu	✅
Dò IP và xác định VPS/camera/public service	✅
Làm được 1–2 lab TryHackMe OSINT	✅

🧠 TIẾP THEO: Junior OSINT Analyst
➡️ Dò rò rỉ GitHub, subdomain, dork nâng cao
➡️ Lập social graph – vẽ mối quan hệ của người bị theo dõi
➡️ Viết báo cáo OSINT chuẩn (timeline, tài nguyên, ảnh, sơ đồ)

📌 Được biên soạn bởi Yuri08 | Elaina Core
📅 Last updated: 2025-06-22
📩 Contact: github.com/Yuri08loveElaina
