#include <stdio.h>
#include <time.h>

// Şarj süresi için struct tanımı
struct SarjOturumu {
    struct tm baslangicZamani;
    struct tm bitisZamani;
    int baslangicYuzdesi; // Şarja takıldığı anki yüzdesi
};

// Epoch zaman farkı için union
union EpochZaman {
    time_t epochDegeri;
};

// Şarj süresini hesaplayan fonksiyon
void sarjSuresiHesapla(struct SarjOturumu oturum) {
    union EpochZaman baslangicEpoch, bitisEpoch;
    
    // struct tm -> epoch zamanına çevir
    baslangicEpoch.epochDegeri = mktime(&oturum.baslangicZamani);
    bitisEpoch.epochDegeri = mktime(&oturum.bitisZamani);
    
    // Zaman farkını hesapla
    double toplamSure = difftime(bitisEpoch.epochDegeri, baslangicEpoch.epochDegeri);
    
    // Sonucu ekrana yazdır

    printf("🔋 Şarj başlangıç yüzdesi: %d%%\n", oturum.baslangicYuzdesi);
    printf("🔋 %.0f dakikada aracınızın bataryasının %d%% 'lik kısmı dolmuştur\n",toplamSure/60 ,100-oturum.baslangicYuzdesi);
    printf("⏳ Başlangıç Epoch Zamanı: %ld saniye (1 Ocak 1970'ten itibaren)\n", baslangicEpoch.epochDegeri);
    printf("⏳ Bitiş Epoch Zamanı: %ld saniye\n", bitisEpoch.epochDegeri);
    printf("⚡ Toplam şarj süresi: %.0f saniye (%.2f saat, %.2f dakika)\n", toplamSure, toplamSure / 3600, toplamSure / 60);
   
}
// Kullanıcıdan tarih bilgisi alan fonksiyon
void kullanicidanTarihAl(struct tm *zamanYapisi, char *mesaj) {
    printf("%s (YYYY MM DD HH MM SS): ", mesaj);
    scanf("%d %d %d %d %d %d", 
          &zamanYapisi->tm_year, 
          &zamanYapisi->tm_mon, 
          &zamanYapisi->tm_mday, 
          &zamanYapisi->tm_hour, 
          &zamanYapisi->tm_min, 
          &zamanYapisi->tm_sec);
    
    zamanYapisi->tm_year -= 1900; // Yıl düzeltmesi
    zamanYapisi->tm_mon -= 1;     // Ay düzeltmesi
}

int main() {
    struct SarjOturumu sarj;
    
    printf("⚡ Elektrikli Araç Şarj Süresi Hesaplama\n");
    
    // Kullanıcıdan şarj başlangıç ve bitiş zamanını al
    kullanicidanTarihAl(&sarj.baslangicZamani, "🔋 Şarj başlangıç tarihi ve saati");
    kullanicidanTarihAl(&sarj.bitisZamani, "🔌 Şarj bitiş tarihi ve saati");
    
    // Kullanıcıdan başlangıç şarj yüzdesini al
    do {
        printf("🔋 Şarja takıldığı anki batarya yüzdesini girin (0-100): ");
        scanf("%d", &sarj.baslangicYuzdesi);
        
        if (sarj.baslangicYuzdesi < 0 || sarj.baslangicYuzdesi > 100) {
            printf("⚠️ Hatalı giriş! Yüzde 0 ile 100 arasında olmalıdır. Lütfen tekrar deneyin.\n");
        }
    } while (sarj.baslangicYuzdesi < 0 || sarj.baslangicYuzdesi > 100);
    
    // Şarj süresini hesapla
    sarjSuresiHesapla(sarj);
    
    return 0;
}
