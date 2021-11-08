# Arduino İle Akıllı Otopark
Arduino İle Akıllı Otopark Projesi Kodları

Projede 2 adet Arduino kullanılmıştır. Her biri için ayrı kodlamalar verilmiştir.

Arduino 1'de;

Her bir park alanına koyulan ışık sensörlerinin ışık algılama oranına göre üzerinde araç olup olmadığını test eden komut grupları eklenmiş ve bu park yerlerinin üzerinde bulunan LEDler aktif veya pasif hale gelmesi sağlanmıştır.

Arduino 2'de;

Kapıda bulunan sayac sayesinde otoparkın giriş kapısından giren araçlar için sayac değişkenine -1 eklenerek otoparkta kalan yer sayısı LCD Ekran'a yazdırılır. Tam tersi durumda, çıkış kapısından çıkış yapan araçlar için ise sayac değişkenine +1 eklenerek yeni değer LCD Ekran'a yazdırılır. Bunun yanı sıra, otopark bariyerlerinin önünde bulunan sensörler sayesinde üzerine bir araç geldiğinde servo motorları aktifleştirecek kod blokları da yer almaktadır. 

Ekran Kodlarında ise;

Ekranda belirecek sayıların kod olarak döküm hali, hangi harfin hangi kodlar ile yanacağı tanımlanmıştır.
