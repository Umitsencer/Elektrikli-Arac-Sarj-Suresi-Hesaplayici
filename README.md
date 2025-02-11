# Elektrikli-Arac-Sarj-Suresi-Hesaplayici
 Bu C programı, elektrikli araçların şarj süresini hesaplamak için kullanılır. Kullanıcıdan şarj başlangıç ve bitiş zamanlarını alarak, batarya yüzdesindeki artışı ve toplam şarj süresini hesaplar. Program, `struct` ve `union` veri yapılarıyla epoch zaman farklarını hesaplar ve şarj hızı gibi ek veriler sunar.   Kullanılan yapılar: - **struct**: Şarj oturumu, başlangıç ve bitiş zamanı ile batarya yüzdesini tutar. - **union**: Epoch zaman farkını hesaplamak için epoch değeri üzerinde işlem yapar.  Proje, elektrikli araç kullanıcılarının şarj sürelerini daha verimli bir şekilde takip etmelerini sağlamak amacıyla geliştirilmiştir.


# Electric Vehicle Charging Time Calculator

This is a simple C program that calculates the charging time of an electric vehicle based on start and end times. The program:
- Takes the start and end times of the charging session.
- Calculates the total charging time in seconds, minutes, and hours.
- Computes the percentage increase in battery charge.
- Displays the epoch time (seconds since Jan 1, 1970) for both start and end times.
- Calculates the average charging speed in percentage per second.

## Features:
- Supports user input for start and end times in the format: YYYY MM DD HH MM SS.
- Handles epoch time conversion and time difference calculation.
- Provides clear output including charging time, battery percentage increase, and charging speed.

## How to Use:
1. Clone the repository.
2. Compile the C program using a C compiler.
3. Run the program and input the start and end times of your charging session along with the initial and final battery percentages.


