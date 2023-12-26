# esim9 Staattinen luokka

C++ kielessä ei voida luoda varsinaisesti staattisia luokkia kuten Javassa ja C#:sa.
Mutta toiminnallisesti samaan tulokseen päästään, kun luokan kaikki metodit määritetään staattisiksi.

Esimerkiksi C#:ssa on luokka Math, josta löytyy esimerkiksi funktio sqrt. Ei ole järkevää, että voidaksesi käyttää tuon luokan metodeja sinun tulisi luoda luokasta olio. Voit laskea esimerkiksi luvun 4 neliöjuuren koodilla **Math.Sqrt(4)**.

Tässä esimerkissä on luokka MyStaticClass, jonka ainoa metodi **doubleMe** on määritetty staattiseksi, joten sitä voidaan kutsua esimerkiksi koodilla **MyStaticClass::doubleMe(4.0)**