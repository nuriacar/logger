# Keylogger, Screenlogger, Installer, Uninstaller, Archiver


#### **TR [ EN ⇣ ]**

Bir zamanlar Erdal'ın kitaplığında "**Deitel & Deitel, C How to Program**" kitabını görmüş ve **C** ile ne alakası olduğunu sormuştum. O da bana okulda C dersi aldığından vs. bahsedip kitabı hediye etmişti. Sağolsun.

Bir gün **Keylogger** ve **Screenlogger** geliştirmek istedim. Her ne kadar **yasal olmasa da** planım şuydu:

+ Personelin veya çocukların bilgisayarlarına kurulup yaptığı şeyleri kaydetsin
+ Web arayüzünden servis sunsun, canlı izleme imkanı versin
+ İstatistik tutsun, verimlilik ölçsün

**Python**'la istediğim şekilde yapamazmışım. C gerekiyormuş. **Deitel C**, kitaplığımdan "**kıps**" yaptı.

![Barbara herhalde. Manken olan...](/assets/gif/manken-olan-barbara-winked-me.gif "Barbara herhalde. Manken olan...")

Bir süre göz gezdirdim. Ne harika bir kaynak. Baktım böyle olmayacak, oturdum doğruca keylogger'ı geliştirmeye koyuldum. **Sanıyorum 2019'un Ocak ayı...** Bir şeyi lazım olunca öğrenmek, öğrenme hızını ve akılda kalıcılığı artırıyor. Yeni bir şeyler öğrenilecekse, konulara hızlıca göz gezdirip hemencecik nesnel bir şeyler yapmaya koyulmak; tecrübe ederek, söküp takarak öğrenmek en iyisi. İşe başlamadan önce temel konulara göz gezdirmek ise gerektiğinde aradığını daha hızlı bulmayı sağlıyor. Haritaya hızlıca göz gezdirdikten sonra kendini sokağa atıp sokaklarda kaybolarak şehri öğrenmeye koyulmak gibi.

Vakti geldiğinde bu kodu **Rust**'a port edeceğim.

### **explorer.cpp**

Yüklenebilir keylogger. **Türkçe Q ve F klavyeyi kaydediyor.** Zamanla diğer dilleri de eklerim.

### **GfxUI.cpp**

Yüklenebilir screenlogger. **Fareyle her tıklamada ekran görüntüsü alır.** En basitinden **bankalar** gibi ekran klavyesine fareyle tıklanan yerlerde kullanılır.

### **robocopy.cpp**

**Yükler, kaldırır, arşivler, registry temizler, izleri siler. Güvenli iz silme için Sysinternals'ın sdelete.exe'si gerekli.** Şu dizin yapısını kullanın:

```
.
├── robocopy.exe
└── src
    ├── explorer.exe
    ├── GfxUI.exe
    ├── robocopy.exe
    └── sdelete.exe
```

**Not:** Kurmak için ille de robocopy.exe'ye ihtiyacınız yok. explorer.exe veya GfxUI.exe'yi solo olarak da kullanabilirsiniz. Tıklayın, kurulur, çalışırlar.

### **winlogon.cpp**

**Portable keylogger.** Yüklenmez, RAM'de çalışır, az iz bırakır. Tıkla çalıştır, winlogon.ini içine yazdığın path'e kaydetsin (winlogon.ini içine yazdığım yorumları okuyun).

**Not:** Hatırlatmakta fayda var: Üç yılın ardından **truva atı** olarak yakalanıyor. Pepe çok üzülüyor.

![Dursun sen kaç, beni tanıdılar.](/assets/img/logger-busted.png "Dursun sen kaç, beni tanıdılar.")

![Pepe Çok Üzülüyor](/assets/img/pepe-cok-uzuluyor.jpg "Pepe Çok Üzülüyor")

---

#### **EN**

I once saw the book "**Deitel & Deitel, C How to Program**" in Erdal's library and asked what he had to do with **C**. He told me that he studied C at school etc. and gave the book as a gift. Thank you.

One day I wanted to develop **Keylogger** and **Screenlogger**. Although **not legal**, here is my plan:

+ Install it on staff or children's computers and let it record what they have done
+ Provide service from the web interface, allow live viewing
+ Keep statistics, measure efficiency

I couldn't do it the way I wanted with **Python**. C needed. **Deitel C** **winked**.

![Barbara herhalde. Manken olan...](/assets/gif/manken-olan-barbara-winked-me.gif "Barbara herhalde. Manken olan...")

I read for a while. What a great book. When i realize it won't be this way, I sat down and started to develop the keylogger. **I think it's January of 2019...** Learning something when needed increases learning speed and retention. If something new is to be learned, quickly skim through the topics and immediately get started doing something; It is best to learn by experiencing, disassembling and assembling. Taking a look at the basics before starting work helps you find what you're looking for faster when needed. It's like taking a quick glance at the map and then getting lost in the streets and learning about the city.

I'll port this code to **Rust** when the time comes.

### **explorer.cpp**

Installable keylogger. **It records Turkish Q and F keyboard.** I will add other languages over time.

### **GfxUI.cpp**

Installable screenlogger. **It takes a screenshot with every mouse click.** It is most simply used in places where the mouse is clicked on the on-screen keyboard, such as banks.

### **robocopy.cpp**

**It installs, uninstalls, archives, harvests, cleans registry, deletes traces. Sysinternals' sdelete.exe is required for secure trace removal.** Use the following directory structure:

```
.
├── robocopy.exe
└── src
     ├── explorer.exe
     ├── GfxUI.exe
     ├── robocopy.exe
     └── sdelete.exe
```
**Note:** You don't necessarily need robocopy.exe to install them. You can also use explorer.exe or GfxUI.exe solo. Click, it installs and runs.

### **winlogon.cpp**

**Portable keylogger.** It does not install, runs on RAM, leaves less traces. Click it to run, it will save to the path which is written in winlogon.ini (read comments in winlogon.ini).

**Note:** Remember: After three years, it is caught as a **trojan**. Pepe is very upset.

![Dursun sen kaç, beni tanıdılar.](/assets/img/logger-busted.png "Dursun sen kaç, beni tanıdılar.")

![Pepe Çok Üzülüyor](/assets/img/pepe-cok-uzuluyor.jpg "Pepe Çok Üzülüyor")
