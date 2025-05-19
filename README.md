# Automatic-watering-System-Manual
Automatic watering System Manual BY Haditya And M. Ilham




## Automatic watering system manual tanpa web Blynk
jadi disini saya membuat sebuah projek yang bernama automatic watering system yang dimana fumgsinya itu sebagai menyiram tanaman secara otomatis dengan hanya menggunakan moisture soil sensor nya saja dan relay modelu sebagai anggaplah stak kontak nya antara arus lisriknya water pump. 




## Fungsinya
sebelum saya menjelaskan fungsinya saya akan menjelaskan kenapa saya membuat projek ini. jadi saya mempunyai teman yang memiliki banyak sekali tanaman tapi teman saya ini memeliki sifat yang bisa di bilang malas untuk bangun pagi untuk menyirami tanaman nya setiap pagi. jadi karna mendengar masalah itu saya punyak ide untuk membuat projek automatic watering system ini yang berfungsi sebagai penyiram otomatis kepada tanaman. tanaman akan secara otomatis akan mendapatkan sumber air dari water pump dan water pump akan menyala karna kelebapan atau mendekteksi tanah kering dan akan mengirim sinyal kepada water pump sehingga water akan menyala secara otomatis. sehingga temen saya tidakk perlu lagi untuk bangun pagi setiap hari untuk menyirami tanaman nya tapi hanya perlu mengisi wadah airnya saja yang dari water pump nya. Semoga projek yang saya bikin ini bisa sangat bermanfaat untuk semua temen saya 


## ALAT yang saya pakai
1. Esp32
2. Base Board esp32
3. Relay Module 5 volt
4. Water Pump 5 volt
5. Resistive Moisture Soil Sensor
6. batre kotak 9 volt
7. kabel jummer
8. lcd 16x2 12c


## Wiring 
| Komponen                 | Pin ESP32      | Keterangan                        |
| ------------------------ | -------------- | --------------------------------- |
| **Soil Moisture Sensor** | `34 (Analog)`  | Output sensor ke pin analog ESP32 |
|                          | GND            | GND ESP32                         |
|                          | VCC            | 3.3V ESP32                        |
| **Relay Module**         | `26 (Digital)` | IN relay ke pin kontrol ESP32     |
|                          | VCC            | 5V ESP32                          |
|                          | GND            | GND ESP32                         |
| **Pompa Air**            | V+ (Power)     | NO Relay                          |
|                          | V-             | - batre 9 volt                    |
| **Batre 9 Volt**         | V-             | - batre 9 volt                    |
|                          | V+ (Power)     | COM Relay                         |
| **LCD I²C**              | SDA            | `GPIO 21 (SDA)`                   |
|                          | SCL            | `GPIO 22 (SCL)`                   |
|                          | VCC            | 5V ESP32                          |
|                          | GND            | GND ESP32                         |




