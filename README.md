⚡ Elektrikli Araç Şarj Süresi Hesaplama
-
Bu program, C dilinde struct ve union kullanılarak elektrikli araçların şarj süresini hesaplamak amacıyla geliştirilmiştir. Kullanıcıdan alınan başlangıç ve bitiş tarihlerini epoch zamanına çevirerek iki tarih arasındaki farkı saniye, dakika ve saat olarak hesaplar.

📋 Programın Özellikleri
-
Struct ile şarj oturum bilgileri tutulur (başlangıç ve bitiş zamanı, başlangıç şarj yüzdesi).
Union ile epoch zamanı hesaplanır.
İki tarih arasındaki farkı saniye, dakika ve saat olarak gösterir.
Başlangıç şarj yüzdesine göre ne kadar bataryanın dolduğunu hesaplar.

🚀 Kullanım Talimatları
-
Programı çalıştırdığınızda aşağıdaki bilgileri girmeniz istenir:

Başlangıç tarihi ve saati (YYYY MM DD HH MM SS formatında)
Bitiş tarihi ve saati (YYYY MM DD HH MM SS formatında)
Şarja başlama yüzdesi (0 ile 100 arasında bir değer)
Program, bu verileri kullanarak:

Epoch zamanını hesaplar.
İki tarih arasındaki zaman farkını saniye, dakika ve saat cinsinden ekrana yazar.
Bataryanın dolum yüzdesini ve geçen süreyi gösterir.


🛠 Örnek Çıktı
-
⚡ Elektrikli Araç Şarj Süresi Hesaplama  
🔋 Şarj başlangıç yüzdesi: 20%  
🔋 135 dakikada aracınızın bataryasının 80% 'lik kısmı dolmuştur  
⏳ Başlangıç Epoch Zamanı: 1707568200 saniye  
⏳ Bitiş Epoch Zamanı: 1707577200 saniye  
⚡ Toplam şarj süresi: 5400 saniye (1.50 saat, 90.00 dakika)  

📚 Kullanılan Kavramlar
-
Struct: Birden fazla veri türünü bir arada tutmak için kullanılır. Örneğin, şarj başlangıç ve bitiş zamanı ile yüzdesi struct içinde saklanır.
Union: Aynı bellek alanını paylaşan farklı veri türleri için kullanılır. Bu programda epoch zamanını hesaplamak için kullanılmıştır.
Epoch Zamanı: 1 Ocak 1970 UTC’den itibaren geçen saniye sayısıdır.
