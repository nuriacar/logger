# Deitel & Deitel, C How to Program

Bu notlar .txt idi, .md'ye çevirmeye başladım lakin henüz bitmedi. ...ve evet, yazmak daha iyi öğrenmeyi sağlıyor.

**[Nuri ACAR](https://nuriacar.com)**

---

## 1. BÖLÜM (Bilgisayara Giriş, İnternet ve WWW)

### TERİMLER

+ C extension: C uzantısı
+ arithmetic and logic unit: aritmetik ve mantık ünitesi
+ batch processing: yığın işleme
+ building block approach: blok inşaa yaklaşımı
+ C preprocessor: C önişlemcisi
+ C standard library: C standart kütüphanesi
+ central processing unit(CPU): merkezi işlem ünitesi(işlemci)
+ clarity: açıklık
+ client: istemci
+ client/server computing: istemci/sunucu hesaplatımı/ortak çalışması
+ compiler: derleyici
+ data: veri
+ distributed computing: dağıtık hesaplatma
+ editor: editör
+ environment: ortam
+ execute a program: bir programı çalıştırma
+ file server: dosya sunucusu
+ function: fonksiyon
+ functionalization: fonksiyonellik
+ hardware: donanım
+ hardware platform: donanım platformu
+ high-level language: yüksek seviyeli dil
+ input unit: giriş ünitesi
+ input/output: giriş/çıkış
+ linker: bağlayıcı
+ loader: yükleyici
+ logical units: mantıksal üniteler
+ machine dependent: makine bağımlı
+ machine independent: makine bağımsız
+ memory: hafıza
+ memory unit: hafıza ünitesi/birimi
+ multiprogramming: çoklu programlama
+ multitasking: çoklu görev
+ object: nesne
+ object code: nesne kodu
+ object-oriented programming: nesne yönelimli programlama
+ output device: çıkış cihazı
+ personal computer: kişisel bilgisayar
+ portability: taşınabilirlik
+ primary memory: birincil hafıza
+ run a program: bir programı çalıştırma
+ screen: ekran/monitör
+ software: yazılım/program
+ software reusability: yazılımın yeniden kullanılabilirliği
+ standard error(stderr): standart hata
+ standard input(stdin): standart giriş
+ standard output(stdout): standart çıkış
+ stored program: depolanmış program
+ structured programming: yapısal programlama
+ supercomputer: süper bilgisayar
+ task: görev
+ timesharing: zaman paylaşımı
+ top-down, stepwise refinement: yukarıdan aşağıya adımsal iyileştirme
+ translator program: çevirici program
+ workstation: iş istasyonu

### ÖZET

+ Yazılım donanımı kontrol eder.
  
  Yazılım: Bilgisayarın işlemler yapması ve karar vermesi için yazılan
  emirler/programlar
  
  Donanım: Bilgisayarın fiziksel parçaları

+ ANSI C, C programlama dilinin, 1989 yılında Amerika'da American National 
Standards Institute(ANSI) ve tüm dünyada Internationals Standards 
Organisation(ISO) tarafından standart haline getirilmiş sürümüdür.

+ C' nin yeni sürümleri de geliştirilmiştir.

+ Bilgisayarlar, verileri bilgisayar programları kontrolünde işlerler.

+ Giriş Ünitesi: Klavye,dosya,kamera,mikrofon... vs. 
  Çıkış Ünitesi: Monitör,dosya,hoparlör... vs.

+ Aritmetik ve Mantık Ünitesi(ALU): Hesaplamalar/işlemler yapar, karar verir.

+ Merkezi İşlemci Ünitesi(CPU): Bilgisayarın koordinasyonundan ve diğer
kısımların kontrolünden sorumludur.

+ Hafıza(RAM): Bilgisayarın veri depoladığı kısımdır. Birincil Hafıza olarak
da adlandırılır.

+ Diğer üniteler tarafından kullanılmayan programlar veya veriler, yeniden
kullanılana kadar ikincil hafıza araçlarına(HDD, disket, usb, tape... vs.)
kaydedilir.

+ Tek kullanıcılı yığın işleme: Bilgisayar verileri gruplar veya yığınlar
halinde işlerken yalnızca bir program çalıştırır.

+ İşletim Sistemi: Bilgisayarlardan(donanım) en iyi performansı almak ve
bilgisayarı en uygun biçimde kullanabilmeyi sağlamak için yazılmış yazılım
sistemleridir.

+ Çoklu programlama kullanım sistemleri, bilgisayarda birden fazla işi
eşzamanlı yapabilmemizi sağlar. (Bilgisayar kaynakları işler arasında
paylaştırılır.)

+ Zaman paylaşımlı sistemler, çoklu programlama kullanım sistemlerini kullanan
kullanıcıların terminaller aracılığıyla zaman paylaşımlı sisteme ulaştığı
halidir. Her kullanıcının eşit ve belirli bir süresi vardır. Sıra kimdeyse,
sistem belirli zaman içinde o kullanıcının ne kadar işlemini yapabiliyorsa
yapar ve işlemlerin tamamının bitmesini beklemeden gene belirlenen süre kadar
bir sonraki sıradaki kullanıcının işlemlerini yapar.  Tüm kullanıcı işlemleri
tamamlanana kadar bu zaman limitli döngü devam eder.  Bu sayede kullanıcılar
eşzamanlı çalışıyormuş gibi görünür.

+ Çoklu kullanımda bir sistemin bütün işleri, işlemlerin yapıldığı sistemlere
ağ aracılığıyla dağıtılır. Sunucular, istemcilerin istediği verileri tutar ve
işler.

+ Bir bilgisayar yalnızca kendine ait makine dilini anlayabilir. Makine dili
her makineya göre değişir. Makine dilleri, 0 ve 1 lerden oluşan belirli sayı
dizilerinden oluşur.

+ İngilizce'ye yakın kısaltmalar assembly dillerinin temelini oluşturur. 
Assembler denen programlar, assembly ile yazılmış programı makina diline 
çevirir.

+ Derleyiciler yüksek seviyeli(insan diline yakın) dillerle yazılmış 
programları makine diline çevirir. Yüksek seviyeli diller, ingilizce 
kelimeler ve geleneksek matematik gösterimlerini içerir.

+ Yorumlayıcılar(yorumlayıcı programlar), yüksek seviyeli dillerle yazılmış 
programları derlemeden çalıştırır.

+ Derlenen dillerle yazılan programlar, yorumlanan dillerle yazılan 
programlardan daha hızlı çalışırlar. Fakat ilk geliştirme aşamasında, yeni 
özellikler eklenirken veya hata düzeltmesi yapılırken daha hızlı geliştirme 
imkanı verdiğinden yorumlanan diller tercih edilir. Program tamamlandıktan 
sonra derlenmiş sürümü kodlanarak daha verimli/hızlı çalışması sağlanır.

+ C, UNIX işletim sisteminin geliştirildiği dildir.

+ C ile çoğu bilgisayarda çalışabilecek programlar yazmak mümkündür. Küçük 
değişiklikler yaparak hemen hemen her bilgisayarda çalışacak programlar 
yazılabilir. Bu özelliği C' yi taşınabilir(bir kez kodla, her yerde çalıştır) 
bir dil yapar.

+ ANSI C, C programlama dilinin, 1989 yılında Amerika'da American National 
Standards Institute(ANSI) ve tüm dünyada Internationals Standards 
Organisation(ISO) tarafından standart haline getirilmiş sürümüdür.

+ C' nin yeni sürümleri de geliştirilmiştir.

+ Bilgisayarlar, verileri bilgisayar programları kontrolünde işlerler.

+ Giriş Ünitesi: Klavye,dosya,kamera,mikrofon... vs. 
  Çıkış Ünitesi: Monitör,dosya,hoparlör... vs.

+ Aritmetik ve Mantık Ünitesi(ALU): Hesaplamalar/işlemler yapar, karar verir.

+ Merkezi İşlemci Ünitesi(CPU): Bilgisayarın koordinasyonundan ve diğer 
kısımların kontrolünden sorumludur.

+ Hafıza(RAM): Bilgisayarın veri depoladığı kısımdır. Birincil Hafıza olarak 
da adlandırılır.

+ Diğer üniteler tarafından kullanılmayan programlar veya veriler, yeniden 
kullanılana kadar ikincil hafıza araçlarına(HDD, disket, usb, tape... vs.) 
kaydedilir.

+ Tek kullanıcılı yığın işleme: Bilgisayar verileri gruplar veya yığınlar 
halinde işlerken yalnızca bir program çalıştırır.

+ İşletim Sistemi: Bilgisayarlardan(donanım) en iyi performansı almak ve 
bilgisayarı en uygun biçimde kullanabilmeyi sağlamak için yazılmış yazılım 
sistemleridir.

+ Çoklu programlama kullanım sistemleri, bilgisayarda birden fazla işi 
eşzamanlı yapabilmemizi sağlar. (Bilgisayar kaynakları işler arasında 
paylaştırılır.)

+ Zaman paylaşımlı sistemler, çoklu programlama kullanım sistemlerini 
kullanan kullanıcıların terminaller aracılığıyla zaman paylaşımlı sisteme 
ulaştığı halidir. Her kullanıcının eşit ve belirli bir süresi vardır. Sıra 
kimdeyse, sistem belirli zaman içinde o kullanıcının ne kadar işlemini 
yapabiliyorsa yapar ve işlemlerin tamamının bitmesini beklemeden gene 
belirlenen süre kadar bir sonraki sıradaki kullanıcının işlemlerini yapar. 
Tüm kullanıcı işlemleri tamamlanana kadar bu zaman limitli döngü devam eder. 
Bu sayede kullanıcılar eşzamanlı çalışıyormuş gibi görünür.

+ Çoklu kullanımda bir sistemin bütün işleri, işlemlerin yapıldığı sistemlere 
ağ aracılığıyla dağıtılır. Sunucular, istemcilerin istediği verileri tutar ve 
işler.

+ Bir bilgisayar yalnızca kendine ait makine dilini anlayabilir. Makine dili 
her makineya göre değişir. Makine dilleri, 0 ve 1 lerden oluşan belirli sayı 
dizilerinden oluşur.

+ İngilizce'ye yakın kısaltmalar assembly dillerinin temelini oluşturur. 
Assembler denen programlar, assembly ile yazılmış programı makina diline 
çevirir.

+ Derleyiciler yüksek seviyeli(insan diline yakın) dillerle yazılmış 
programları makine diline çevirir. Yüksek seviyeli diller, ingilizce 
kelimeler ve geleneksek matematik gösterimlerini içerir.

+ Yorumlayıcılar(yorumlayıcı programlar), yüksek seviyeli dillerle yazılmış 
programları derlemeden çalıştırır.

+ Derlenen dillerle yazılan programlar, yorumlanan dillerle yazılan 
programlardan daha hızlı çalışırlar. Fakat ilk geliştirme aşamasında, yeni 
özellikler eklenirken veya hata düzeltmesi yapılırken daha hızlı geliştirme 
imkanı verdiğinden yorumlanan diller tercih edilir. Program tamamlandıktan 
sonra derlenmiş sürümü kodlanarak daha verimli/hızlı çalışması sağlanır.

+ C, UNIX işletim sisteminin geliştirildiği dildir.

+ C ile çoğu bilgisayarda çalışabilecek programlar yazmak mümkündür. Küçük 
değişiklikler yaparak hemen hemen her bilgisayarda çalışacak programlar 
yazılabilir. Bu özelliği C' yi taşınabilir(bir kez kodla, her yerde çalıştır) 
bir dil yapar.

+ FORTRAN matematiksel işlemler, COBOL ticari uygulamalar için kullanılır.

+ Yapısal Programlama; daha açık, test etmesi, hata ayıklaması ve 
değiştirmesi kolay programlar geliştirmek için geliştirilmiş bir yaklaşımdır. 
PASCAL, akademik çevrelere yapısal programlama öğretmek için geliştirilmiştir.

+ ADA, PASCAL temel alınarak, United States Department of Defence(DOD) 
tarafından finanse edilerek geliştirilmiştir. ADA dili çoklu görev
(multitasking) yeteneği barındırır. Bu sayede birden fazla iş paralel biçimde 
yapılabilir.

+ Çoklu görev, programcıların paralel işler yapabilmesini sağlar.

+ Tüm C sistemleri üç kısım içerir. Ortam, dil ve standart kütüphaneler. 
Kütüphane fonksiyonları C dilinin kendisinin parçası değildir.

+ C programları çalıştırılana kadar altı aşamadan geçer:
Yazma, Önişleme, Derleme, Bağlama, Yükleme, Çalıştırma

+ C programları metin editörleri(vi, vim, emacs... vs.) ile yazılır ve 
düzenlenir. C dosya isimleri UNIX sistemlerde .c uzantısı ile biter.

+ C önişlemcisi, derlenecek dosyanın içindeki bazı özel işaretlerin yerine 
gelecek program metnini yazmak ve dosyalar eklemek gibi önişlemci komutlarını 
yerine getirir. 

+ Derleyici, C programını makina dili kodlarına(nesne kodu) çevirir.

+ Bağlayıcı, çalıştırılabilir bir program oluşturmak için derleyicinin 
ürettiği nesne kodları ile fonksiyonları birleştirir. UNIX sistemlerde 
C programlarını derlemek ve çalıştırmak için alttakiler ve altta yazılmamış 
birkaç benzer işlem yapılır:
  
  Derleme işlemi için:

    cc program_adi.c

  Bu işlem, "a.out" isminde çalıştırılabilir program verir. 
  
  Veya;

    cc -Wall program_adi.c -o calistirilabilir_program_adi
    gcc -Wall program_adi.c -o calistirilabilir_program_adi

  Bu işlemler ise -o parametresinden sonra yazılan 
  "calistirilabilir_program_adi" isminde çalıştırılabilir bir program verir.

  cc/gcc den sonra gelen -Wall parametresi, derleme sırasında yazılan kodda 
  yer alan hatalara/dikkat edilmesi gereken yerlere dair uyarıları gösterir. 
  -Wall parametresinden başka farklı derleme parametreleri de vardır. 
  
  Derlenmiş programı yükleyip çalıştırmak için ise şunlar yapılabilir:
    
    ./a.out
    ./calistirilabilir_program_adi

+ Yükleyici, çalıştırılabilir programı diskten alıp hafızaya(RAM) gönderir.

+ Sıfıra bölme hataları program çalışırken ortaya çıkar. Bu yüzden çalışma 
zamanı hatası olarak adlandırılır. Sıfıra bölme hatası genellikle ölümcül bir 
hatadır. Ölümcül hatalar programın hiç bir çıktı üretmeden sonlanmasına, 
ölümcül olmayan hatalar programın yanlış çıktı üretmesine sebep olur.

+ Bir bilgisayar, CPU kontrolü altında, programın her emrini bir anda 
çalıştırır.

+ Programda işlenecek veri 'stdin' den(klavye, dosya, kamera, 
mikrofon... vs.) alınır. 'stdin' genellikle klavyedir. İşlenen veri ise 
'stdout' a(monitör, dosya, hoparlör... vs.) gönderilir. 'stdout' ise 
genellikle monitördür.

+ 'stderr' hata mesajları göstermek için kullanılır.

+ Değişik C sistemleri veya bilgisayarlarda pek çok farklılık olabilir. 
Bu yüzden taşınabilirlik program yazarken önemlidir.

+ C++, C' nin bir üst kümesidir(superset) ve fonksiyonel programlama yanında 
nesneye yönelik programlama yetenekleri de içerir. Nesneler, gerçek dünyadaki 
araçları modelleyen, yeniden kullanılabilir program parçalarıdır.

  Nesne yönelimli programlamanın altı temel maddesi (Alan Kay):

  - Her şey bir nesnedir.
  - İşleyiş, nesnelerin birbirlerine gönderdikleri mesajlar vasıtasıyla 
  gerçekleşir. Nesneler birbirlerine mesaj gönderip alabilir; bu işlem 
  sırasında ihtiyaç doğrultusunda argümanlar kullanabilir.
  - Her nesnenin, başka nesnelerden oluşan kendine ait bir hafızası 
  vardır.
  - Her nesne(leylek), bir sınıfın(kuşlar) örneğidir. Bir sınıf (integer
  ve/veya list gibi) nesnelerin gruplaşmasından meydana gelir.
  - Aynı sınıfın örneği olan nesneler(leylek, karga... vs.) aynı işi(uçmak) 
  yapabilir.
  - Nesnelere ait özellikler, kalıtım hiyerarşisi yoluyla birbirine geçer.

### GENEL PROGRAMLAMA HATALARI

+ Sıfıra bölme hataları program çalışırken ortaya çıkar. Bu yüzden çalışma 
zamanı hatası(runtime/execution time error) olarak adlandırılır. 
Sıfıra bölme hatası genellikle ölümcül bir hatadır. Ölümcül hatalar 
programın hiç bir çıktı üretmeden sonlanmasına, ölümcül olmayan hatalar 
programın yanlış çıktı üretmesine sebep olur.

NOT: Bazı sistemlerde sıfıra bölme ölümcül bir hata değildir.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ C programlarınızı basitçe ve doğrudan yazın. Yazdığınız programları 
gereksiz kullanımları deneyerek uzatmayın.

+ Kullandığınız C versiyonunun talimatlarını okuyun. Böylece size sunduğu 
imkanları doğru biçimde kullanarak daha iyi progrmalar yazabilirsiniz.

+ Bilgisayarınız ve derleyiciniz iyi birer öğretmendir. Eğer C' de bir 
özelliğin nasıl çalıştığına emin olamazsanız, o özelliği içeren küçük bir 
program yazın ve çalıştırın. Hatalarınızı öğretmeniniz(pc & derleyici) 
söyleyecektir.

### PERFORMANS İPUÇLARI

+ Kendi yazdığınız fonksiyonlar yerine ANSI standart kütüphane 
fonksiyonlarını kullanmanız performansı artıracaktır. Çünkü bu fonksiyonlar, 
verimli çalışmaları için özenle yazılmışlardır.

### TAŞINABİLİRLİK İPUÇLARI

+ C ile program yazıyor olmak taşınırlığı garanti etmez.

+ C donanıma bağımlı olmadığından, C' de yazılan bir program değişiklik 
yapılmadan ya da çok az değişiklikle bir çok bilgisayarda sorunsuz çalışır.

+ Kendi yazdığınız fonksiyonlar yerine, ANSI standart kütüphane 
fonksiyonlarını kullanmak taşınırlığı artırır. Çünkü bu fonksiyonlar bütün 
ANSI C koşullarına uyarlar.

+ C ile program yazıyor olmak taşınırlığı garanti etmez. 
C ile taşınabilir programlar yazmak mümkün olsa da bazı farklı 
C derleyicileri ve farklı bilgisayarlar taşınırlığı oldukça zor hale 
getirebilirler. Programcı çoğu zaman, değişik bilgisayar sistemleriyle 
uğraşmak zorunda kalabilir.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMİ

+ Yeniden kullanılabilir yazılım parçalarından oluşan ücretli/ücretsiz 
genel kütüphaneler internet üzerinde bulunabilir.

---

## 2. BÖLÜM (C İle Programlamaya Giriş)

### TERİMLER

+ address operator: adres operatörü(&)
+ ampersand: '&' karakteri
+ argument: argüman,bağımsız değişken
+ arithmetic operators: aritmetik operatörler (+ - * / % ++ --)
+ assignment operator: atama operatörü(=)
+ assignment statement: atama ifadesi
+ associativity of operators: operatörlerin işleyişi
+ asteriks: '*' karakteri
+ backslash escape sequence: '\' kaçıs sekansı
+ binary operators: binary operatörler
+ body of a function: fonksiyon gövdesi( {} parantezleri arasındaki kodlar )
+ braces: küme parantezleri ( {} )
+ case sensitive: büyük/küçük harf duyarlı
+ character string: karakter dizesi
+ comment: yorum
+ compile error: derleme hatası
+ compile-time error: derleme zamanı hatası
+ condition: koşul
+ control string: kontrol dizesi
+ conversion specifier: dönüşüm belirteci(%)
+ decision: karar
+ decision making: karar verme
+ decleration: bildirim
+ equality operators: eşitlik operatörleri (== <= >= !=)
+ escape character: kaçış karakterleri(\n \t \v \a)
+ escape sequence: kaçış sekansı
+ fatal error: ölümcül hata
+ flow of control: kontrol akışı
+ format control string: biçim kontrol dizesi
+ identifier: tanıtıcı, belirteç
+ if control structure: if kontrol yapısı
+ literal: değişmez dizi (?)
+ keywords: anahtar kelimeler
+ modulus operator: mod operatörü (%)
+ nested paranthesis: yuvalı parantezler
+ newline character: yeni satır karakteri(\n)
+ nonfatal error: ölümcül olmayan hata
+ precedence: öncelik
+ prompt: komut istemi
+ relational operators: karşılaştırma operatörleri
+ statement terminator: ifade sonlandırıcı
+ string: dize
+ syntax error: yazım hatası, söz dizimi hatası
+ whitespace characters: basılamayan karakterler, boşluk karakterler

### ÖZET

+ '/*' ile '*/' arasında yazılanlar yorum satırı olur ve işlenmezler. 
Yazılan kodlar ve yaptıkları işler hakkında ayrıntılı notlar almak ve 
gelecekte yapılacak olası değişikliklerde programcıya hatırlatma yapmak 
amacıyla yazılan açıklamalardır.

+ '#include <stdio.h>' önişlemci komutu, derleyiciye, standart giriş/çıkış 
öncü/header dosyasını programa eklemesini söyler. Bu dosya (stdio.h), 
derleyicinin 'scanf()', 'printf()'... vs. gibi giriş/çıkış fonksiyonlarının 
doğru biçimde çağrıldıklarını onaylamasını sağlayan bilgiler içerir.

+ C programları, içlerinde tek bir 'main()' fonksiyonu olan fonksiyonlardan 
oluşur. Tüm bu fonksiyonlar içinde ilk 'main()' fonksiyonu çalışır ve 
'main()' içinde yer alan fonksiyon çağrıları ile diğer fonksiyonlar çalışır.

+ 'printf("%s, %d", "bu metin %s yer tutucu içine yazılır", 5);'
Ekrana yazdırma için 'printf()' fonksiyonu kullanılır. Dosyaya yazdırma için 
'stdio.h' içinde farklı fonksiyonlar da bulunur.

+ 'scanf("%d", &degisken);'
Kullanıcıdan veri almak için 'scanf()' fonksiyonu kullanılır. 
'&' adres operatörüdür. Adres operatörü değişken ismi ile birleştiğinde, 
bilgisayarda verinin saklanacağı hafıza konumunu söyler. Böylece bilgisayar 
kullanıcıdan aldığı veriyi bu adreste saklar.

+ C' de bütün değişkenler, programda kullanlmadan önce bildirilmelidir.

+ C' de değişken isimleri, harf, rakam ve alt çizgi( _ ) içerebilen karakter 
serileridir ama rakamla başlayamaz.

  int toplam_ = 0;
  int t0pLaM__= 0;
  int _t0P1aM = 0;
  int 0toP1aM = 0; /* Bu kullanım geçersizdir. */

Değişken ismi dilediğiniz uzunlukta olabilir lakin ANSI standardına göre 
yalnızca ilk otuz bir karakter dikkate alınır.

+ C, case sensitive yani büyük/küçük harf duyarlıdır. Alttaki örnekler 
birbirinden farklı değişkenlerdir.
  
  int toplam = 0;
  int TOPLAM = 0;
  int ToPlAm = 0;

+ Hesaplamaların büyük bir kısmı atama ifadeleriyle gerçekleştirilir.

  int a = 1;
  int b = 2;
  int c;
  
  c = a + b;
  
  printf("%d", c);

+ Bilgisayarın hafızasında depolanan her değişkenin bir tipi, bir ismi ve 
bir değeri vardır.

+ Herhangi bir değer bir hafıza konumuna yerleştirildiğinde, o hafıza 
konumunda daha önceden yer alan değerin üzerine yazılır.

+ C' de aritmetik deyimler, matematikte kullanılan yazım şekillerinden farklı 
biçimde yazılırlar.

+ C, aritmetik deyimleri, operatör önceliği ve operatörlerin işleyişi gibi 
ön tanımlı özel kurallara göre hesaplar.

+ 'if' ifadesi programcının kesin bir koşul ile karşılaştığında karar 
vermesini sağlar. Bu koşul yalnızca iki durumda('true' veya 'false') 
olabilir.

  if(koşul)
      şunları_yap;

Eğer 'koşul' doğru ise(0 veya false değilse), 'if' ifadesinin içindeki 
'şunları_yap;' ifadesi çalışır. Eğer 'koşul' yanlış ise gövdedeki kod yani 
'şunları_yap;' ifadesi atlanır.

NOT: C'de 0 hariç her şey 'true' dur. Çünkü C' de boolean(yalnızca 0 veya 1) 
değişkeni konsepti yoktur. '0' a ve '0' ile ifade edilen 'false' e eşit 
olmayan tüm nümerik değerler 'true' olur.

'if(a != 0)' ile 'if(a)' aynıdır. Çünkü 'a', '0' olmadığı sürece her durumda 
'true' olarak değerlendirilecektir.

### GENEL PROGRAMLAMA HATALARI

+ Yorum satırlarının başındaki( /* ) veya sonundaki( */ ) ifadeleri değişik 
yazmak veya sonuna ( */ ) koymayı unutmak.

+ 'printf();' yerine 'print();' , 'scanf();' yerine 'scan();' yazmak.

+ C büyük/küçük harf duyarlıdır(case sensitive). 'main()' yerine 'Main()' 
yazmak hatadır.

+ Değişken bildirimlerini, değişkenleri kullanan çalıştırılabilir ifadelerden 
sonra yapmak hatadır.

+ Atama ifadelerinde hesaplama, '=' operatörünün sağında yer almalıdır. 
Solunda olursa yazım hatası çıkar.

  a = 3 + 5; /* C kodlarken olması gereken... */
  3 + 5 = a /* Matematik dersinde olması gereken... */

+ 'printf()' ya da 'scanf()' içerisindeki biçim kontrol ifadelerini tırnak 
içinde(") yazmamak; biçim kontrol dizesindeki dönüşüm belirteci sembolünü(%) 
yazmamak; yeni satıra geçme karakterini(\n) biçim kontrol dizesi dışına 
yazmak; dönüşüm belirteçleri içeren bir 'printf()' ifadesinin içine dönüşüm 
belirteçlerini veya değeri yazdırılacak ifadeleri yazmamak; biçim kontrol 
dizesini, yazdırılacak ifadelerden ayırmak için gereken virgülü kontrol 
dizesinin içine(tırnakların içine) yazmak hatadır.

  printf(%d, 5); /* Hata! Tırnak işaretleri yok. */
  printf("d", 5); /* Hata! '%' yok. */
  printf("%d"\n, 5); /* Hata! '\n' tırnağın dışında. */
  printf("%d\n",); /* Hata! %d yerine hangi değer yazdırılacak? */
  printf("", 5); /* Hata! 5 nereye yazdırılacak? %d lazım. */
  printf("%d\n," 5); /* Hata! \n den sonraki , tırnağın dışına çıkmalı. */
  printf("%d\n", 5); /* Doğru */

+ 'scanf()' içerisinde yer alan bir değişkenin başına adres operatörünü(&) 
yazmayı unutmak hatadır.

+ 'printf()' içindeki bir değişkenin başına adres operatörü(&) yazmak hatadır.

+ Bir sayıyı 0' a bölmek bilgisayar sistemlerinde tanımlı değildir ve 
genellikle bu ölümcül bir hatadır. Ölümcül hatalar, programın çalışmasının 
aniden durmasına; ölümcül olmayan hatalar, programın çalışmaya devam etmesine 
fakat yanlış sonuç vermesine neden olur.

+ (==, !=, <=, >=) operatörlerinin arasında boşluk olması yazım hatasıdır.

+ (!=, <=, >=) operatörlerinin (=!, =<, =>) olarak yazılması dizim hatasıdır.

+ '==' operatörü ile '=' birbirinden farklıdır. '=' atama, "==" karşılatırma 
operatörüdür.

+ if(koşul); /* Burada ; olmaz! */
      şunları_yap; /* Burada olur. */

+ 'scanf()' içindeki dönüşüm belirteçleri arasına(asla gerekmemesine rağmen) 
virgül(,) koymak hatadır.

  scanf("%s,%d", &ogrenci, &notu); /* Yanlış */
  scanf("%s%d", &ogrenci, &notu); /* Doğru */

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ 'stdio.h' öncü dosyasının eklenmesi tercihe bağlıdır fakat 
standart giriş/çıkış fonksiyonlarının kullanıldığı programlarda eklenmelidir. 
Bu sayede derleyici, hataları derleme anında bulabilecektir. Aksi takdirde 
hatalar programın çalışma anında ortaya çıkar ve düzeltmesi güçtür.

+ Her fonksiyondan sonra, fonksiyonu anlatan bir yorum satırı yazılmalıdır.

+ Yazdırma işlemi yapan bir fonksiyon tarafından yazılan son karakter 
yeni satır karakteri(\n) olmalıdır. Bu sayede imleç bir sonraki satırın 
başına gider. Bu yazılımın yeniden kullanılabilirliğini artırır.

+ Fonksiyon bloklarını yazarken küme parantezlerinden içeride başlamak 
(üç boşluk karakteri kadar içeriden) fonksiyon gövdesini belirginleştirerek 
okunmasını kolaylaştırır.

+ Kendinize göre bir girinti miktarı belirleyin ve gerekli tüm yerlerde bu 
sayıda boşluk karakteri(SPACE) kadar girinti bırakın. Girintiler için 
sekme(TAB) tuşu kullanılabilir fakat TAB kullanmak sorun oluşturabilir. Çünkü 
TAB boşluk sayısı her sistemde ve kullanıcıda farklı sayıda olabilir. 
Bunun yerine boşluk karakteri(SPACE) kullanmak iyidir.

+ Birgülden hemen sonra bir boşluk bırakmak program okunurluğunu artırır.

+ Anlamlı değişken isimleri kullanmak daha az yorum satırı yazmanız demektir.

+ Basit bir değişken olarak kullanılacak tanıtıcılar küçük harfle 
başlamalıdır. İleride büyük harfle başlayan ya da tüm harfleri büyük harf 
olan özel öneme sahip değişkenlerden bahsedeceğiz.

+ Çoklu kelimelerden oluşan değişken isimleri programı daha okunur yapar. 
Fakat bunu yaparken kelimeleri birleşik yazmak yerine şunları yapın: 
  
  toplamogrencisayisi = 20; /* Okunması zor! */
  toplamOgrenciSayisi = 20; /* camelcase, camelCase */
  toplam_ogrenci_sayisi = 20; /* snakecase, snake_case */

+ Bildirimlerle çalıştırılabilir ifadelerin arasına bir boşluk bırakmak 
bildirimlerin sona erdiğini vurgulamaya yarar.

  int a = 1;
  int b = 2;
  int c;
  c = a + b;

  printf("%d", c);

+ Operatörlerin her iki tarafında boşluk bırakmak okunurluğu artırır.

  int a = 1; /* '=' operatörünün sağ ve solunda boşluklar var. */

+ 'if' karar yapısı içindeki ifadeleri girinti miktarınca içeriden başlatmak 
okunurluğu artırır.

+ Yazdığını programlarda her kontrol yapısından önce ve sonra boş bir satır 
bırakmak okunurluğu artırır.

+ Bir satırda, birden fazla ifade bulunmamalıdır.

+ Uzun bir ifade birden çok satır tutabilir. Bu durumda ifadeyi mantıklı 
yerlerden ayırmak gerekir. Örneğin; virgülle ayrılmış ifadelerden oluşan bir 
listede virgülden sonra ayrım yapmak gerekir. Ayrıca ifadenin sürdüğü tüm 
satırlar girintili olarak içeriden başlatılmalıdır.

+ Birden fazla operatör içeren bir deyim yazdığınızda operatör önceliklerini 
içeren tabloya bakmak iyidir. Deyim içi operatörlerin uygun biçimde 
kullanıldıklarından emin olun. Eğer karmaşık bir deyim içinde hesaplama 
sırasından emin olamazsanız, hesaplama sırasını istediğiniz şekle getirmek 
için matematik dersinde olduğu gibi parantezleri kullanın. C' nin tüm 
operatörleri soldan sağa çalışmaz.

Lazım olduğunda şu tabloya bakın: 

LR  Postfix:  () [] -> . ++ - -
RL  Unary: + - ! ~ ++ - - (type)* & sizeof
LR  Multiplicative:  * / %
LR  Additive:  + -
LR  Shift:  << >>
LR  Relational:  < <= > >=
LR  Equality:  == !=
LR  Bitwise AND:  &
LR  Bitwise XOR:  ^
LR  Bitwise OR:  |
LR  Logical AND:  &&
LR  Logical OR:  ||
RL  Conditional:  ?:
RL  Assignment:  = += -= *= /= %=>>= <<= &= ^= |=
LR  Comma:  ,


### TAŞINABİLİRLİK İPUÇLARI

+ Değişken ismi dilediğiniz uzunlukta olabilir lakin ANSI standardına göre 
yalnızca ilk otuz bir karakter dikkate alınır. Bu yüzden değişken tanıtıcı 
isimlerinizi otuz bir karakterden kısa tutmak taşınırlığı artırır.

---

## 3. BÖLÜM (C' de Yapısal Program Geliştirme)

### TERİMLER

+ action: eylem, işlem
+ action symbol: eylem, işlem sembolü
+ algorithm: algoritma
+ arithmetic assignment operators: aritmetik atama operatörleri
+ body of a loop: döngü gövdesi
+ cast operator: dönüşüm operatörü
+ compound statement: birleşik ifade
+ conditional operator: koşullu operatör
+ control structure: kontrol yapısı
+ counter: sayıcı, sayaç
+ counter-controlled repetition: sayıcı kontrollü tekrarlama/yineleme/döngü
+ decision: karar
+ decision symbol: karar sembolü
+ decrement operator: azaltma operatörü(--)
+ default precision: varsayılan/öntanımlı duyarlık
+ definite repetition: belirli döngü
+ diamond symbol: elmas sembolü
+ double-selection structure: çiftli seçim yapısı
+ empty statement: boş ifade
+ end symbol: bitiş sembolü
+ first refinement: ilk iyileştirme/rafinerizasyon
+ floating-point number: kayan noktalı sayı(reel sayı), ondalıklı sayı
+ flowchart: akış grafiği
+ increment operator: artırma operatörü(++)
+ indefinite repetition: belirsiz döngü
+ infinite loop: sonsuz döngü
+ initialization: ilk değer verme, atama, hazırlama
+ nested control structures: yuvalı, iç içe geçmiş kontrol yapıları
+ oval symbol: oval sembolü
+ postdecrement operator: son azaltma operatörü (a--)
+ postincrement operator: son artırma operatörü (a++)
+ precision: duyarlık
+ predecrement operator: ön azaltma operatörü (--a)
+ preincrement operator: ön artırma operatörü (++a)
+ promotion: terfi
+ pseudocode: sahte kod
+ rectangle symbol: dikdörtgen sembolü
+ rounding: yuvarlama
+ sentinel value: nöbetçi değer
+ sequence structure: sıra yapsı
+ stepwise refinement: adımsal iyileştirme/rafinerizasyon
+ ternary operator: üçlü operatör(x?y:z)(x durumu doğruysa y, değilse z)
+ truncation: budama, ondalık kısmı kısaltma

### ÖZET

+ Bütün programlar şu üç kontrol yapısı kullanılarak yazılabilir: 
  
  Sıra, Seçim, Döngü

+ Bir problemin çözümü, bir dizi işlemin belirli bir saraya göre yapılması 
ile olur. Bir problemin 'çalıştırılacak işlemler ve bu işlemlerin 
çalıştırılma sıraları bakımından çözümü' algoritma dediğimiz şeydir.

+ Bir programda, ifadelerin çalıştırılma sırasını belirleme program kontrolü 
denir.

+ Sahte kod(pseudocode), programcıların algoritma geliştirmelerine yardımcı 
olan yapay bir dildir. Günlük konuşma diline oldukça yakın olan bu yazım 
şekli bilgisayarda çalıştırılamaz. Sahte kodlar, programcı herhangi bir dil 
ile(C, Java, Python... vs.) program geliştirmeden önce yazacağı program 
hakkında düşünmesine yardımcı olur. 

+ Sahte kodlar yalnızca çalıştırılabilir ifadelerin yazımında kullanılırlar. 
Bildirimler ise, derleyiciye değişkenlerin özelliklerinin belirtildiği ve 
derleyicinin değişkenlere hafızada yer ayırmasını belirten mesajlardır.

+ Seçim yapıları bir çok işlem arasından duruma uygun olanı seçmek içindir.

+ 'if' seçim yapısı, belirlenmiş bir işi, yalnızca gerekli koşul doğru ise 
çalıştırır.

+ 'if/else' seçim yapısı, koşul doğru ve yanlış iken farklı işlemleri 
çalıştırır.

+ Yuvalı bir 'if/else' yapısı, birden fazla koşulu test edebilir. Eğer birden 
fazla koşul doğru ise yalnızca ilk doğru koşuldan sonraki ifadeler 
çalıştırılır.

+ Tek bir ifadenin kullanılması beklenen bir yerde, birden fazla ifade 
kullanılacaksa ifadeler küme parantezleri içine alınmalıdır. Birleşik bir 
ifade, tekli ifadelerin yerleştirilebildiği her yere yerleştirilebilir.

+ Hiç bir işlemin yapılmayacağını belirten boş ifade, normalde bir ifadenin 
bulunacağı yere yazlnıca noktalı virgül(;) yazılarak belirtilir.

  int a = 0;
  
  if(a == 0)
      ; /* boş ifade. a değeri 0 a eşitse hiç bir şey yapılmayacak. */

+ Döngü yapısı, bazı koşullar sağlandığı sürece belirlenen işlemlerin tekrar 
tekrar yapılmasını sağlar.

  while(koşul)
      ifadeler; /* birleşik veya blok ifadeler döngünün gövdesini oluşturur */ 

+ 'while' döngüsü içinde belirtilen ifadelerden biri, koşulun zaman içinde 
yanlış hale gelmesini sağlamalıdır. Aksi takdirde sonsuz döngü oluşur. 
Bu hatadır.

+ Sayıcı kontrollü döngüler, döngünün sonlanacağı durumu belirlemek için 
sayaç kullanırlar.

+ Toplam ve benzeri isimdeki değişkenler genellikle program çalıştırılmadan 
sıfıra(0) atanmalıdır.
  
  int i = 1;
  int sum = 0;

  while(i <= 10)
      sum += i;
      i++;

+ Akış grafiği, algoritmanın grafikle gösterimidir. Akış grafikleri; çember, 
dikdörtgen, elmas gibi özel sembollerle, bu sembolleri birbirine bağlayan 
akış çizgilerinden oluşur. Semboller bir işlem yapılacağını, akış çizgileri 
ise hangi sırada yapılacağını belirtir.

+ Oval sembol; algoritmanın başlangıç ve bitişini belirtir.

+ Dikdörtgen sembolü; işlem sembolüdür. Atama ifadesi, herhangi bir tipte 
hesaplama ya da giriş çıkış işlemi belirtir.

+ Elmas sembolü; karar sembolüdür. Bir karar verileceğini belirtir. Doğru 
veya yanlış olabilecek bir deyim içerir. Bu sembolden iki akış çizgisi çıkar. 
Bu akış çizgilerinden biri koşul doğru ise izlenecek yolu, diğeri koşul 
yanlış ise izlenecek yolu gösterir.

+ Ondalıklı bir kısım içeren değerler, ondalıklı sayılar olarak adlandırılır. 
float veri tipi ile temsil edilirler.

+ İki tamsayının bölümü ondalıklı bir değer çıkıyorsa, ondalıklı kısmı 
kaybolmuş bir tamsayı sonucu verir. Bu durumda (float) tekli dönüşüm 
operatörü kullanılarak operandının ondalıklı bir kopyası oluşturulması 
sağlanır. Bu cast işlemidir. Her tipte veri için dönüşüm(cast) operatörleri 
bulunur.

  int a = 5;
  int b = 2;
  int c;

  c = a / b; /* c' nin değeri 2.5 değil 2 olur. */

  printf("%.2f\n", (float)c); /* 2.50 değeri yazdırılır. */

+ C derleyicisi, operandlarının tipi aynı olan deyimleri hesaplayabilir. 
Operandların tiplerinin aynı olması için, derleyici terfi(promotion) işlemi 
uygular. Örneğin; 'int' ve 'float' veri tiplerini içeren bir ifadede, ANSI 
standardı, 'int' operandlarının kopyalarının oluşturulmasını ve 'float' veri 
tipine terfi ettirilmesini söylemektedir. ANSI standardı, değişik tipteki 
operandlar arasındaki terfi işlemleri için bir takım kurallara sahiptir.

+ Ondalıklı sayılar, 'printf()' fonksiyonu içerisinde '%f' dönüşüm belirteci 
ile noktadan sonra kaç basamak yazdırılacağını belirten bir duyarlıkla 
yazılırlar. Eğer duyarlık belirtilmeden '%f' olarak belirtilirse, noktadan 
sonra altı basamak yazdırılır. '%.2f' şeklinde yazılırsa, 1.2345 değerini 
1.23 olarak yazdıracaktır. Çünkü noktadan sonraki iki basamaktan sona kalan 
x.xx45 değeri 50 den küçük olduğu için aşağıya yuvarlanır. Eğer '%.2f' ile 
yazdırmak istediğimiz değer 1.2356 olsaydı, bu değer 1.24 olarak yazılacaktı. 
Çünkü noktadan sonraki iki basamaktan sona kalan x.xx56 değeri 50 den büyük 
olduğu için yukarı yuvarlanacaktı.

+ C, aritmetik atama ifadelerini kısaltmak için bir çok atama operatörüne 
sahiptir. Bu operatörler; '+=, -=, *=, /=, %=' operatörleridir. Şu işlemler 
aynıdır:
  
  a = a + 5;
  a += 5;

+ C' de '++' ve '--' operatörleri tekli artırma/azaltma operatörleri bulunur. 
Bu operatörlerle değişken bir artırabilir veya bir azaltabilir. Değişkenin 
önüne veya sonuna gelebilir. Eğer bu operatörlerden biri bir değişkenin önüne 
eklenmişse; değişken işleme girmeden önce bir artırılır veya bir azaltılır, 
ardından işleme sokulur. Eğer operatör değişkenin sonuna eklenmişse; değişken 
işleme sokulur, ardından bir artırılır veya bir azaltılır.

### GENEL PROGRAMLAMA HATALARI

+ Birleşik ifade yazımında küme parantezlerini unutmak hatadır.

+ Tek seçimli 'if' yapılarında, koşuldan sonra noktalı virgül(;) koymak bir 
mantık hatası; çift seçimli 'if' yapılarında ise bir yazım hatasıdır.

+ 'while' döngüsü içinde belirtilen ifadelerden biri, koşulun zaman içinde 
yanlış hale gelmesini sağlamalıdır. Aksi takdirde sonsuz döngü oluşur. 
Bu hatadır.

+ C' nin tüm anahtar kelimeleri yalnızca küçük harflerden oluşur. 
'while' kelimesini 'While' olarak yazmak hatadır.

+ Eğer sayıcı veya toplam değişkenlerine işlem öncesi ilk atama yapılmazsa 
program muhtemelen yanlış çalışacaktır. Bu, mantıksal hata örneğidir.

+ Veri olabilecek bir değeri, nöbetçi değer seçmek hatadır.

+ Sıfıra bölmeye çalışmak ölümcül hatadır.

+ Duyarlık belirteçleri (%2d, %.4f... vs.) yalnızca 'printf()' fonksiyonu ile 
kullanılırlar. 'scanf()' fonksiyonu ile kullanmak hatadır.

+ Ondalıklı sayılar çoğu bilgisayarda yaklaşık olarak temsil edilirler. 
Bu sayıların eksizsiz olarak gösterileceğini düşünerek ondalıklı sayılarla 
işlemler yapmak hatalı sonuçlara sebep olur.

+ Tekli artırma ve azaltma operatörlerini değişken isimleri yerine bir 
deyimle kullanmak yazım hatasıdır. 

  a++; /* bu olur */
  (a - 5)++; /* bu hatadır */

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ İçeriden başlayarak girintili yazma, program okunurluğunu artırır. Üç 
boşluk karakteri bırakarak yazabilirsiniz.

+ Sahte kodlar, program geliştirme sürecinde, programı ortaya çıkarma 
amacıyla kullanırlar. Daha sonra bu sahte kodlar, hangi progamlama dilinde 
isteniyorsa o dille yazılır.

+ 'if/else' yapısının gövdelerini girintili olarak içeriden başlatmak iyidir.

+ Eğer birden fazla seviyede girinti kullanılması gerekiyorsa, her girinti 
aynı miktarda içeriden başlatılmalıdır.

  if(koşul)
      işlemler;

      if(koşul)
          işlemler;
          ....

+ Bazı progrmacılar, birleşik ifade yazmadan önce küme parantezlerini 
yazarlar. Daha sonra küme parantezleri arasına yazacakları birleşik ifadeyi 
yazarlar. Böylece küme parantezlerini unutma durumundan kurtulurlar.

+ Sayıcı ve toplam değişkenlerine işlemlerden önce ilk değer vermek iyidir. 

+ Değeri sıfır(0) olması muhtemel bir deyimi bölme işleminde kullanacaksak, 
bunu programda ölümcül hata ortaya çıkarmadan kullanmak gerekir. Örneğin; 
kontollü hata mesajı yazdırarak kullanılabilir.

+ Nöbetçi değer kontrollü döngülerde, kullanıcıdan veri alınırken, nöbetçi 
değerin her seferde hatırlatılması iyidir.

+ Eşitlik karşılaştırması söz konusu olduğunda ondalıklı sayıları 
karşılaştırmayınız.

+ Tekli operatörlerle operandları arasında boşluk bırakılmamalıdır.

+ ANSI standardı, genellikle operatörün operandının hesaplama sırasını 
tanımlamamıştır.(4. Bölüm' de bazı istisnalar anlatılacaktır.) Bu sebepten, 
programcı, artırma veya azaltma operatörlerinin kullanıldığı ifadelerde belli 
bir değişkenin birden fazla kez artırılmasından veya azaltılmasından 
kaçınmalıdır.

### PERFORMANS İPUÇLARI

+ Değişkenler bildirilirken değişkenlere ilk değer atamak, programın çalışma 
zamanını kısaltır.

+ Şu ana kadar bahsedilen performans artırma ipuçlarından çoğu küçük 
geliştirmeler yapmaktadır. Bu sebepten okuyucu bunları önemsememeyi 
düşünebilir. Burada asıl önemli nokta, performans ipuçlarının tamamının 
birlikte yapacağı etkidir. Bu etki, programınızı önemli ölçüde 
hızlandırabilir. Ayrıca küçük bir iyileştirme, çok fazla tekrar eden bir 
döngü içine yerleştirilirse önemli bir gelişme ve hızlanma sağlanır.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ Birleşik ifadeler, tekli ifadelerin yerleştirildiği her yere 
yerleştirilebilir.

+ Boş ifade yazmak ifade gelebilecek bir yere yalnızca noktalı virgül(;) 
yazmakla olur.

+ Her iyileştirme, algoritmanın bütünleştirilmesidir. Yalnızca detay 
seviyesi değişmektedir.

+ Programların çoğu mantıksal olarak üç kısma ayrılabilir.
  
  Bildirim Safhası: Değişken bildirimi ve ilk değer ataması.
  İşleme Safhası: Girilen verilerin işlenmesi ve değişkenlerin ayarlanması.
  Sonlandırma Safhası: Sonuç hesaplaması ve yazdırılması.

+ Yukarıdan aşağıya adımsal iyileştirme süreci, sahte kodla yazılan algoritma 
programcı tarafından C kodlarına çevirilebilecek kadar detaya sahip olduğu 
zaman tamamlanır. İyileştirme işleminden sonra kodların yazımı çok kolay 
olacaktır.

+ Bilgisayarda bir problemi çözmedeki en zor kısım, doğru çözüm algoritması 
geliştirme olduğu tecrübeyle sabittir. Doğru algoritma geliştirildikten sonra 
çalışan bir C programı yazmak oldukça kolaydır.

+ Çoğu programcı, programlarını sahte kod gibi program geliştirme araçlarını 
kullanmadan yazarlar. Asıl hedeflerinin problemi bilgisayarda çözmek olduğunu 
düşünürler. Bu sebeple sahte kod yazmanın, üretim zamanını geciktirdiğini 
düşünürler.

---

## 4. BÖLÜM (C' de Program Kontorlü)

### TERİMLER

+ ASCII character set: ASCII karakter kümesi
+ control variable: kontrol değişkeni
+ end of file(EOF): dosya sonu(belirteci)
+ field width: alan genişliği
+ left justify: sola hizalama/yaslama
+ logical AND(&&): mantıksal VE
+ logical OR(||): mantıksal VEYA
+ logical negation(!): mantıksal DEĞİL
+ loop-continuation condition: döngü devam koşulu
+ loop-control variable: döngü kontrol değişkeni
+ loop counter: döngü sayacı
+ nesting rule: yuvalama kuralı
+ off-by-one error: bir eksi hatası
+ stacking rule: yığma kuralı
+ truth table: doğruluk tablosu
+ unary operator: tekli operatör
  
### ÖZET

+ Döngü, bilgisayarın belli sonlandırma koşulları sağlanana kadar tekrar 
ettiği bir grup emirdir. İki çeşidi vardır:
  - Sayıcı Kontrollü Döngü
  - Nöbetçi Kontrollü Döngü

+ Döngü sayıcısı döngünün kaç kez tekrarlanacağını saymak için kullanılır. 
Döngünün her tekrarında sayıcı artırılır(genellikle bir artırılır).

+ Nöbetçi değerler, döngünün kaç kez tekrarlanacağı bilinmediğinde ve döngü 
her tekrarında yeni bir veri alıyorsa kullanılır.

+ Nöbetçi değer, programın işleyeceği tüm veriler girildikten sonra girilir. 
Nöbetçi değer, verilerle yanlışlıkla karışmayacak bir biçimde dikkatlice 
seçilmelidir.

+ 'for' döngüsü, sayıcı kontrollü döngülerin tüm detaylarını otomatik olarak 
yapabilir. 
  
  for(deyim1;deyim2;deyim3)
      ifade;

+ 'do/while' döngü yapısı 'while' döngü yapısına benzer. Ancak 'do/while' 
döngü yapısında, döngü devam koşulu döngünün sonunda kontrol edildiğinden 
döngü en az bir kez çalışır.

  do
      ifade;
  while(koşul);

+ 'break' ifadesi, döngü yapıları içinde(for, while, do/while) 
çalıştırıldığında, yapıdan anında çıkışı sağlar. Programın çalışması döngüden 
sonraki ilk ifade ile devam eder.

+ 'continue' ifadesi, döngü yapıları içinde(for, while, do/while) 
çalıştırıldığında, döngü yapısının gövdesindeki kalan diğer ifadeleri atlar 
ve döngünün bir sonraki tekrarını başlatır.

+ 'switch' ifadesi, bir değişkenin ya da ifadenin alacağı değerlere göre 
farklı farklı işlemler yapma kararını halleder. 'switch' içindeki 'case' 
kısmı bir çok ifadenin çalıştırılmasını sağlatabilir. Çoğu programda her 
'case' ifadesinin 'break' içermesi gerekebilir. 'break' olmaması durumunda 
program, 'break' ifadesi ile karşılaşıncaya ya da 'switch' yapısının sonuna 
gelinceye kadar tüm 'case' kısmı içindeki ifadeleri çalıştırır. Birden fazla 
'case' durumu aynı ifadeleri çalıştırmaları için ifadeden önce yanyana 
yazılabilir. 'switch' yapısı yalnızca sabit değerleri test edebilir.

+ 'getchar()' fonksiyonu, klavyeden(standart giriş) alınan bir karakteri, 
tamsayı değeri olarak döndürür.

+ UNIX sistemlerde ve diğer pek çoğunda EOF(end of file) karakteri şu tuş 
kombinasoynu ile girilir: <return><ctrl-d>

+ VMS ve DOS sistemlerde ise EOF(end of file) karakteri şu tuş kombinasyonu 
ile girilir: <ctrl-z>

+ Mantık operatörleri koşulları birleştirerek karmaşık koşullar oluşturmakta 
kullanılabilir. Mantık operatörleri şunlardır:
  && : mantıksal VE (AND)
  || : mantıksal VEYA (OR)
  !  : mantıksal DEĞİL (NOT)

+ C' de yalnızca 0 değeri 'false' olarak kabul edilir. 0 dan farklı herhangi 
bir değer 'true' kabul edilir.

NOT: C'de 0 hariç her şey 'true' dur. Çünkü C' de boolean(yalnızca 0 veya 1) 
değişkeni konsepti yoktur. '0' a ve '0' ile ifade edilen 'false' e eşit 
olmayan tüm nümerik değerler 'true' olur.

### GENEL PROGRAMLAMA HATALARI

+ Ondalıklı sayılar yalnızca gerçek değerlerine yakın birer tahmindirler. Bu 
yüzden döngülerde kontrol değişkeni olarak kullanılması, kesin olmayan sayıcı 
değerleri elde edilmesi ve sonlandırma için yanlış değer elde edilmesine, 
böylece programın yanlış zamanda sonlandırılmasına veya sonlandırılamamasına 
neden olur.

+ 'for' veya 'while' döngüsü içinde yanlış karşılaştırma operatörü kullanmak 
ya da döngü sayıcısı için yanlış son değerler vermek mantık hatası oluşturur.

+ 'for' döngüsü koşulları arasında noktalı virgül(;) yerine virgül(,) 
kullanmak hatadır.

+ 'for' döngüsü başlığı dışına noktalı virgül(;) koymak o for yapısının 
gövdesini boş bir ifade haline getirir. Bu bir mantık hatasıdır.

+ 'switch' yapısında gerekli yerlere 'break' kullanmamak.

+ Karakter okurken yeni satır karakterini(\n) özel olarak işlememek mantık 
hatalarına neden olabilir.

+ 'for', 'while' ya da 'do/while' döngü yapılarında döngü devam şartı asla 
yanlış hale gelmiyorsa sonsuz döngüler oluşur. Bunu önlemek için 'for' ya da 
while yapılarının başlığının sonuna noktalı virgül(;) koymadığınıza emin 
olun. Sayıcı kontrollü döngülerde kontrol değişkeninin döngü gövdesinde 
artırılmaısna/azaltılmasına dikkat edin. Nöbetçi kontrollü döngülerde, 
nöbetçi değerin girildiğine emin olun.

+ '=' operatörü atama, '==' operatörü eşitlik karşılaştırma operatörüdür. 
Tam tersi kullanım hatadır.

  İYİ PROGRMALAMA ALIŞTIRMALARI:

+ Döngüleri tamsayı değerlerle kontrol etmek.

+ Kontrol yapılarının gövdelerini içeriden başlatmak.

+ Kontrol yapısından önce ve sonra boşluk bırakarak kontrol yapısını belirgin 
hale getirmek, yapı içeriğini içeriden başlatarak yazmak okunurluğu artırır.

+ Çok fazla yuvalama kullanmak programın okunurluğunu, anlaşılırlığını 
azaltır. Genel kural olarak üç seviyeden fazla yuvalama kullanılmamalıdır.

+ 'for' ve 'while' yapılarında döngünün son değerini '<=' karşılaştırma 
operatörü ile karşılaştırmak mantık hatalarını önlemeye yardımcı olur. 
Örneğin; 1'den 10'a kadar sayıları yazdıracak olan bir döngünün devam koşulu 
'sayici < 11' yerine 'sayici <= 10' olmalıdır. Böylece döngünün nerede 
biteceğini doğrudan bilmiş oluruz.

+ 'for' yapısı içinde, yalnızca kontrol değişkenlerine ilk değer atama 
kısımlarını ve 'for' yapısında artırma yapılan kısımları yerleştirmek iyidir. 
Diğer değişkenlerle ilgili işlemler, eğer yalnızca bir kez yapılacaksa 
döngüden önce, eğer birden fazla kez tekrarlanacaksa döngünün içine 
yerleştirilmelidir.

+ Kontrol değşikenini 'for' döngüsünün gövdesinin içine değiştirmek mümkündür 
ancak bu hatalara yol açabilir. En iyisi kontrol değişkenini değiştirmemektir.

+ 'for' yapısı gövdesindeki ifadeler 'for' yapısı içine alınabilse de bunu 
yapmaktan kaçınmalıyız. Programın okunurluğu zorlaşır.

+ Kontrol yapısını eğer mümkünse tek bir satıra sığdırmak iyidir.

+ 'float' ve 'double' tipte değişkenleri para ile ilgili hesaplarda 
kullanmayınız! Ondalıklı sayıların tam olarak gösterilememesinden dolayı 
hatalar oluşabilir.

+ 'switch' yapılarında 'default' kısmı olmasını sağlayın. 'switch' yapısında 
test edilemeyen 'case' yapıları ihmal edilir. 'default' kullanmak, 
programcının istisnai durumları işleyebilmesine yardımcı olur. Bazı 
durumlarda 'default' kullanmak gerekli olmayabilir.

+ 'case' ve 'default' kısımları 'switch' yapısında istenilen sırada yer 
alabilir ancak 'default' kısmını yapının sonunda kullanmak iyi bir 
alışkanlıktır.

+ 'switch' yapılarında 'default' kısmını yapının sonuna yerleştirdiğimizde 
'break' ifadesine gerek kalmaz. Ancak bazı programcılar 'case' kısımlarıyla 
uyumun bozulmaması için 'default' kısmında da 'break' kullanırlar.

+ Karakter okurken yeni satır karakterini(\n) işleyecek kodlar yazmayı 
unutmayın.

+ Bazı programcılar 'do/while' yapısında küme parantezlerine ihtiyaç 
duyulmasa bile küme parantezi kullanırlar. Bu tek ifade içeren 'do/while' 
yapıları ile while yapılarının karışmasını engeller.

+ Bazı programcılar 'break' ve 'continue' ifadelerinin yapısal programlama 
modeline uymadığını düşünürler. Bu programcılar, ileride anlatılacak bazı 
yöntemlerle aynı etkiyi yaratırlar.

+ Eşitlik deyimi, 'x == 1;' gibi bir değişken ismi ve bir sabit içerdiğinde, 
bazı programcılar sabit değer solda, değişken ismi sağda bulunacak şekilde 
yazarak(1 == x;), yanlışlıkla '==' operatörü ile '=' operatörünü 
karıştırmaktan kaynaklanabilecek mantık hatalarını engellerler.

### PERFORMANS İPUÇLARI

+ Hafızanın sınırlı ya da hızın gerekli olduğu performansa yönelik durumlarda 
küçük tamsayılar kullanmak gerekebilir.

+ 'break' ve 'continue' eğer uygun biçimde kullanılırsa, aynı etkiyi 
oluşturacak yapısal programlama tekniklerinden daha hızlı çalışırlar.

+ '&&' operatörünü kullanan ifadelerde; en sola yanlış olma ihtimali fazla 
olan ifadeleri yerleştirin. '||' operatörünün kullanan ifadelerde ise; doğru 
olma ihtimali daha fazla olan deyimi en sola yerleştirin. Bu, programın 
çalışma zamanını kısaltacaktır.

### TAŞINABİLİRLİK İPUÇLARI

+ EOF(end of file) değerini girmek için gerekli olan tuş kombinasyonu 
sistemlerde farklılık gösterebilir.
  UNIX : <return><ctrl-d>
  VMS & DOS : <ctrl-z>

+ '-1' değeri yerine EOF ile test etmek taşınırlığı artırır. ANSI standardına 
göre EOF, negatif bir değerdir. Bu sebepten, EOF farklı sistemlerde farklı 
değerlere sahip olabilir.

+ 'int' farklı sistemlerde farklılık gösterebilir. Eğer kullanacağınız 
değerlerin (+/-)32767 aralığı dışında olmasını bekliyorsanız ve programınızı 
farklı sistemlerde kullanabilmeyi istiyorsanız 'long' tamsayıları kullanın.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ Yazılım mühendisliğinde, kaliteli yazılım ve en iyi çalışan yazılımı 
yazmak arasında bir denge vardır. Bu hedeflerden birine ulaşmak için genelde 
diğerinden vazgeçmek gerekir.

---

## 5. BÖLÜM (Fonksiyonlar)

### TERİMLER

+ abstraction: soyutlama
+ automatic storege: otomatik depolama
+ automatic variable: otomatik değişken
+ 'auto' storage class specifier: 'auto' depolama sınıfı belirteci
+ base case in recursion: yinelemede temel durum
+ block scope: blok faaliyet alanı
+ call by reference: referansa göre çağırma
+ call by value: değere göre çağırma
+ caller: çağırıcı
+ calling function: çağırıcı fonksiyon
+ file scope: dosya faaliyet alanı
+ function call: fonksiyon çağrısı
+ function decleration: fonksiyon bildirimi
+ function definition: fonksiyon tanımı
+ function prototype: fonksiyon prototipi
+ global variable: global değişken(genel değişken)
+ header file: öncü dosya
+ information hiding: bilgi gizleme
+ linkage: bağlama
+ local variable: yerel değişken
+ optimizing compiler: derleyici optimizasyonu, eniyileştirmesi
+ randomize: rassallaştırma, rastgelelştirme
+ recursion: yineleme
+ return value: geri döndürülen değer
+ simulation: simülasyon, benzetim

### ÖZET

+ Büyük programlar geliştirmenin en iyi yolu, programı orijinal programdan 
daha kolay idare edilebilir küçük program modüllerine bölmektir. Modüller, 
C' de fonksiyon olarak yazılırlar.

+ Bir fonksiyon, fonksiyon çağrısıyla çağrılır. Fonksiyon çağrısı, 
fonksiyondan ismiyle bahseder ve çağırılan fonksiyonun görevini yapabilmesi 
için ihtiyaç duyabileceği bilgileri(argümanları) sağlar.

+ Bir programda fonksiyonlar, fonksiyonun ismi ve parantez içinde argümanı
(veya virgülle ayrılmış argüman listesi) yazılarak çağrılır.

+ Fonksiyonlar için bilgi saklamanın amacı, yalnızca görevlerini yerine 
getirebilecekleri kadar bilgiye ulaşmalarıdır. Bu, iyi yazılım 
mühendisliğinin temel prensiplerinden olan 'en az yetki' prensibinin 
uygulanmasıdır.

+ 'double' tipte veri, 'float' gibi ondalıklı veri tipidir ve 'float' ile 
tutulabilecek değerlerden daha büyük, daha duyarlı değerler tutabilir.

+ Bir fonksiyonun argümanları bir sabit, deyim ya da değişken olabilir.

+ Yerel bir değişken, yalnızca fonksiyon tanımı içinde bilinir. Diğer 
fonksiyonların, bir fonksiyonun yerel değişkenlerinin isimlerini ve 
uygulama detaylarını bilmeye izni yoktur.

+ Fonksiyon tanımının genel biçimi şöyledir:

  geri_döndüreceği_değer fonksiyon_ismi(parametre_listesi)
  {
      bildirimler;

      ifadeler;
  }

Fonksiyonun geri döndüreceği değer tipi, çağrıcı fonksiyona döndürülecek 
sonucun tipini gösterir. Eğer fonksiyon bir değer döndürmüyorsa, geri 
döndürülecek değer 'void' olarak bildirilir. Fonksiyon ismi, geçerli herhangi 
bir tanıtıcı olabilir. Parametre listesi, fonksiyon çağrıldığında, 
fonksiyonun çalışması için gerekli parametrelerin bildirimlerini içeren 
virgülle ayrılmış bir listedir. Eğer fonksiyon çalışması için herhangi bir 
parametre almıyorsa parametre listesi 'void' olarak bildirilir. Fonksiyon 
gövdesi küme parantezleri içine yazılır ve fonksiyonu oluşturan bildirim ve 
ifadelerin bir kümesidir.

+ Fonksiyona geçirilen argümanlar, fonksiyon prototipindeki parametrelerle 
sayı, tip ve sıra bakımından uyuşmalıdır.

+ Program fonksiyonla karşılaştığında, kontrol çağırma anından itibaren 
çağrılan fonksiyona aktarılır. Çağrılan fonksiyonun ifadeleri çalıştırılır ve 
kontrol çağrıcı fonksiyona döner.

+ Bir fonksiyonun çağrıldığı yere dönmesini kontrol etmek için üç farklı yol 
vardır: 

Eğer fonksiyon bir sonuç ile geri dönmeyecekse; 
  - fonksiyonun son parantezine ulaşıldığında, (ya da) 
  - 'return;' ifadesinin çalıştırılmasıyla 
  
  kontrol çağırıcı fonksiyona döner. 

Eğer fonksiyon bir sonuçla geri dönecekse;
  - 'return deyim;'

  ifadesi ile 'deyim' in değeri ve kontrol çağırıcı fonksiyona döndürülür.

+ Fonksiyon prototipi şunları bildirir:
  - fonksiyon tarafından döndürülecek verinin tipini, 
  - fonksiyonun almayı beklediği parametre sayısını,
  - parametrelerin tiplerini,
  - parametrelerin sırasını

Fonksiyon prototipleri, derleyicinin fonksiyon çağrılarının doğru yapıldığını 
onaylamasını sağlar.

+ Derleyici, fonksiyon prototipi argüman listesinde yer alan değişken 
isimlerini ihmal eder. Yazılmasa da olur.

+ Veri tipi dönüşüm belirteçleri:
  
  Veri Tipi         | printf | scanf
  ----------------------------------
  char              | %c     | %c
  short             | %hd    | %hd
  int               | %d     | %d
  unsigned int      | %u     | %u
  long int          | %ld    | %ld
  unsigned long int | %lu    | %lu
  float             | %f     | %f
  double            | %f (*) | %lf   => float 'prinft()' i ile aynı. (C89)
  long double       | %Lf    | %Lf

+ Her standart kütüphane içinde şunların yer aldığı bir header(öncü) dosyaya 
sahiptir:
  - o kütüphanedeki her fonksiyonun prototipi, 
  - bu fonksiyonlar tarafından kullanılabilecek çeşitli veri tipleri, 
  - bazı sabitler(makrolar).

+ Standart Kütüphane Header Dosyaları:
  
  - assert.h :
  Programın hatalarının ayıklanmasında yardımcı olması için eklenen 'assert' 
  makrosunu ve bilgilerini içerir.

  - ctype.h :
  Programa girilen karakterleri belirli özelliklere göre test eden, 
  değiştiren fonksiyon prototiplerini içerir.

  - errno.h :
  Hata mesajlarını iletmek için tanımlı makroları içerir.

  - float.h :
  Sisteminizin ondalıklı sayı lmitlerini tutar.

  limits.h :
  Sisteminizin tanımlı veri tipleri(char, int, float... vs.) için ayarladığı 
  limitlerin yer aldığı makroları içerir.

  - locale.h :
  Programın çalıştırıldığı yerdeki lokasyon bazlı sistem bilgilerini
  (Türkçe karakterler, tarih/zaman biçimi, para birimi, sayı gösterimi...vs.) 
  içeren fonksiyon prototiplerini ve makroları içerir.

  - math.h :
  Matematik kütüphane fonksiyon prototiplerini ve makrolarını içerir. 
  Bu kütüphanedeki tüm fonksiyonlar işlemek için 'double' parametre kullanır, 
  'double' değer döndürür.

  - setjmp.h :
  Fonksiyon çağrıları ve geri dönüşlerini sağlayan 'setjmp()' makrosunu, 
  'longjmp()' fonksiyonunu ve 'jmp_buf' değişken tipini içerir.

  - signal.h :
  Programın çalışması esnasında oluşabilecek çeşitli durumları gerçekleştiren 
  makroları ve fonksiyon prototiplerini içerir.

  - stdarg.h :
  Sayısı ve tipleri belli olmayan argüman listesine sahip fonksiyonların 
  çalışmasını sağlayan makroları tutar.

  - stddef.h :
  Çeşitli değişken tiplerini ve makroları içerir. Bu header içinde yer alan 
  tanımlamaları başka header dosyalarında da görebiliriz.

  - stdio.h :
  Standart giriş/çıkış için kullanılan kütüphane fonksiyonlarının 
  prototiplerini, değişken tiplerini ve makroları içerir.

  - stdlib.h :
  Sayıları yazılara, yazıları sayılara çeviren; rastgele sayılar üreten; 
  hafıza ayrılmasını sağlayan fonksiyon prototiplerini, makroları ve 
  değişken tipleriri içerir.

  - string.h :
  Karakter dizilerini(char arrays)(diğer dillerde 'string') işleyen fonksiyon 
  prototiplerini, makroları ve değişken tiplerini içerir.

  - time.h :
  Zaman, tarih işlemleri yapan fonksiyon prototiplerini, makroları ve 
  değişken tiplerini içerir.

+ Programcılar kendi header dosyalarını yazabilir ve programlarına dahil 
edebilirler.

+ Argümanlar değere göre çağırılma ile geçirilirse, değişkenin değerinin bir 
kopyası oluşturulur ve çağırılan fonksiyona geçirilir. Oluşturulan kopyadaki 
değişiklikler çağırıcı fonksiyondaki orijinal değişken değerini etkilemez.

+ C' deki tüm çağrılar değere göre çağırma ile yapılır.

+ 'rand()' fonksiyonu 0 ile 'RAND_MAX' arasında bir tamsayı üretir. 
ANSI standardına göre 'RAND_MAX' en az 32767 olabilir.

+ 'rand()' ve 'srand()' fonksiyonlarının prototipleri 'stdlib.h' header 
dosyası içindedir.

+ Bir programı rassallaştırmak için C standart kütüphane fonksiyonu olan 
'srand()' fonksiyonunu kullanın.

+ 'srand()' fonksiyonu, yazılan programın hataları tamamıyla ayıklandıktan 
sonra programa yerleştirilir. Hata ayıklama esnasında 'srand()' fonksiyonunu 
çıkartın. Bu, tekrarlamayı garanti altına alır. Bu, rastgele sayı üretme 
programında yapılan değişikliklerin doğru biçimde çalıştığını ıspatlamak için 
oldukça önemlidir.

+ Eğer her seferinde besleme/tohumlama değeri girmek istemiyorsak şu ifadeyi 
kullanabiliriz: 
  'srand(time(NULL));'

'time()' fonksiyonu o anki saati, saniye biçiminde oluşturur. 
'time()' fonsiyonunun prototipi 'time.h' header dosyası içindedir.

+ Rastgele üretilmiş bir sayıyı belirli bir sayı kadar kaydırmak ve 
derecelendirmek için gerekli denklemin genel hali şudur:
  'n = a + rand()%b;'

  a: kaydırma değeri
  (ard arda gelen tamsayılardan oluşan aralığın başlangıç değeri)

  b: derecelendirme faktörü
  (ard arda gelen tamsayılardan oluşan istenen aralığın genişliği)

Örneğin:
  n = 1 + rand() % 6;
  /* Bu ifade, 1 - 6 ve arasındaki tamsayılardan rastgele birisini verir. */ 

  n = rand() % 6;
  /* Bu ifade, 0 - 5 ve arasındaki tamsayılardan rastgele birisini verir. */

+ Bir programdaki her tanıtıcı şu özelliklere sahiptir:
  - depolama sınıfı
  - depolama süreci
  - faaliyet alanı
  - bağlama

+ C, 'auto', 'register', 'extern' ve 'static' depolama sınıfı belirteçleriyle 
adlandırılan dört depolama sınıfına sahiptir.

+ Bir tanıtıcının depolama süresi, o tanıtıcının hafızada tutulma süresidir.

+ Bir tanıtıcının faaliyet alanı(scope), tanıtıcının program içinde 
fonksiyonlar tarafından erişilip kullanılabileceği yerlerdir.

+ Bir tanıtıcının bağlaması, çok kaynaklı bir program içinde, tanıtıcının 
yalnızca o andaki kaynak dosyada mı, yoksa uygun bildirimlerle herhangi bir 
kaynak dosyada mı geçerli olacağını belirler.

+ Otomatik(auto) depolama süreçli değişkenler, programın akışı 
bildirildikleri blok içine girdiğinde oluşturulur, bloktan çıkıldığında yok 
edilirler. Bir fonksiyonun yerel değişkenleri, 'auto' depolama sürecine 
sahiptirler.

+ 'register' depolama sınıfı belirteci, otomatik(auto) değişken bildiriminden 
önceye yerleştirilerek, derleyiciye, bu değişkeni bilgisayarın yüksek hızlı 
donanım yazmaçlarından(register) birine yerleştirmesini söyler. Derleyici, 
uygun yazmaç(register) yoksa, 'register' bildirimlerini ihmal edebilir. 
'register' anahtar kelimesi, yalnızca 'auto' depolama süreçli değişkenlerle 
kullanılabilir.

+ 'extern' ve 'static' anahtar kelimeleri, statik yani program çalışmaya 
başladığı andan itibaren oluşturulan, oluşturulduktan sonra program süresince 
yok edilmeyen değişken ve fonksiyon tanıtıcılarını bildirmek için 
kullanılırlar.

+ Statik depolama zamanlı iki tip tanıtıcı vardır: 
  - Dış tanıtıcılar( global değişkenler ve fonksiyon isimleri )
  - 'static' depolama zamanı belirteci ile bildirilmiş yerel değişkenler

+ Global değişkenler, değişken bildirimleri herhangi bir fonksiyon tanımı 
dışında yapılarak oluşturulur ve değerlerini programın çalışma zamanı boyunca 
korurlar.

+ 'static' olarak bildirilmiş yerel değişkenler, program akışı bulundukları 
fonskiyondan çıksa bile değerlerini korurlar.

+ 'static' depolama zamanlı tüm nümerik değişkenler, programcı tarafından 
özel olarak bir değere atanmadıkça, ilk değer olarak sıfır(0) a atanırlar.

+ Bir tanıtıcının dört faaliyet alanı vardır:
  - fonksiyon prototipi faaliyet alanı
  - fonksiyon faaliyet alanı
  - blok faaliyet alanı
  - dosya faaliyet alanı

+ Etiketler, fonksiyon faaliyet alanına sahip tek tanıtıcılardır. Etiketler, 
bulundukları fonksiyon içinde her yerde kullanılabilirler ancak fonksiyon 
gövdesi dışında kullanılamazlar.

+ Herhangi bir fonksiyonun dışında bildirilmiş tanıtıcılar, dosya faaliyet 
alanına sahiptir. Bu tip bir tanıtıcı, bildirildiği yerden dosya sonuna kadar 
olan tüm fonksiyonlar tarafından bilinir.

+ Bir blok içine yerleştirilmiş tanıtıcılar, blok faaliyet alanına sahiptir. 
Blok faaliyet alanı bloğu sonlandıran küme parantezine(}) ulaşılınca sona 
erer.

+ Fonksiyonun başında bildirilen yerel değişkenler, fonksiyon parametreleri 
gibi blok faaliyet alanına sahiptirler ve fonksiyon için yerel değişkenler 
olarak bilinirler.

+ Herhangi bir blok, değişken bildirimleri içerebilir. Bloklar yuvalandığında 
ve dış bloktaki tanıtıcı, iç bloktaki tanıtıcı ile aynı isme sahip olduğunda, 
dış bloktaki tanıtıcı iç blok sona erene kadar saklanır.

+ Fonskiyon prototipi faaliyet alanına sahip tek tanıtıcı,fonksiyon 
prototipinin parametre listesinde yer alan tanıtıcılardır. Fonksiyon 
prototipinde kullanılan tanıtıcılar, programın herhangi bir yerinde 
karışıklık olmadan kullanılabilirler. Derleyici için fonksiyon prototipindeki 
bu tanıtıcılar olmasa da olurlar.

+ Yinelemeli fonksiyon(recursive function), kendi kendini doğrudan ya da 
başka bir fonksiyon içinden çağıran fonksiyondur.

+ Eğer yinelemeli bir fonksiyon, temel bir durumla çağırılırsa bir sonuç 
döndürür. Eğer daha karmaşık bir durumla/problemle çağrılırsa fonksiyonun 
kendisi problemi kavramsal iki parçaya ayırır. 
  - fonksiyonun nasıl yapacağını bildiği parça
  - fonksiyonun nasıl yapacağını bilmediği parça

Yinelemeli fonksiyonun nasıl yapacağını bilmediği bu kavramsal parçayı, yani 
orijinal probleme benzeyen bu küçük problemi çözmek için, kendisinin yeni bir 
kopyasını çağırarak bu problemi çözer.

+ Yinelemeden çıkılabilmesi için, yinelemeli fonksiyon kendisini, problemin 
daha basit bir versiyonunu çözme amacıyla çağırır. Bu basit, ve giderek daha 
da basitleşen problemlerin dizisi, en sonunda temel bir duruma ulaşmalıdır. 
Bu noktada fonksiyon temel durumu tanır ve onu alıp fonksiyonun bir önceki 
kopyasına sonuç olarak aktarır. Bu kopya, kendinden bir üst kopyaya kendisine 
aktarılan sonuçları aktarır. Bu durum, fonksiyonun ilk/orijinal çağrısının 
alt kopyalardan gelen sonuçları işleyerek en son sonucu döndürmesi ile sona 
erer.

+ ANSI standardı, çoğu operatörün(+ operatörü de dahil olmak üzere) 
operandlarının değerlendirme sırasını belirtmemiştir. ANSI standardı, tüm 
operatörler arasından yalnızca dört tanesinin değerlendirme sıralarını 
belirlemiştir. Bunlar: '&&', '||', ',', '?:' operatörleridir. Bunlardan ilk 
üçü ikili operatörlerdir ve bu operatörlerin operandlarının soldan sağa doğru 
işlenmesi garanti altına alınmıştır. Son operatör(?:) ise C' nin üçlü tek 
operatörüdür. Bu operatörün en soldaki operandı, her zaman ilk olarak işleme 
alınır. Eğer en soldaki operand sıfır(0 = false) harici bir değer(true) 
olarak hesaplanırsa; ortadaki operand hesaplanır, son operand(en sağ) ihmal 
edilir. Eğer en soldaki operand sıfır(0 = false) olarak hesaplanırsa; 
en sağdaki(son) operand hesaplanır, ortadaki operand ihmal edilir.

+ Yineleme ve tekrar, şu kontrol yapılarına dayanır: 
  - Yineleme(Recursion): Seçim Yapısı
  - Tekrar(Repetition): Döngü Yapısı

+ Yineleme ve tekrarın ikisi de döngü içerir. Şöyle ki:
  - Yineleme, döngüyü fonksiyon çağrılarının tekrarında kullanır.
  - Tekrar, özellikle döngü yapısını kullanır.

+ Yineleme ve tekrarın her ikisi de bir sonlandırma durumu içerirler. 
  - Yineleme; temel bir durumla karılaştığında sona erer.
  - Tekrar; döngü devam koşulu yanlış hale geldiğinde sona erer.

+ Yineleme ve tekrarın her ikisi de sonsuz olabilir.
  - Sonsuz yineleme; yineleme adımı, uğraştığı problemi temel duruma 
  yaklaştıracak şekle indirgeyemiyorsa oluşur.
  - Sonsuz döngü; döngü devam şartı asla yanlış(false) hale gelmiyorsa 
  oluşur. 

+ Yineleme; yineleme mekanizmasını sürekli çağırarak fonksiyon çağrılarının 
artmasına sebep olur. Bu da, işlemci zamanı ve hafızada(RAM) fazladan yük 
demektir.

### GENEL PROGRAMLAMA HATALARI

+ Matematik kütüphane fonksiyonlarını kullanırken, 'math.h' header/öncü 
dosyasını eklemeyi unutmak garip sonuçlara yol açabilir.

+ Fonksiyon tanımlamalarında geri dönüş değerini unutmak, eğer fonksiyonun 
prototipi 'int' tipinden başka bir geri dönüş tipi ile belirtilmişse yazım 
hatası oluşturur.

+ Bir değer ile dönmesi beklenen fonksiyonun geri dönüş değerinin 
belirtilmemesi beklenmeyen hatalara yol açabilir. ANSI standardı, bu ihmalin 
sonuçlarını belirlememiştir.

+ Geri dönüş tipi 'void' olarak bildirilmiş bir fonksiyonun bir değer 
döndürmesi, yazım hatasıdır.

+ Aynı tipte fonksiyon parametrelerini 'double x;', 'double y;' olarak değil, 
'double x, y;' olarak bildirmek hatadır. 'double x, y;' bildirimi, 
y parametresinin tipinin otomatik olarak 'int' olmasına sebep olur. Çünkü 
belirtilmeyen parametre tipleri, otomatik olarak 'int' tipinde varsayılır.

+ Fonksiyon prototipinin sonuna noktalı virgül(;) koymamak yazım hatasıdır.

+ Fonksiyonun parametre listesini yazdığımız parantezlerin dışına noktalı 
virgül(;) koymak yazım hatasıdır.

+ Bir fonksiyon parametresini, daha sonradan fonksiyon içinde yerel değişken 
olarak kullanmak yazım hatasıdır.

+ Bir fonksiyon içinde başka bir fonksiyon tanımlamak yazım hatasıdır.

+ Dönüşüm hiyerarşisinde, daha yüksek data saklama kapasitesine sahip bir 
veri tipi, daha düşük data saklama kapasitesine sahip bir veri tipine 
dönüştürülürse, verinin değeri değişebilir.

+ Fonksiyon prototipinin unutulması, eğer fonskiyonun geri dönüş tipi 'int' 
değilse ve fonksiyon tanımı, fonksiyon çağrısından daha sonra bulunmuyorsa, 
yazım hatalarına sebep olur. Aksi takdirde fonksiyon prototipinin unutulması, 
çalışma zamanı(runtime) hatalarına veya beklenmeyen hatalara yol açabilir.

+ Rastgele sayılar üretirken 'rand()' fonksiyonu yerine tohumlama/seed değeri 
girmekte kullanılan 'srand()' fonksiyonunu kullanmak hatadır.

+ Bir tanıtıcı için birden çok depolama sınıfı belirteci kullanmak hatadır. 
Bir değişkene yalnızca bir depolama sınıfı belirteci uygulanabilir.

+ Programcı dış bloktaki tanıtıcının iç blok çalışırken de aktif olmasını 
isterken, yanlışlıkla iç blokta kullandığı tanıtıcı isminin dış blokta 
kullandığı tanıtıcı ismi ile aynı olması hatadır.

+ İhtiyaç duyulmasına rağmen bir yinelemeli fonksiyondan geri değer 
döndürmeyi unutmak hatadır.

+ Yineleme fonksiyonunun en dibindeki temel durumu, yineleme fonksiyonuna 
dahil etmemek ya da yineleme fonksiyonunu temel duruma erişemeyecek şekilde 
yanlış yazmak, neticede hafızayı yoran sonsuz yinelemeye sebep olur. Bu, 
yineleme olmayan bir çözümde, sonsuz döngü oluşturma problemiyle eşdeğerdir. 
Sonsuz yineleme, beklenmeyen bir giriş yapıldığında da ortaya çıkabilir.

+ '&&', '||', ',' ve '?:' operatörlerinin operandlarının değerlendirilme 
sırası ANSI standardına göre tam olarak bellidir. Bu operatörlerin dışındaki 
operatörlerin operandlarının değerlendirilme sırası ise ANSI standardına göre 
belirsizdir. Bu değerlendirme sırası belirsiz operatörlerin operandlarının 
değerlendirme sırasına bağımlı yazılan programlar hatalara sebep olur. Çünkü 
derleyiciler, operandları programcının beklediği şekilde değerlendirmeye 
almayabilir.

+ Yanlışlıkla, kendi kendini doğrudan ya da başka bir fonksiyon içinden 
çağıran, yinelemeli olmayan bir fonksiyona sahip olmak hatadır.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ ANSI C standart kütüphanesi içindeki fonksiyonları iyi inceleyin.

+ Bir programda matematik kütüphanesi fonksiyonlarını kullanıyorsak, 
programımızın başına '#include <math.h>' önişlemci komutunu yazarak, 
matematik header/öncü dosyasını programımıza eklemeliyiz.

+ Programın okunurluğunu artırmak ve fonksiyonları ayırmak için fonksiyon 
tanımlarından önce bir satır boşluk bırakmak iyidir.

+ Geri dönüş tipi ihmal edildiğinde, derleyici, geri dönüş tipini otomatik 
olarak 'int' belirlese de, her zaman geri dönüş tipini belirleyiniz. Ancak, 
'main()' fonksiyonunun geri dönüş tipi normal olarak ihmal edilebilir.

+ Parametre listesindeki tüm parameterelerin tipini, belirtilmeyenler 
derleyici tarafından otomatik olarak 'int' olarak belirlenecek olsa da, 
mutlaka belirtin.

+ Yanlış olmasa da, fonksiyona aktarılan argümanlarla bu argümanların yerine 
kullanılacak parametrelerin aynı isimde olmamasına özet gösteriniz. Bu, 
belirsizlikten kurtulmanızı sağlar.

+ Anlamlı fonksiyon isimleri ve anlamlı parametre isimleri kullanmak, 
programları daha okunaklı yapar ve yorumların çok fazla kullanılmamasını 
sağlar.

+ C' nin kontrol yeteneklerinden faydalanabilmek için tüm fonksiyonların 
prototiplerini programa dahil etmeliyiz. Uygun kütüphanelerdeki header/öncü 
dosyalardan, standart kütüphane fonksiyonlarının prototiplerini, veya kendi 
yazdığınız header dosyalardan kendi fonksiyonlarınızın prototiplerini elde 
etmek için '#include' önişlemci komutunu kullanın.

+ Parametre isimleri, belgeleme amaçlı olarak fonksiyon prototipleri içinde 
yazılabilir fakat derleyici, fonksiyon prototiplerinde yer alan parametre 
isimlerini ihmal eder.

+ Yalnızca belli bir fonksiyonda kullanılan değişlenler, o fonksiyon içinde 
yerel değişken olarak bildirilmelidir.

+ Dış faaliyet alanlarında, isimleri gizleyen değişken isimlerinden kaçının. 
Bu, bir programda aynı tanıtıcıyı bir kez daha kullanmayarak sağlanabilir.

### TAŞINABİLİRLİK İPUÇLARI

+ ANSI C standart kütüphanesi fonksiyonlarını kullanmak daha taşınır 
programlar yazmanızı sağlar.
 
+ '&&', '||', ',' ve '?:' operatörlerinin operandlarının değerlendirilme 
sırası ANSI standardına göre tam olarak bellidir. Bu operatörlerin dışındaki 
operatörlerin operandlarının değerlendirilme sırası ise ANSI standardına göre 
belirsizdir. Bu değerlendirme sırası belirsiz operatörlerin operandlarının 
değerlendirme sırasına bağımlı yazılan programlar hatalara sebep olur. Çünkü 
derleyiciler, operandları programcının beklediği şekilde değerlendirmeye 
almayabilir.

### PERFORMANS İPUÇLARI

+ 'auto'(otomatik depolama) hafızayı korumak için kullanılır. Çünkü 'auto' 
değişkenler yalnızca ihtiyaç olduklarında var olurlar. 'auto' değişkenler, 
bildirildikleri fonksiyon çalıştırıldığında oluşturulur, fonksiyonun 
çalışması sonlandığında yok edilirler.

+ 'register' depolama sınıfı belirteci, yalnızca 'auto' otomatik depolama 
sınıfı değişkenleri ile kullanılır. 'register' anahtar kelimesi, otomatik 
değişken bildiriminden önceye yerleştirilerek, bu değişkeni bilgisayarın 
yüksek hızlı donanım yazmaçlarından(register) birine yerleştirmesi 
derleyiciye önerilebilir.

+ Genellikle 'register' bildirimleri gereksizdir. Modern derleyicilerin pek 
çoğu, sıklıkla kullanılan değişkenleri tanıyıp, programcının 'register' 
bildirimi yapmasına gerek kalmadan, sık kullanılan bu değişkeni, yazmaçlardan
(register) birine koymaya karar verir.

+ Çağrıların üssel bir biçimde arttığı 'fibonacci serisi hesaplama' tarzında 
yinelemeli programlardan kaçınınız.

+ Performansın önemli olduğu durumlarda yinelemeden kaçınınız. Yineleme 
çağrıları fazladan hafıza ve vakit gerektirir.

+ Fonksiyonların yoğun bir biçimde kullanıldığı programlar, fonksiyonların 
yer almadığı tek parça programlarla karşılaştırıldığında, çok fazla 
fonksiyon çağrısı demek olur. Bu da bilgisayar işlemci zamanı alınması 
demektir. Ancak tek parça programlar yazmak, test etmek, hatalarını ayıklamak 
ve geliştirmek oldukça zordur.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ Tekerleği yeniden icad etmeye gerek yok. ANSI C standart kütüphanedeki 
fonksiyonlarla aynı işi yapan yeni fonksiyonlar yazmak yerine, kütüphane 
fonksiyonlarını kullanın. Böylece program geliştirme süreci hızlanır.

+ Birden fazla fonksiyon kullanan programlarda, 'main()' fonksiyonu, 
programın esas görevini yerine getiren fonksiyonların çağırıcısı olarak 
kullanılmalıdır.

+ Her fonksiyon, iyi olarak tanımlanmış tek bir işi yapacak şekilde 
sınırlandırmalıdır. Fonksiyon ismi, fonksiyonun görevini etkili bir biçimde 
açıklamalıdır. Bu, özetlemeyi ve yazılımın yeniden kullanılabilirliğini 
sağlatır.

+ Eğer yazdığınız fonksiyonun görevini açıklayacak etkili bir isim 
bulamıyorsanız, yazdığınız fonksiyon muhtemelen birden fazla görevi yerine 
getirmeye çalışıyordur. Böyle bir durumda yazdığınız fonksiyonu daha küçük ve 
tek bir işi yapan fonksiyonlara bölmek gerekir.

+ Bir fonksiyon, genellikle bir sayfadan daha uzun olmamalıdır. Hatta yarım 
sayfadan daha uzun olmamalıdır. Kısa fonksiyonlar, yazılımın yeniden 
kullanılabilirliğini artırır.

+ Programlar, yalnızca tek bir işi yapan küçük fonksiyonların bir araya 
getirilmesi ile yazılmalıdır. Bu sayede programlar daha kolay yazılır, 
kolay değiştirilir ve kolaylıkla hataları giderilir.

+ Çalışmak için çok fazla parametreye ihtiyaç duyan fonksiyonlar, birden 
fazla görevi yerine getiriyor olabilir. Böyle fonksiyonları, yalnızca tek bir 
işi yapan ayrı ayrı ve daha küçük fonksiyonlara bölmek gerekir. Fonksiyonun 
başlığı mümkünse bir satıra sığmaldır.

+ Fonksiyon prototipi; fonksiyon başlığı, fonksiyon çağrısı, 
argüman/parametre sayısı, tipi, sırası, geri dönüş değeri tipi bakımından 
uyumlu olmalıdır. 

+ Herhangi bir fonksiyonun dışına yerleştirilmiş fonksiyon prototipi, program 
boyunca fonksiyon prototipinin yazıldığı yerden itibaren fonksiyonun tüm 
çağrılarında geçerli olur. Eğer fonksiyon prototipi, bir fonksiyonun içinde 
yer alırsa sadece o fonksiyon içinden yapılan çağrılara uygulanır.

+ 'auto'(otomatik depolama), en az yetki prensibinin bir başka örneğidir. 
Değişkenler neden hafızada depolansın ve neden gerçekte ihtiyaç 
duyulmamalarına rağmen erişilebilsin? Bir programın makina dili versiyonunda 
veri, hesaplamalar ve diğer işlemler için genellikle yazmaçlara(register) 
yüklenir.

+ Bir değişkeni yerel değil global olarak bildirmek, bir değişkene erişmemesi 
gereken bir foksiyonun değişkeni yanlışlıkla değiştirmesi gibi istenmeyen yan 
etkilere sebep olabilir. Genelde, bazı belirli ve çok özel durumlar hariç
(14. bölümde bahsedilecek.) global değişkenlerin kullanımından kaçınılmalıdır.

+ Yinelemeli olarak çözülen her program, tekrarlı olarak da çözülebilir. 
Yineleme yaklaşımı, genelllikle problemi daha iyi yansıttığı, daha kolay 
anlaşılan ve hataları daha kolay ayıklanan programlar yazılmasını sağlattığı 
için, tekrarlı işlemlerle çözme yaklaşımı yerine tercih edilebilir. 
Yinelemeli çözümün seçimi başka bir sebebi de, tekrarlı çözümün kolaylıkla 
bulunamayışdır.

+ Programları, düzgün ve hiyerarşik bir düzende fonksiyonlardan oluşturmak 
iyi yazılım mühendisliğini destekler. Ancak bunun da bir bedeli vardır.

---

## 6. BÖLÜM (Diziler)

### TERİMLER

+ array initializer list: dizi ilklendirme/atama listesi
+ bar chart: çubuk/çizgi grafiği
+ bounds checking: sınır kontrolü
+ bubble sort: kabarcık sıralama
+ declare an array: bir dizi bildirimi
+ linear search: lineer/doğrusal arama
+ mean: orta
+ median: medyan
+ mode: mod
+ multiple-subscripted array: çok boyutlu/indisli dizi
+ null character: null karakteri('\0')
+ off-by-one error: bir eksik hatası
+ replacement text: yer değiştirme metni
+ scalar: skaler
+ search key: arama anahtarı
+ sorting: sıralama
+ string: dize, karakter seti, string
+ subscript: indis, alt simge, belirteç
  NOT: Bilişim sözlüğünde 'subscript: alt simge' demek. 
  Dizilerle kullanıldığında ise dizinini elemanını belirtmekte 
  kullanıldığından 'belirteç' tercümesi yapılmış. Şunlar da olabilir:
   
  indices/index: indis, indeks, işaret, gösterge, ibre, fihrist, belirteç

### ÖZET

+ C, değer listelerini dizilerde tutar. Bir dizi, aynı isme ve aynı tipe 
sahip olmaları sebebiyle, birbirleriyle ilişkili olan hafıza konumlarının 
bir grubudur. Bir dizinin içindeki bir elemanı(ya da konumu) belirtmek için 
o dizinin adını ve elemanın dizi içindeki konumunu belirtmeliyiz.

+ Bir belirteç(indis) ya bir tamsayı ya da bir bir tamsayı deyimi olmalıdır. 
Eğer program belirteç(indis) olarak deyim kullanıyorsa, deyim, belirtecin 
(indis) değerine karar vermek için hesaplanır. 

+ Dizi belirteçleri(indis) sıfır(0) dan başlar. Bu yüzden, 'Dizinin Yedinci 
Elemanı', 6 belirtecine(indis) sahiptir. 'Yedinci Dizi Elemanı' ise 7 
belirtecine(indis) sahiptir ve aslında dizinin sekizinci(8.) elemanıdır. Bu,
off-by-one(bir eksik) hatalarının sebebidir.(!?)

+ Diziler hafızada bir yer kaplarlar. Şöyle bildirilirler;

  int a[100]; /* 100 adet 'int' tipi elemana sahip a isimli dizi bildirimi. */
  char b[32]; /* 32 adet 'char' tipi elemana sahip b isimli dizi bildirimi. */

+ 'char' tipte bir dizi, karakter stringlerini depolamakta kullanılabilir.
  NOT: C' de 'string' diye bir tip yoktur. İleride anlatılır.

+ Dizi elemanlarına ilk değer atamanın üç(3) yolu vardır:
  - ilk bildirim esnasında
  - atama ile
  - standart girişten(kullanıcı, dosya) değer alarak

+ Eğer dizi için tanımlanmış eleman sayısından sayısından daha az sayıda 
atama yapılmışsa, C, kalan elemanların hepsine otomatik olarak sıfır(0) 
değerini atar.

+ C, bilgisayarın varolmayan herhangi bir dizi elemanını kullanmasını 
engelleyecek herhangi bir dizi sınır kontrolüne sahip değildir.

+ Bir karakter dizisi, bir 'string' kullanılarak ilk değere atanabilir.

+ C' de tüm stringler('char' dizileri) null karakteri('\0') ile sonlanır. 
null karakterinin karakter sabiti olarak gösterimi '\0' biçimindedir.

+ Karakter dizilerine, atama listesindeki bağımsız karakter sabitleriyle ilk 
değerler atanabilir.

+ Bir 'string', aslında karakterlerden oluşan bir 'char' disizi olduğundan, 
string içinde yer alan birbirinden bağımsız karakterlere, dizi indisi 
gösterimi ile erişebiliriz.

+ Bir 'char' dizisine, 'scanf()' fonksiyonu ve '%s' dönüşüm belirtecini 
kullanarak klavyeden okuyacağımız bir stringi alabiliriz.

+ Bir stringi temsil eden 'char' dizisini, 'printf()' fonksiyonu ve '%s' 
dönüşüm belirtecini kullanarak yazdırabiliriz.

+ Yerel dizi bildirimlerinde 'static' anahtar kelimesini kullanarak, dizinin, 
fonksiyon her çağrıldığında yeniden oluşturulup, fonksiyondan her 
çıkıldığında yok edilmesine engel olabiliriz.

+ 'static' olarak bildirilen diziler, derleme zamanında yalnızca bir kez 
otomatik olarak ilk değere atanır. Eğer 'static' bir dizi, programcı 
tarafından özellikle ilk değere atanmamışsa, dizinin elemanları derleyici 
tarafından sıfıra(0) atanacaktır.

+ Bir diziyi fonksiyona geçirebilmek için, fonksiyona dizinin ismi geçirilir. 
Bir dizinin tek bir elemanını fonksiyona geçirmek için, dizinin ismini ve 
elemanın dizi indisini(köşeli parantezler içine alınmış halde) fonksiyon 
çağrısında argüman olarak kullanmak gerekir.

+ C, dizileri, fonksiyonlara otomatik olarak referansa göre çağırma yöntemi 
ile geçirir; çağrılan fonksiyonlar, çağrıcının orijinal dizi elemanlarının 
değerini değiştirebilir. 

+ Dizinin ismi, gerçekte dizinin ilk elemanının adresidir! Dizinin başlangıç 
adresi geçirildiğinden, çağrılan fonksiyon dizinin nerede tutulduğunu kesin 
olarak bilir. 

+ '%p' dönüşüm belirteci, adresleri onaltılık sistemde(hexadecimal) yazdırmak 
için kullanılan özel bir belirteçtir.

+ C, 'const' tip belirteciyle, bir fonksiyon içinde dizi elemanlarının 
değiştirilmesini engeller. Bir dizi parametersinden önce 'const' kullanılırsa 
dizi elemanları fonksiyon gövdesi içinde sabit hale gelir ve fonksiyon 
gövdesi içinde 'const' belirtilmiş bir diziyi değiştirmeye çalışmak, derleme 
anında hataya yol açar.

+ Bir dizi, kabarcık sıralama(bubble sort) tekniği ile sıralanabilir ama bu 
teknik dizide pek çok tur yaptıracaktır. Her turda eleman çiftleri 
karşılaştırılır. Eğer bir çift, artan sırada ise(ya da değerleri eşitse), 
değerleri olduğu gibi bırakılır. Eğer çift azalan sırada ise, dizi içinde 
yerleri değerleri yer değiştirilir. Küçük diziler için kabarcık sıralama
uygun olabilir ancak büyük dizilerle kullanıldığında diğer sıralama 
algoritmalarına kıyasla yetersizdir.

+ Lineer arama(linear search), arama değerini dizinin her elemanı ile 
karşılıştırır. Dizi herhangi bir şekilde sıralanmadığından, aranan değer ilk 
ya da son elemanda bulunabilir. Bu sebepten program ortalama olarak, arama 
değeri ile dizi elemanlarının yarısı karşılaştırılmalıdır. Lineer arama, 
küçük ya da sıralanmamış dizilerde iyi çalışır.

+ İkili arama tekniği(binary search), her karşılaştırmadan sonra, sıralanmış 
bir dizideki elemanların yarısını elemektedir. Algoritma(özetle): 
  - Dizinin ortasındaki elemanı bul ve bu elemanın değerini arama değeriyle 
  karşılaştır.
  - Eğer ikisi eşite, aranan değer bulundu. Bu elemanın dizi indisi geri 
  döndür. 
  - Eğer aranan değer ortadaki değerden büyükse/küçükse, üstteki ilk iki 
  işlemi dizinin üst/alt yarısına uygula. Aradığın değeri bulana kadar bu 
  işlemleri tekrarla.

+ En kötü durumda ikili arama(binary search) 1024(2^10) elemanlı bir dizide 
arama yaparken en fazla 10 karşılaştırma yapacaktır. 1048576(2^20) elemanlı 
bir dizide arama değerini bulmak en fazla 20 karşılaştırma gerektirmektedir. 
Bir milyar eleman içeren bir dizide arama değerini bulmak için en fazla 30 
karşılaştırma yapmak gerekir.

+ Diziler, satır ve sütun olarak düzenlenmiş verileri temsil etmek için 
kullanılabilirler. Bir tablo elemanını belirleyebilmek için iki indis 
kullanılır. İlk indis genellikle satır değerini, ikinci indis genellikle 
sütun değerini belirler. Belirli bir elemanı tanımlayabilmek için iki 
belirteç kullanan tablolar ya da diziler, iki boyutlu diziler olarak 
adlandırılır.

+ C standardı, bir sistemin en az on iki(12) dizi belirtecini desteklemesi 
gerektiğini belirtmektedir.

+ Çok boyutlu bir diziye, bildirim esnasında, atama listeleri kullanılarak 
ilk değer ataması yapılabilir.

+ Tek indisli bir dizi, fonksiyon argümanı olarak kullanıldığında, 
fonksiyonun parametre listesindeki dizinin parantezlerinin([]) içi boş olarak 
kullanılır. Çok boyutlu dizilerde, ilk indise gerek yoktur ancak sonraki 
tüm indisler belirtilmelidir. Derleyici bu belirteçleri, çok boyutlu dizi 
elemanlarının hafıza konumlarını belirlemek için kullanılır.

+ Tek indisli bir dizi alan fonksiyona, iki boyutlu bir dizinin bir sırası 
geçirilecekse, fonksiyona dizinin ismi ve ilk indis geçirilmelidir.

### GENEL PROGRAMLAMA HATALARI

+ Dizi belirteçleri(indis) sıfır(0) dan başlar. Bu yüzden, 'Dizinin Yedinci 
Elemanı', 6 belirtecine(indis) sahiptir. 'Yedinci Dizi Elemanı' ise 7 
belirtecine(indis) sahiptir ve aslında dizinin sekizinci(8.) elemanıdır. Bu,
off-by-one(bir eksik) hatalarının sebebidir.(!?)

+ Elemanlarına ilk değer verilmesi gereken bir dizinin elemanlarına ilk değer 
vermeyi unutmak hatadır.

+ Diziye ilk değer atama sırasında, dizi eleman sayısından daha fazla sayıda 
atama değeri kullanmak bir yazım hatasıdır.

+ '#define' ve '#include' ifadelerini noktalı virgül(;) ile sonlandırmak 
hatadır. Önişlemci komutlarının C ifadeleri olmadığını hatırlayınız.

+ Sembolik bir sabite, çalıştırılabilir bir ifade içinde değer atamak 
hatadır. Sembolik sabit değişken değildir. Derleyici tarafından, çalışma 
zamanında değerleri tutan değişkenlere yapıldığı gibi, sembolik sabitlere 
hafızada yer ayrılmaz.

+ Dizi sınırları dışındaki bir elemanı kullanmak hatadır.

+ 'scanf()' fonksiyonu ile klavyeden alınan stringi tutabilecek kadar geniş 
olmayan bir karakter dizisi kullanmak, veri kaybına ya da çalışma zamanlı 
diğer hatalara sebep olabilir.

+ 'static' olarak bildirilmiş bir dizinin elemanlarının, içinde bildirildiği 
fonksiyonun her çağrılışında sıfıra(0) atandığını düşünmek hatadır. 'static' 
olarak bildirilen diziler, derleme zamanında yalnızca bir kez otomatik olarak 
ilk değere atanır. Eğer 'static' bir dizi, programcı tarafından özellikle ilk 
değere atanmamışsa, dizinin elemanları derleyici tarafından sıfıra(0) 
atanacaktır.

+ İki boyutlu bir diziyi 'a[x][y]' yerine 'a[x,y]' biçiminde belirtmek 
hatadır.

### PERFORMANS İPUÇLARI

+ Kimi zaman performans ipuçları, açıklık hususlarından daha önemlidir.

+ Dizi sınırlarının dışındaki elemanların kullanımı ciddi hatalara sebep 
olur. Sistemden sisteme farklılık gösterirler.

+ Faaliyet alanına sıklıkla girip çıkan ve otomatik diziler içeren 
fonksiyonlarda, diziyi 'static' yapan yaparak, fonksiyonun her çağrılışında 
dizinin yeniden oluşturulmasını engelleyin.

+ Dizileri referansa göre çağırma performans açısından oldukça iyi ve 
mantıklıdır. Eğer diziler, değere göre çağrılarak geçirilmiş olsaydı, her 
elemanın bir kopyası geçirilecekti. Büyük ve sıklıkla kullanılan dizilerde, 
değere göre geçirme oldukça fazla vakit alacaktı ve fazladan hafızaya ihtiyaç 
duyacaktı.

+ Genellikle en basit algoritmalar, en zayıf algoritmalardır. 
  Basit algoritmaların özellikleri şunlardır:
  - kolay yazılırlar
  - kolay test edilirler
  - hataları kolay ayıklanır

Daha karışık algoritmalara, maksimum performansa erişmek amacıyla ihtiyaç 
duyulur.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ Her dizinin boyutunu sembolik sabitlerle belirlemek, programı daha 
ölçülendirilebilir yapar.

+ 10. bölümde açıklanacak basit bir numara ile, dizileri değere göre geçirmek 
mümkün olabilir.

+ 'const' tip belirteci, fonksiyon tanımında parametrelere uygulanarak, 
orijinal dizinin fonksiyon gövdesinde değiştirilmesi engellenebilir. Bu, en 
az yetki prensibinin başka bir örneğidir. Fonksiyonlara, gerçekten 
gerekmedikçe diziyi değiştirme yeteneği verilmemelidir.

---

## 7. BÖLÜM (Pointers(Göstericiler))

### TERİMLER

+ address operator: adres operatörü(&)
+ array of pointers: pointer(göstericilerin) dizisi
+ call by reference: referansa göre çağırma
+ call by value: değere göre çağırma
+ character pointer: karakter pointeri(göstericisi)
+ constant pointer: sabit pointeri(göstericisi)
+ dereference a pointer: pointerin işaret ettiği nesneye erişme
+ dynamic memory allocation: dinamik hafıza tahsisi
+ function pointer: fonksiyon pointeri
+ indirection: dolaylama
+ indirection operator: içerik operatörü(*)
+ linked list: bağlı liste
+ offset: ofset, kayma, çıkıntı, dengeleme, denkleştirme, dallanma
+ pointer: gösterici
+ pointer arithmetic: pointer aritmetiği
+ pointer expression: gösterici değeri
+ pointer to a function: bir fonksiyonu gösteren gösterici

### ÖZET

+ Pointer(göstericiler), değer olarak hafıza adreslerini içeren 
değişkenlerdir.

+ Pointerlar kullanılmadan önce bildirilmelidir.

+ 'int *ptr;' biçiminde bir bildirim, 'ptr' değişkenini, 'int' tipinde bir 
nesneyi gösteren gösterici olarak bildirir. Bu bildirim, 
'ptr bir int pointerdir.' şeklinde okunur. Bildirim içindeki '*', hemen 
ardından gelen değişken isminin pointer olduğunu belirtir.

+ Pointerlara ilk değer olarak şu üç değer atanabilir:
  - 0 ('0' atamak, 'NULL' atamakla eşdeğerdir.)
  - NULL
  - ya da bir adres

+ Bir pointera atanabilecek tek tamsayı sıfır(0)dır.

+ Adres operatörü(&), operandının adresini döndüren tekli bir operatördür.

+ Adres operatörünün(&) operandı, bir değer olmalıdır. Adres operatörü(&) 
sabitlere, deyimlere ya da 'register' depolama sınıfıyla bildirilmiş 
değişkenlere uygulanamaz.

+ İçerik operatörü(*), operandının(yani pointerın) gösterdiği nesnenin 
değerini döndürür. Bu şekilde bir '*' kullanımına, pointerın gösterdiği 
nesneye erişmek denir.

+ Argümanları değiştirilecek bir fonksiyon çağrılırken, argümanların 
adresleri geçirilir. Değişkenin adresi fonksiyona geçirildiğinde, içerik 
operatörü(*), fonksiyonla birlikte, çağrıcının hafızasında o konumda bulunan 
değeri değiştirmek için kullanılabilir.

+ Argüman olarak bir adres alan fonksiyonlar, adres alabilmek için bir 
pointer parametresi bildirmelidir.

+ Fonksiyon prototiplerinde, pointer isimlerinin bildirilmesine gerek yoktur. 
Dokümantasyon amaçlı yazılabilirler ama derleyici bu isimleri ihmal eder.

+ Derleyici, bir pointer alan fonksiyonla/fonksiyon prototipiyle, tek indisli 
bir dizi alan fonksiyon/fonksiyon prototipi arasında ayrım yapmaz. Derleyici 
fonksiyon parametrelerinde 'int array[]' biçiminde tek belirteçli bir dizi 
gördüğünde bu parametreyi 'int *array' biçimine dönüştürür. Bu iki biçim, 
birbiriyle değiştirilebilir.

+ 'const' belirteci C' nin ilk sürümlerinde yoktu; C' ye ANSI tarafından 
sonradan eklendi.

+ 'const' belirteci 'en az yetki prensibi' ni zorla uygulatmak için 
kullanılabilir. En az yetki prensibine uygun programlar tasarlamak, hata 
ayıklama zamanını ve istenmeyen etkilerin büyük bir kısmını yok eder ve 
programı daha basit geliştirilebilir hale getirir.

+ 'const', ANSI C' de açıkça belirtilmesine rağmen bazı C sistemleri bunu 
uygulayamaz.

+ 'const' belirteci ile programcı, derleyiciye, önüne yazıldığı değişkenin 
değerinin değiştirilmemesi gerektiğini bildirir.

+ Eğer 'const' olarak bildirilmiş bir değer değiştirilmeye çalışılırsa, 
derleyici bunu yakalar ve bilgisayara bağlı olarak hata ya da uyarı mesajı 
gösterir.

+ Bir pointerı, fonksiyona geçirmenin dört yolu vardır:
  - sabit olmayan bir pointerı, sabit olmayan bir veriyle
  - sabit bir pointerı, sabit olmayan bir veriyle
  - sabit olmayan bir pointerı, sabit bir veriyle
  - sabit bir pointerı, sabit bir veriyle

+ Diziler referansa göre çağırma ile otomatik olarak geçirilirler. Çünkü dizi 
isiminin değeri, dizinin başlangıç adresidir.

+ Bir dizinin tek bir elemanı, referansa göre çağırma ile geçirileceğinde, 
belirlenen dizi elemanının adresi geçirilir.

+ C, programın derlenmesi esnasında dizilerin(ya da diğer veri tiplerinin) 
büyüklüklerini 'byte' olarak belirleyen özel bir tekli operatör olan 'sizeof' 
operatörüne sahiptir.

+ 'sizeof' operatörü dizi isimlerine uygulandığında, dizideki byte sayısını 
tamsayı cinsinde geri döndürür.

+ 'sizeof' operatörü; değişken isimlerine, sabitlere ve herhangi bir veri 
tipine uygulanabilir. Dizi hariç herhangi bir değişken ismine ya da sabite 
uygulandığında, uygulanan tipin depolanabilmesi için gerekli byte sayısını 
döndürür. Tip ismi operand olarak kullanıldığında (örn. syzeof(char)), sizeof 
ile birlikte parantez kullanılması gerekir. Parantezler kullanılmazsa yazım 
hatasına neden olur. Dizi isimleri hariç  herhangi bir değişken ismine ya da 
sabite sizeof uygulandığında parantezlere gerek yoktur.

+ 'size_t' tipi, C standardı tarafından 'sizeof' operatörü ile döndürülen 
değerin 'unsigned' ya da 'unsigned long' tipinde gösterimi olarak 
tanımlanmıştır.

+ Pointerlarla yalnızca sınırlı sayıda işlem yapılabilir. Bunlar:
  - pointer artırılabilir(++)
  - pointer azaltılabilir(--)
  - bir tamsayı pointera(veya tam tersi) eklenebilir(+, +=)
  - bir tamsayı pointerdan(veya tam tersi) çıkarılabilir(-, -=)

+ Bir pointera bir tamsayı eklendiğinde/çıkarıldığında pointer o sayı kadar 
artmaz/azalmaz. Bunun yerine; pointerın gösterdiği nesnenin boyutuyla o 
tamsayı çarpılır, bulunan sonuç pointera eklenir/çıkarılır.

+ Pointer aritmetiği, dizilerle kullanılmadığında anlamsızdır. Aynı tipte iki 
eleman, bir dizide ard arda gelen elemanlar olmadıkları sürece, hafızada 
bitişik olarak tutulduklarını düşünemeyiz.

+ Pointer aritmetiği, karakter dizilerine uygulandığında, geleneksel 
aritmetikle sonuçlar birbirini tutacaktır cünkü her karakter bir 'byte' 
uzunluğundadır.

+ Bir pointer, eğer pointerlar aynı tipte ise, başka bir pointera atanabilir. 
Aksi takdirde, atamanın sağındaki pointerin tipi, atamanın solunda yer alan 
göstericinin tipine, dönüşüm operatörü kullanılarak çevrilmelidir. Bu kural 
için tek istisna, 'void' gösteren pointerlardır(void *). Bu pointer tipi, 
herhangi bir pointer tipini temsil edebilen genel pointerlardir. Bütün 
pointerlar 'void' pointera atanabilir, 'void' pointer da her pointera 
atanabilir. Bu her iki durumda da dönüşüm operatörüne gerek yoktur.

+ 'void' tipte pointerın gösterdiği nesneye erişilemez.

+ Pointerlar, eşitlik operatörleri ve koşullu operatörler kullanılarak 
karşılaştırılabilirler. Ancak böyle bir karşılaştırma, pointerlar aynı 
dizinin elemanlarını göstermiyorsa anlamsızdır.

+ Pointerlar, dizi isimlerinde olduğu gibi indislerle kullanılabilir.

+ Dizi ismi, dizinin ilk elemanını gösteren bir pointerdır.

+ Pointer/offset yönteminde offset, dizi indisi ile eşdeğerdir.

+ İndisli tüm dizi deyimleri, bir pointer ve dizi ismini pointer olarak 
kullanan bir offset ya da diziyi gösteren başka bir pointer yardımıyla 
yazılabilir.

+ Bir dizi ismi, hafızada her zaman aynı konumu gösteren bir pointerdır. 
Dizi isimleri, pointerlarda olduğu gibi değiştirilemez.

+ Pointer dizileri oluşturmak mümkündür veya diziler pointer içerebilir. Bu 
tipte veri yapılarının genel kullanımı, stringlerden oluşan bir dizi 
oluşturmaktır. Dizideki her girdi bir stringdir ama C' de string, gerçekte 
aynı stringin ilk karakterini gösteren bir pointerdır(char dizisi 
belirtecidir/ismidir).

  örnek:
  const char *deste[4] = {"kupa", "karo", "sinek", "maça"};

Örnekteki 4 değerin her biri(kupa, karo, sinek, maça), hafızada null('\0') 
karakteri ile sonlandırılmış stringler(karakter dizileri) olarak tutulurlar. 
Yani aslında "kupa" pointerinin gösterdiği char dizisinin sonuncusu('\0') 
gizli olan 5 elemanı vardır.

deste[0] = kupa(pointer) = {'k', 'u', 'p', 'a', '\0'};
deste[1] = karo(pointer) = {'k', 'a', 'r', 'o', '\0'};
deste[2] = sinek(pointer) = {'s', 'i', 'n', 'e', 'k', '\0'};
deste[3] = maça(pointer) = {'m', 'a', 'ç', 'a', '\0'};

+ Belirsiz Erteleme: Doğal bir biçimde ortaya çıkan algoritmalar, belirsiz 
erteleme denen ve daha önce belirlenemeyen performans sorunları içerebilir. 
Belirsiz erteleme, bir süreci diğer süreçlerin lehine olacak şekilde sürekli 
erteleme sorunudur. Genellikle kötü bir zamanlama algoritması neden olur. Bir 
tür yaşlandırma tekniği geliştirmek çözüm olabilir.

+ Dizi isminin, dizinin ilk elemanının hafızadaki adresi olması gibi 
fonksiyon ismi de, fonksiyon gövdesinde işi yapan kodların hafızadaki 
başlangıç adresidir.

+ Fonksiyonları gösteren pointerlar kullanılabilir.

+ Fonksiyon gösteren pointer, fonksiyonun kullandığı kodların bulunduğu 
hafıza adresidir.

+ Fonksiyonları gösteren pointerlar fonksiyonlara geçirilebilir, 
fonksiyonlardan geri döndürülebilir, dizilerde saklanabilir ve başka 
pointerlara atanabilir.

+ Fonksiyon pointerlarının en yaygın kullanımı menü içeren programlardır. 
Her seçim farklı fonksiyonu çalıştırır. Pointerlar, fonksiyon pointerları 
dizisinde tutulur. Kullanıcının seçimi pointer dizisinin indisi/belirteci 
olur ve seçilen pointer hangi fonksiyona bağlıysa onu çağırır.

### GENEL PROGRAMLAMA HATALARI

+ İçerik operatörü(indirection operator: *), bildirimde bütün değişken 
isimlerine dağıtılmaz. Her pointer isimden önce '*' kulanılarak 
bildirilmelidir.

+ Uygun bir biçimde ilk değere atanmamış ya da belli bir hafıza konumunu 
göstermek için atanmamış pointerların gösterdiği nesnelere erişmeye çalışmak 
hatadır. Bu, çalışma zamanlı ölümcül hatalara ya da önemli bir veriyi 
yanlışlıkla değiştirerek programın yanlış sonuçlar üretmesine sebep olur.

+ Pointerın gösterdiği değeri elde etmek gerektiğinde pointerın gösterdiği 
nesneye erişememek hatadır.

+ Bir fonksiyonun, referansa göre çağrılar yapıldığında, argüman olarak 
pointer beklediğinden ve değere göre çağrılar yapıldığında, argümanların 
geçirildiğinden habersiz olmak hatadır. Bazı derleyiciler değer alırken, 
değere pointer gibi davranırlar ve değerlere pointerlarda olduğu gibi 
erişirler. Çalışma esnasında genellikle hafıza erişimi sorunları ve segment 
hataları oluşur. Diğer derleyiciler, argüman ve parametreler arasındaki tip 
farklılıklarını yakalar ve hata mesajları üretirler.

+ Dizi değerleri haricindeki değerlere pointer aritmetiği uygulamak hatadır.

+ Aynı diziyi göstermeyen iki pointerı çıkartmak ya da karşılaştırmak hatadır.

+ Pointer aritmetiği kullanırken dizi sınırlarını aşmak hatadır.

+ İkisinden biri 'void *' tipte olmadıkça, farklı tipteki pointerları 
birbirine atamak yazım hatasıdır.

+ 'void *' pointerların gösterdiği nesnelere erişmeye çalışmak hatadır.

+ Bir dizi ismini, pointer aritmetiği kullanarak değiştirmeye çalışmak yazım 
hatasıdır.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Pointer değişkenlerinin isimlerinde 'ptr' harflerini kullanarak, 
bu değişkenlerin pointer olduklarını ve dikkatlice ele alınmaları gerektiğini 
daha belirgin hale getirmek iyidir.

+ Beklenmeyen sonuçlarla karşılaşmamak için pointerlara ilk değer atamak 
iyidir.

+ Bir fonksiyona argüman geçirirken, eğer çağırıcı özel olarak çağırdığı 
fonksiyonun kendi ortamındaki bir argüman değişkeninin değerini 
değiştirmesine gerek duymuyorsa, değere göre çağırmayı kullanınız. Bu, en az 
yetki prensibinin başka bi örneğidir.

+ Bir fonksiyonu kullanmadan önce, fonksiyonun kendisine geçirilen değerleri 
değiştirip değiştirmediğini anlamak için fonksiyon prototipini kontrol edin.

+ Dizileri ele alırken, pointerlar yerine dizi belirteçleri kullanın. Bu, 
derleme zamanını biraz artırsa da bu sayede muhtemelen daha açık programlar 
yazmanızı sağlatır.

### PERFORMANS İPUÇLARI

+ Yapılar(struct) gibi büyük verileri, sabit bir veriyi gösteren pointerlarla 
geçirerek referansa göre çağırmanın performansını ve değere göre çağırmanın 
güvenliğini kullanın.

+ Bir dizinin tamamını/boyutunu fonksiyona geçirmek zaman alır ve boyutun bir 
kopyası oluşturulacağı için fazladan hafızaya ihtiyaç duyar. Ancak global 
değişkenlere, her fonksiyon tarafından doğrudan ulaşılabildiğinden fazladan 
zaman ve hafızaya ihtiyaç duymazlar.

+ Dizi indis gösterimi, derleme esnasında pointerlarla ifade edildiğinden, 
dizi indisi kullanan deyimleri göstericilerle yazmak derleme zamanını 
azaltabilir.

+ Doğal biçimde ortaya çıkan algoritmalar, belirsiz erteleme gibi önceden 
belirlenemeyen performans sorunları içerebilir. Belirsiz ertelemeden kaçınan 
algoritmalar arayın.

### TAŞINABİLİRLİK İPUÇLARI

+ 'const' ANSI C' de açıkça belirtilmesine rağmen bazı C sistemleri bunu 
uygulayamaz.

+ Bir veri tipini depolamak için gerekli 'byte' sayısı, sistemden sisteme 
farklılık gösterebilir. Veri tiplerinin büyüklüğüne bağlı programlar yazarken 
ve bu programlar farklı sistemlerde çalışacaksa, veri tiplerini depolamak 
için gereken 'byte' sayısına, 'sizeof' kullanarak karar verin.

+ Bilgisayarlar, tamsayıları farklı 'byte' uzunluklarında(2, 4, 8) tutarlar. 
Pointer aritmetiği, pointerın gösterdiği nesnelerin boyutuna bağlı 
olduğundan, pointer aritmetiği makine bağımlıdır.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ 'const' belirteci, en az yetki prensibini zorla uygulatmak için 
kullanılabilir. En az yetki prensibini, uygun yazılımlar tasarlamak için 
kullanmak, hata ayıklama zamanını ve istenmeyen yan etkileri çok büyük oranda 
azaltır ve programı daha kolay geliştirilebilir hale getirir.

+ Eğer bir değer, geçirildiği fonksiyonun içinde değişmiyorsa ya da 
değişmemeliyse, bu değer 'const' olarak bildirilerek hata ile değiştirilmesi 
garanti altına alınmalıdır.

+ Değere göre çağırma kullanıldığında, çağrılan fonksiyon içinde yalnızca tek 
bir değer değiştirilebilir. Bu değer, fonksiyonun geri dönüş değerinden 
atanmalıdır. Çağrılan fonksiyon içinde birden çok değişkenin değerinin 
değiştirilmesi için mutlaka referansa göre çağırma kullanılmalıdır.

+ Fonksiyon prototiplerini diğer fonksiyon tanımlamaları içine yerleştirmek, 
uygun fonksiyon çağrılarının yalnızca fonksiyon prototiplerinin yer aldığı 
fonksiyonlar tarafından yapılabilmesine sebep olarak, en az yetki prensibini 
zorlar.

+ Bir diziyi fonksiyona geçirirken, dizinin boyutunu da geçirin. Bu, 
fonksiyonu daha genel bir hale getirir. Genel fonksiyonlar, çoğu programda 
sıklıkla yeniden kullanılır.

+ Global değişkenler, en az yetki prensibine uymazlar ve zayıf yazılım 
mühendisliğinin bir örneğidirler.

---


## 8. BÖLÜM (Karakter ve Stringler)

### TERİMLER

+ character constant: karakter sabiti
+ character set: karakter kümesi
+ general utilities library: genel amaçlı kütüphane
+ literal: ifade, hazır bilgi. (örn: string literal)
+ string: string/dize
+ token: jeton
+ whitespace characters: boşluk karakterleri, basılamayan karakterler
+ word processing: kelime işleme

### ÖZET

+ islower(): Küçük harf mi? (a-z)
+ isupper(): Büyük harf mi? (A-Z)
+ isdigit(): Rakam mı? (0-9)
+ isalpha(): Büyük ya da küçük harf mi? (A-Z, a-z)
+ isalnum(): Büyük ya da küçük harf mi, ya da rakam mı? (A-Z, a-z, 0-9)
+ isxdigit(): Hexadecimal rakam mı? (A-F, a-f, 0-9)
+ tolower(): Büyük harfi küçük harfe çevirir.
+ toupper(): Küçük harfi büyük harfe çevirir.
+ isspace(): Basılamayan karakter(' ','\f','\n','r','\t','\v') mi?
+ iscntrl(): Kontrol karakteri(0x00 (NUL), 0x1f (Unit Seperator), 0x7f (DEL)) 
mi?

+ ispunct(): Noktalama işareti mi? (Alfa-nümerik olmayan ama basılabilen 
karakterler: ! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~

+ isprint(): Kontrol karakteri değil ama basılabilir bir karakter mi? Boşluk 
karakteri dahildir.

+ isgraph(): Kontrol karakterleri ve boşluk karakteri hariç basılabilen bir 
karakter mi? (isprint()' ten tek farkı boşluk karakteri.)

+ atof(): Ondalıklı bir sayıyı temsil eden bir stringi 'double' değere 
dönüştürür.

  double atof(const char *str);

+ atoi(): Tamsayıyı temsil eden bir stringi 'integer' değere dönüştürür.

  int atoi(const char *str); /* str[5] = "12345"; */

+ atol(): Tamsayıyı temsil eden bir stringi 'long integer' değere dönüştürür. 

  long int atol(const char *str);

+ strtod(): Ondalıklı bir sayısı temsil eden stringi 'double' değere 
dönüştürür. Fonksiyon iki argüman alır: Bir string(char *) ve bu string' i 
gösteren bir pointer(char **). String, double' a dönüştürülecek karakterleri 
içerir. Pointer, string' in dönüştürülmüş kısmından sonraki ilk karakterin
adresine atanır.

  double strtod(const char *str, char **endptr);

+ strotol(): Bir tamsayıyı temsil eden string' i 'long integer' değere 
dönüştürür. Fonksiyon üç argüman alır: Bir string(char *), string' i gösteren 
bir pointer ve son olarak bir tamsayı(taban). String, 'long integer' değere 
dönüştürülecek karakterleri içerir. Pointer, string' in dönüştürülmüş 
kısmından sonraki ilk karakterin adresine atanır. Tamsayı(taban), 
dönüştürülen değerin hangi tabanda olacağını belirtir.

  long int strtol(const char *str, char **endptr, int base);

+ strtoul(): 'unsigned long' değeri temsil eden bir string' i 'unsigned long' 
değere çevirir. Fonksiyon üç argüman alır: Bir string(char *), string' i 
gösteren bir pointer ve son olarak tamsayı(taban). String, 'unsigned long' 
değere dönüştürülecek karakterleri içerir. Pointer, string' in dönüştürülmüş 
kısmından sonraki ilk karakterin adresine atanır. Tamsayı(taban), 
dönüştürülen değerin hangi tabanda olacağını belirtir.

  unsigned long int strtoul(const char *str, char **endptr, int base);

+ gets(): Standart giriş biriminden(klavyeden) -yeni satır ya da dosya sonu 
belirteciyle karşılaşıncaya kadar- aldığı karakterleri argümanına (char []) 
okur. Okuma sona erdiğinde, dizinin sonuna null karakter('\0') eklenir.

+ putchar(): Argümanı olan karakteri yazdırır.

+ getchar(): Standart giriş biriminden(klavyeden) bir karakter alıp bu 
karakterin tamsayı(ASCII) değerini döndürür. Eğer dosya sonu belirteci(EOF) 
girilmişse, EOF döndürür.

+ puts(): Argüman olarak bir string(char *) alır ve string' i yazdırıp 
ardından yeni satıra geçer.

+ sprintf(): printf() ile aynı dönüşüm belirteçlerini kullanır ve char tipte 
bir diziye formatlı bir şekilde veri yazmak için kullanılır.

  #include <stdio.h>
  #include <math.h>

  int main () {
     char str[80];

     sprintf(str, "Value of Pi = %f", M_PI);
     puts(str);
       
     return(0);
  }
  
+ sscanf(): scanf() ile aynı dönüşüm belirteçlerini kullanırak bir diziden 
biçimlendirilmiş verileri okumak için kullanılır.

+ strcpy(): İkinci argümanını(string), ilk argümanı(string) içine kopyalar. 
Yeni kopya(ilk string), ikinci string ve sonda gizli null karakteri('\0') 
alabilecek uzunlukta olmalı.

+ strncpy(): strcpy() ile benzerdir. Farkı ise bu fonksiyonla kaç karakter 
kopyalayacağımıza karar verebiliriz. 'size_t' tipini kullanır. 'size_t', 
sizeof() operatörünün döndürdüğü değerin tipidir.

  char strncpy(char *dest, const char *src, size_t n);

+ strcat(): İkinci argümanı ilk argümana ekler. İkinci argümanın ilk 
karakteri ilk argğmanın sonlandırıcı null karakterinin('\0') yerine geçer. 
İlk argüman olan dizinin yeni diziyi alacak kadar yeterli uzunlukta olmasına 
dikkat etmesi gerekir.

+ strncat(): İkinci argümandan ilk argümana belirli sayıda karakter ekler. 
Sonlandırıcı null karakteri('\0') otomatik olarak eklenir. 'size_t' tipini 
kullanır.

+ strcmp(): İlk argümanının karakterlerini ikinci argümanının karakterleri 
ile tek tek karşılaştırır. String' ler eşitse 0, İlk string ikinciden küçükse 
negatif, ilk string ikinciden büyükse pozitif değer döndürür.

  int strcmp(const char *str1, const char *str2);

+ strncmp(): strcmp() ile benzerdir ama yalnızca belirli sayıda karakter 
karşılaştırılır. Eğer stringlerdeki karakter sayısı, belirlenen karakter 
sayısından küçükse, küçük string' deki null karakterle('\0') karşılaşıncaya 
kadar karşılaştırma yapar.
  
  int strncmp(const char *str1, const char *str2, size_t n);

+ strchr(): Bir karakterin, bir string içindeki ilk konumunu arar. Karakter 
bulunursa bulunduğu adres, bulunamazsa NULL döndürür.

  char strchr(const char *str, int c);

+ strcspn(): İlk argümanı olan stringin içinde ikinci argümanı olan stringin 
içindeki karakterlerden oluşmayan ilk kısmı bulur ve bu kısmın uzunluğunu 
döndürür. 'size_t' tipini kullanır.

+ strpbrk(): İkinci argümanında yer alan herhangi bir karakterin, ilk 
argümanda yer alan string' deki ilk konumunu arar. Eğer ikinci argümandaki 
herhangi bir karakter bulunursa pointer döndürür. Aksi takdirde NULL 
döndürür.
  
+ strrchr(): Karakterin string içindeki son konumunu bulur. Eğer bulunursa 
pointer, bulunmazsa NULL döndürür.

+ strspn(): İkinci argümanı olan string' i, ilk argümanı içinde bulur ve 
bu kısmın uzunluğunu döndürür. 'size_t' tipini kullanır.

+ strstr(): İkinci string argümanının, ilk string içinde bulunduğu ilk konumu 
arar. Bulursa pointer döndürür.

+ strtok(): İkinci string' i seperatör olarak kullanarak ilk string' i 
parçalara ayırır.

+ memcpy(): İkinci argümanına geçirilen string' i, ilk argümanının olduğu 
adrese kopyalar.

+ memmove(): memcpy() ile benzerdir ama ikinci string' deki karakterler önce 
geçici bir hafıza alanına, ardından ilk string adresine kopyalanır. 
memcpy() fonksiyonuna göre daha güvenlidir.

+ memcmp(): İlk argümanındaki belli sayıda karakteri, ikinci argümanıyla 
karşılaştırır.

+ memchr(): İkinci argümanının ilk argümanı içinde ilk görüldüğü yeri arar.
Bulursa pointer, bulamazsa NULL döndürür.

+ memset(): İkinci argümanını, ilk argümanıyla gösterilen nesnenin belli 
sayıdaki byte' ına kopyalar.

+ strerror(): Bir hata numarası arar ve hata mesajını gösteren bir pointer 
döndürür. Hata mesajı, sisteme veya derleyiciye göre strerror tarafından 
üretilir.

+ strlen(): Argüman olarak bir string alır ve karakter sayısını döndürür. 
Sonlandırma karakteri olan null karakteri('\0') bu sayıma dahil değildir.

### GENEL PROGRAMLAMA HATALARI

+ Bir karakter dizisinde, string' i sonlandıran null karakteri depolamak için 
yer ayırmamak.

+ Sonlandırıcı null karakterini içermeyen bir string' i yazdırmak.

+ Tek bir karakteri string olarak işlemek hatadır. Bir string, bir pointerdir 
ve muhtemelen oldukça büyük bir tam sayıdır. Bir karakter ise ASCII' ye göre 
(0-255) aralığında küçük bir tam sayıdır. Bir çok sistemde bu hataya yol açar 
çünkü düşük hafıza adresleri işletim sisteminin kesme işlemleri gibi özel 
amaçlar için ayrılmıştır. Bu yüzden hafızaya erişim kısıtlamalaarı 
yaşanabilir.

+ Argüman olarak string bekleyen fonksiyona, karakteri argüman olarak 
geçirmek veya karakter beklenirken string geçirmek hatadır.

+ strncpy()' nin 3. argümanı, ikinci argümanındaki string' in uzunluğundan 
küçükse ya da eşitse, ilk argümana null karakteri eklememek hatadır.

+ strcmp() ve strncmp() fonksiyonlarının, argümanları eşitken 1 döndüreceğini 
düşünmek hatadır. Her iki fonksiyon da eşitlik durumu için 0 değerini yani 
C' nin 'false' olarak algıladığı değeri döndürür. Bu sebepten, iki string' in 
eşitliğini test ederken, fonksiyonlardan dönen değerler 0' la 
karşılaştırmaya tabi tutulmamalı.

+ memmove() haricinde kopyalama yapan diğer string yönetme fonksiyonları, 
kopyalama işlemi aynı string' de yapıldığında tanımlanmamış sonuçlar verir.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Karakter stringlerini bir karakter dizisi içinde tutarken, dizinin 
depolanması muhtemel en büyük stringi tutabilecek kadar geniş olduğundan 
emin olun. C, her uzunluktaki stringlerin depolanmasına izin verir. Eğer bir 
string, depolanacağı karakter dizisinden daha uzunsa, string' den arta kalan 
karakterler, hafızada bir sonraki dizide yer alan karakterlerin üzerine 
yazılır.

+ Karakter kütüphanesi fonksiyonları için header dosyası 'ctype.h' dir.

+ Genel amaçlı kütüphane fonksyionları için header dosyası 'stdlib.h' dir.

+ Standant giriş/çıkış fonksiyonları için header dosyası 'stdio.h' dir.

+ String kütüphanesi fonksiyonları için header dosyası 'string.h' dir.

### TAŞINABİLİRLİK İPUÇLARI

+ 'char *' tipindeki bir değişkene string bilgisi atandığında, bazı 
derleyiciler, string' i hafızada string' in değiştirilemeyeceği bir konuma 
yerleştirir. Eğer string' i değiştirme işlemini tüm sistemlerde garantiye 
almak isterseniz, string' i karakter dizisine yerleştirin.

+ 'size_t' tipi, sisteme bağımlı olarak, 'unsigned long' ya da 'unsigned int' 
tipinin eş anlamlısıdır.

+ Karakterleri temsil eden nümerik kodlar(ASCII, unicode) her sistem için 
farklı olabilir.

+ 'strerror()' fonksiyonu tarafından oluşturulan hata mesajı sisteme 
bağımlıdır.

---

## 9. BÖLÜM (Biçimlendirilmiş Giriş/Çıkış)

### TERİMLER

+ alignment: hizalama
+ assignment suppression character: atama bastırma karakteri(*)
+ caret: şapka işareti(^)
+ conversion specification: dönüşüm tarifi
+ conversion specifier: dönüşüm belirteci
+ escape sequence: kaçış sekansı/çıkış sırası
+ field width: alan genişliği
+ flag: bayrak
+ format control string: biçim kontrol dizesi
+ literal characters: ifade karakterleri (string literal)
+ precision: duyarlık
+ rounding: yuvarlama
+ scan set: tarama kümesi
+ stream: akış

### ÖZET

+ Tüm giriş ve çıkış(I/O), akışlarla(streams) yani satırları oluşturmak için 
organize edilmiş karakter dizileri ile yapılır. Her satır 0 ya da daha fazla 
karakter içerir ve yeni satır('\n') karakteri ile sonlanır. C standardı, C 
uygulamalarının sonlandırıcı yeni satır karakteri dahil en az 254 karakterlik 
satırları desteklemesi gerektiğini belirtmiştir.

+ Program çalışmaya başladığında, programa otomatik olarak üç akış bağlanır. 
Normalde standart giriş akışı klavyeye, standart çıkış akışı monitöre 
bağlanır. Üçüncü akış, standart hata, monitöre bağlanır. Hata mesajları bu 
hata akışından çıkartılır.

+ İşletim sistemleri çoğunlukla i/o akışlarının farklı cihazlara 
yönlendirilmesine izin verir.

+ 'printf()' fonksiyonu(biçim kontrol dizesi), çıktı değerlerinin hangi 
biçimde görüneceğini tanımlar. Biçim kontrol dizesi: dönüşüm belirteçleri, 
bayraklar, alan genişlikleri, duyarlık ve bilgi karakterlerinden oluşur.

+ Veri tipi dönüşüm belirteçleri:
  
  Veri Tipi         | printf | scanf
  ----------------------------------
  char              | %c     | %c
  short             | %hd    | %hd
  int               | %d - %i| %d - %i
  unsigned int      | %u     | %u
  long int          | %ld    | %ld
  unsigned long int | %lu    | %lu
  float             | %f     | %f
  double            | %f (*) | %lf   => float 'prinft()' i ile aynı. (C89)
  long double       | %Lf    | %Lf

+ '%d' ile '%i' benzer olsalar da aralarında 'scanf()' ile kullanıldıklarında 
fark vardır. 'scanf()' ile kullanıldığında'%d'; onluk(decimal) tamsayı 
bekler, '%i' ise onluk(decimal), sekizlik(octal) ve onaltılık(hexadecimal) 
değer alabilir.

+ ANSI C format(%) belirticileri:

  %c char single character
  %d (%i) int signed integer
  %e (%E) float or double exponential format
  %f float or double signed decimal
  %g (%G) float or double use %f or %e as required
  %o int unsigned octal value
  %p pointer address stored in pointer
  %s array of char sequence of characters(strings)
  %u int unsigned decimal
  %x (%X) int unsigned hexadecimal value(x: a-z, X: A-Z, 0-9)

+ Tamsayı yazdırma:
  
  d: İşaretli (+ -) tamsayı(onluk) gösterir.
  i: İşaretli (+ -) tamsayı(onluk) gösterir. 'scanf()' kullanımı farklıdır!
  o: İşaretsiz(unsigned: x >= 0) tamsayıyı sekizlik(octal) gösterir.
  u: İşaretsiz(unsigned: x >= 0) tamsayıyı onluk sistemde gösterir.
  
  x(X): İşaretsiz(unsigned x >= 0) tamsayıyı onaltılık(hexadecimal) gösterir. 
        x; 0-9 ve a-z(küçük harf) ile, X; 0-9 ve A-Z(BÜYÜK HARF) ile gösterir.

  h: Herhangi bir tamsayı belirtecinden önce kullanıldığında 'short' aralıkta 
  bir tamsayının gösterileceğini belirtir.

  l: Herhangi bir tamsayı belirtecinden önce kullanıldığında 'long' aralıkta 
  bir tamsayının gösterileceğini belirtir.

  NOT: İşaretli(+ -) tamsayılar yazdırılırken yalnızca '-' işareti 
  yazdırılır, '+' yazdırılmaz. Ama yazdırmak istersek nasıl yapacağımızı 
  ileride anlatacağız.

  NOT: Negatif bir değeri unsigned belirteçle yazdırmak istersek negatife 
  inmez, sayı aralığının üst limitinden geriye doğru sayar. Yani '%u' ile 
  -455 yazdırmak istersek 65081 yazdırılır.

+ Ondalıklı sayı yazdırma:
  
  e(E): Ondalıklı değeri üssel(exponential) yazım biçiminde gösterir.
  F: Ondalıklı sayıları gösterir.
  g(G): Ondalıklı değerleri f ya da e(E) üssel biçiminde gösterir.
  L: Herhangi bir dönüşüm belirtecinden önce kullanıldığında, 'long double' 
  bir ondalıklı değerin yazdırılacağını belirtir.
   
+ '%e, %E, %f' dönüşüm belirteçleri ile yazdırılan değerler, aksi 
belirtilmedikçe noktadan sonra 6 basamak yazdırılırlar. '%f', noktanın 
solunda en az bir basamak yazdırır. '%e' ve '%E', 'e' ya da 'E' harfini 
yazdırır ve noktanın solunda(mı?) kesinlikle bir basamak yazdırır.

+ %g ya da %G, birbirini izleyen sıfırları yazdırmadan '%e(E)' ya da '%f' 
gibi yazdırır. Yani 1.234000 değeri, 1.234 yazdırırlır. Değerler üssel 
yazma biçimine çevrildiklerinde eğer değer üsleri '-4' ten küçükse ya da 
belirlenen duyarlığa('%g(G)' için aksi belrtilmedikçe 6 basamak) eşit ya da 
belirlenen duyarlıktan büyükse '%e(E)' ile yazdırılırlar. Diğer durumlarda 
ise '%f' belirteci ile yazdırılırlar. Ondalık noktasının yazdırılması için 
en az bir ondalık basamağa ihtiyaç vardır. Ayrıca duyarlık, noktanın 
solundaki rakamları da kapsar.

  '%g(G)' için örnekler:
  0.0000875 = 8.75e-05 (e kullanır çünkü üs -4' te küçük!)
  8750000.0 = 8.75e+06 (e kullanır çünkü 6(=+) duyarlığa eşit!)
  8.75      = 8.75
  87.50     = 87.5
  875       = 875

+ %n dönüşüm belirteci, o andaki 'printf()' ifadesi içinde yazdırılan 
karakter sayısını tutar. Argüman olarak, değerin tutulduğu tamsayı 
değişkenini gösteren bir pointer alır.

+ %% dönüşüm belirteci, % karakterini yazdırmak için kullanılır.

+ Eğer alan genişliği o an yazdırılacak olan veriden daha büyükse, veri alan 
içinde otomatik olarak sağa yaslanır.

+ Alan genişliği tüm dönüşüm belirteçleri ile kullanılabilir.

+ Tamsayı dönüşüm belirteçleri ile kullanıldığında duyarlık, yazdırılacak 
minimum basamak sayısını belirtir. Eğer yazdırılan değer, belirlenen 
duyarlıktan daha az basamağa sahipse, toplam basamak sayısı kesinliğe eşit 
kasinliğe eşit olana kadar yazdırılan değerin önüne sıfır eklenir.

+ 'e', 'E', ve 'f' gibi ondalıklı sayı dönüşüm belirteçleriyle 
kullanıldığında duyarlık, ondalık kısımda yazdırılacak basamak sayısıdır. 
'g' ve 'G' dönüşüm belirteçleri ile kullanıldığında duyarlık, yazdırılacak 
önemli basamakların maksimum sayısıdır.

+ 's' dönüşüm belirteci ile kullanıldığında duyarlık, string' den 
yazdırılacak karakter sayısıdır.

+ Alan genişliği ve duyarlık, yüzde işareti(%) ile dönüşüm belirteci arasına, 
alan genişliğinden sonra nokta(.), noktadan sonra da duyarlık belirtilerek 
birleştirilebilir.

+ Alan genişliği ve kesinliği, biçim kontrol dizesinden sonra gelen argüman 
listesi içinde tamsayı deyimleri olarak belirtilebilir. Bu özelliği 
kullanabilmek için, alan genişliği ya da duyarlığı yerine(ya da ikisi yerine 
de) yıldız karakteri(*) yerleştirilir. Argüman listesinde, eşleşen argümanlar 
hesaplanır ve yıldız karakteri yerine kullanılır. Bir alan genişliğinin 
değeri pozitif ya da negatif olabilir ancak duyarlık pozitif olmalıdır.

+ printf() bayrakları:
  
  -(eksi): Belirlenen alanda çıktıyı sola yaslar.
  +(artı): Pozitif değerlerden önce artı(+), negatif değerlerden önce eksi(-) 
           yazdırır.
  boşluk : artı(+) bayrağı ile yazdırılmamış pozitif bir değerden önce boşluk 
           yazdırır.
  #      : Sekizlik(octal) dönüşüm belirteci ile kullanıldığında, yazdırılan 
           değerin önüne 0(sıfır) ekler.

           x(X) onaltılık dönüşüm belirteci ile kullanıldığında, yazdırılan 
           değerin önüne 0x ya da 0X ekler.

           'e, E, f, g, G' ile yazdırılmış, ondalık kısım içermeyen ondalıklı 
           sayıların nokta içermesini sağlar(normalde nokta, eğer kendinden 
           sonra bir basamak varsa yazdırılır). g(G) dönüşüm belirteçleri 
           ile kullanımında ardarda gelen sıfırlar elenmez, durur.

  0      : Bir alanı önce sıfırlar gelecek şekilde doldurur.

  NOT: Bayraklar % işaretinin hemen sağına konur! Birden fazla bayrak, tek 
  bir dönüşüm belirteci içind ebirleştirilebilir!

+ '-' bayrağı, belirlenen alanda çıktıyı sola yaslar.

+ '+' bayrağı, pozitif değerden önce artı(+) ve negatif değerden önce eksi(-) 
işaretini yazdırır. Boşluk bayrağı, + bayrağı ile yazdırılmamış pozitif bir 
değerden önce boşluk yazdırır.

+ '#' bayrağı, sekizlik sistemde yazılmış değerlerin önüne 0 ekini, 
onaltılık sistemde yazdırılmış değerlerin önüne '0x' ya da '0X' ekini ekler. 
'e', 'E', 'f', 'g' ya da 'G' ile yazdırılmış, onaltılık kısım içermeyen 
ondalıklı sayıların nokta içermesini sağlar(normalde nokta eğer kendinden 
sonra bir basamak varsa yazdırılı).

+ '0'(sıfır) bayrağı bir alanı, önce sıfırlar gelecek biçimde 0 ile doldurur.

+ Kaçış Sekansları(Escape Sequences)

  \' : Tek tırnak karakteri(') yazdırır.
  \" : Çift tırnak karakteri(") yazdırır.
  \? : Soru işareti karakteri(?) yazdırır.
  \\ : Ters bölü işareti(\) yazdırır(backslash).
  \a : Duyulabilen bi zil ya da görülebilen bir alarm çalıştırır.
  \b : İmleci o anki konumundan bir geriye taşır(backspace).
  \f : İmleci bir sonraki sayfanın başına taşır(formfeed).
  \n : İmleci bir sonraki satırın başına taşır(newline).
  \r : İmleci o anki satırın başına taşır(carriage return).
  \t : İmleci bir sonraki yatay sekme(tab) konumuna taşır(horizontal tab).
  \v : İmleci bir sonraki düşey sekme(tab) konumuna taşır(vertical tab).
  
  \nnn : Sekizlik 'nnn' rakam(octal).
  \xhh : Onaltılık 'hh' takam(hexadecimal)(x(X) hex belirtir).

+ Giriş biçimlendirme, 'scanf()' fonksiyonu ile yapılır ve 'scanf()' şu 
özelliklere sahiptir:
  
  - Her tipte veriyi almak.
  - Bir giriş akışından belli karakterleri almak.
  - Giriş akışındaki belli karakterleri atlamak.

+ 'scanf()' için dönüşüm belirteçleri:

NOT: Aşağıda Tarama Kümesi alt başlığına kadar olan tüm belirteçler pointer 
argümanla çalışır.

Tamsayılar:

  d: Tercihe bağlı olarak onluk sistemde işaretli tamsayı okur(signed int). 
  
  i: Tercihe bağlı olarak onluk, sekizlik ya da onaltılık sistemde işaretli 
  tamsayı okur.

  o: Sekizlik sistemde işaretsiz tamsayı okur(unsigned octal).

  u: Onluk sistemde işaretsiz tamsayı okur(unsigned decimal).

  x(X): Onaltılık sistemde işaretsiz tamsayı okur(unsigned hexadecimal).

  h/l: Herhangi bir tamsayı dönüşüm belirtecinden önce yerleştirildiğinde, 
  short/long bir tamsayının girileceğini belirtir.
  
Ondalıklı sayılar:

  e, E, f, g, G: Ondalıklı tamsayı okur.

  l/L: Herhangi bir dönüşüm belirtecinden önce yerleştirildiğinde 
  double/long double bir değerin girileceğini belirtir.

Karakter ve Stringler:
  
  c: Bir karakter okur. Sonlandırıcı null karakteri('\0') eklenmez.

  s: Bir string okur(string + sonlandırıcı null karakteri('\0')).

Tarama Kümesi:

  [Arama Karakterleri]: Bir dizide depolanmış karakterleri string içinde arar.

Nadir Kullanılanlar:
  
  p: 'printf()' ifadesi ile %p kullanıldığında oluşturulan biçimle aynı 
  biçimdeki bir adresi okur.

  n: 'scanf()' ile o ana kadar alınan karakter sayısını depolar.

  %: Girilen verideki yüzde işaretini(%) atlar.

+ Bir karakter dizisi, tarama kümesi kullanılarak girilebilir. Bir tarama 
kümesi, köşeli parantezler( [] ) arasına yazılmış karakter kümesidir ve biçim 
kontrol dizesinde yüzde işaretinden(%) sonra yazılır. (örn: %[aeiou])

+ Tarama kümesi, girilen karakterler arasında tarama kümesi içinde 
belirtilenlerle eşleşenleri tarar. Herhangi bir anda karakter eşlemesi 
olduğunda, eşleşen karakter, bir dizi içinde depolanır. Tarama kümesi, 
karakter almayı tarama kümesi içinde yer almayan ilk karakterle 
karşılaştığında durdurur. Eğer giriş akışındaki ilk karakter tarama kümkesi 
karakterleri ile eşleşmezse, dizide yalnızca null karakter '\0' depolanır.

+ Ters bir tarama kümesi oluşturmak için, kare parantezler içinde arama 
karakterlerinden önce şapka(^) karakterini yerleştirmek gerekir. Bu, tarama 
kümesi içinde bulunan bir karakterle karşılaşıncaya kadar, karakter kümesi 
içinde yer almayan karakterlerin depolanmasını sağlar.

+ Alan genişliği bir 'scanf()' dönüşüm belirteci içinde kullanılarak, giriş 
akışından belli sayıda karakterin okunması sağlanabilir.
  
  Örn: 'scanf("%2d", &x);'
       /* kaç rakam girilirse girilsin ilk iki rakamı alır. */

+ Adres değerleri 'p' dönüşüm belirteciyle girilir. Sistem bağımlıdır. Zira 
bazı sistemler onluk, bazı sistemler onaltılık olur.

+ 'n' dönüşüm belirteci, 'scanf()' fonksiyonu ile o ana kadar alınan 
karakter sayısını depolar. İlgili argüman 'int' gösteren bir pointer'dir.

+ %% dönüşüm belirteci, girişten tek bir % karakteri alır.

+ Atama bastırma karakterii(*), girişten veri okur ve veriyi ihmal eder.

  Örn: 'scanf("%d%*c%d%*c%d", &ay, &gun, &yil);'
       /* '%d' arasındaki '%*c' ifadesi, tarih 28-11-2018 veya 28/11/2018 
          formunda da girilse aradaki '-' veya '/' simgelerini 
          bastıracaktır. */

### GENEL PROGRAMLAMA HATALARI

+ Biçim kontrol dizesini tırnak içine almayı unutmak.

+ Negatif bir değeri, 'unsigned' bir değer bekleyen bir dönüşüm belirteciyle 
yazdırmaya çalışmak.

+ Bir string' i yazdırmak için '%c' kullanmak. '%c' dönüşüm belirteci bir 
'char' argüman bekler. Bir string, 'char' gösteren bir pointerdir(char *).

+ 'char' bir argümanı yazdırmak için '%s' kullanmak. '%s' dönüşüm belirteci, 
argüman olarak 'char' gösteren tipte bir pointer bekler.

+ Karakter stringlerini tek tırnak içine yazmak bir yazım hatasıdır. Karakter 
stringleri çift tırnak içine yazılmalıdır.

+ Bir karakter sabitini(char) çift tırnak içine almak hatadır. Bu gerçekte, 
ikincisi sonlandırıcı null karakteri('\0') olan iki karakterlik bir string 
oluşturur. Bir karakter sabiti, tek tırnak içine yazılmış tek bir karakterdir.

+ Yüzde(%) karakterini, biçim kontrol dizesi içinde %% yerine yalnızca % 
ile yazdırmaya çalışmak hatadır. Biçim kontrol dizesi içinde % görüldüğünde, 
hemen ardından mutlaka bir dönüşüm belirteci kullanılmalıdır.

+ Yazdırılacak sayı için yeterince geniş bir alan sağlamamak hatadır. Bu, 
yazdırılan diğer değerleri bastırılabilir ve şaşırtıcı sonuçlar üretebilir. 
Kullandığınız veriyi iyi bilin!

+ 'printf()' fonksiyonu içinde tek tırnak, çift tırnak, soru işareti ya da 
ters bölü('\': escape sequence) karakterlerini, o karakterleri ters bölü('\') 
ile birlikte uygun bir 'escape sequence' oluşturacak şekilde kullanmadan 
yazdırmaya çalışmak.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Çıktıları gösterim için düzgün bir şekilde yazın. Bu, programı daha 
okunabilir yapar ve kullanıcı hatalarını azaltır.

+ Veri yazdırırken, kullanıcının, biçimlendirmye bağlı olarak verinin 
duyarlığının değişebileceğinden(duyarlık belirtme sebebiyle oluşan 
yuvarlamalar gibi) haberdar olduğundan emin olun.

+ Veri girerken, kullanıcıyı tek bir veri parçası ya da az sayıda veri 
parçasını girmesi için teşvik edin. Kullanıcının bir anda birden çok veri 
parçası girebileceği durumlardan kaçının(scanf()).

### TAŞINABİLİRLİK İPUÇLARI

+ 'p' dönüşüm belirteci, bir adresi uygulamaya bağımlı bir şekilde yazdırır. 
Bazı sistemlerde, onluk sistem yerine onaltılık sistem kullanılır.

---

## 10. BÖLÜM (Yapılar, Birlikler, Bit İşleme ve Sayma Sabitleri(Enumerations))

### TERİMLER

+ bit field: bit alanı
+ bitwise operators: bit operatörleri
+ complementing: tümleyenini almak
+ derived type: türetilmiş tip
+ enumeration: sayma sabiti
+ mask: maske
+ structure tag: yapı etiketi
+ tag name: etiket ismi

### ÖZET

+ Yapılar(structures), birbiriyle ilişkili değişkenlerin bir isim altında 
toplanmasıdır.

+ Yapılar değişik veri tiplerinde değişkenler içerebilir.

+ Yapılar dosya içinde tutulacak kayıtları oluşturmakta kullanılırlar. 
Pointerlar ve yapılar, bağlı listeler, yığınlar, sıralar ve ağaçlar gibi daha 
karmaşık veri yapılarının oluşturulmasını kolaylaştırırlar.
 
+ struct kart
  {
      char *taraf;
      char *takim;
  };

  - 'struct' anahtar kelimesi yapı tanımını başlatır.
  
  - 'kart' tanıtıcısı yapı etiketidir(structure tag). Yapı etiketleri, yapı 
  tanımına izin verir ve 'struct' anahtar kelimesi kullanılarak yapı tipinde 
  değişkenler bildirir. Bu örnetkte yapı tipi, 'struct kart' tır.
  
  - Yapı tanımında parantezler içinde bildirilen değişkenler yapı 
  elemanlarıdır. Aynı yapının elemanları, kendilerine özel isimlere sahip 
  olmalıdır ancak iki farklı yapı aynı isimde elemanlar içerebilir. Bu, 
  herhangi bir karışıklığa yol açmaz(ileride bunun sebebini göreceğiz).
  
  - Her yapı tanımı noktalı virgülle(;) sonlanmalıdır.

+ Aynı yapının elemanları, kendilerine özel isimlere sahip olmalıdır.

+ Yapı elemanları, temel veri tipleri değişkenleri(int, float.. vs.) ya da 
dizi ve diğer yapılar gibi toplulukların değişkenleri olabilir. Her dizi 
elemanı aynı tipte olmalıdır ama yapı elemanları farklı tiplerde olabilir.

+ Bir yapı, kendisinin örneğini/kopyasını içeremez.

+ İçinde bulunduğu yapıyı gösteren pointerlar, yapı elemanı olabilir. Böyle 
yapılara, kendine dönüşlü(self referential) yapılar deniz. Kendine dönüşlü 
yapılar 12. bölümde çeşitli bağlı veri yapıları oluşturmada kullanılacaktır.

+ Bir yapı tanımlaması, değişkenler bildirmek için kullanılacak yeni bir veri 
tipi oluşturur.

+ Yapı değişkenleri bildirmenin iki yöntemi vardır.
  
  1. Diğer veri tiplerindeki değişkenlerin bildiriminde yapıldığı gibi, 
  değişkenleri 'struct etiket_ismi' tipini kullanarak bildirmek.
  
  2. Değişkenleri yapı tanımının en son parantezi ile yapı tanımını 
  sonlandıran noktalı virgül arasına yerleştirmek.

+ 'struct kart a, deste[52], *kPtr;' ifadesi: 'struct kart' tipinde bir 'a' 
değişkeni, 'struct kart' tipinde 52 elemana sahip bir deste dizisi ve 
'struct kart' ı gösteren bir pointer değişkeni bildirir.

+ 'struct kart a, deste[52], *kPtr;' ifadesi şöyle de bildidilebilir:

  struct kart
  {
      char *taraf;
      char *takim;
  }a, deste[52], *kPtr;

+ Bir yapıda etiket ismi kullanmak tercihe bağlıdır. Eğer yapı, etiket ismi 
kullanılmadan tanımlanırsa, türetilmiş veri tipindeki değişkenler yapı tanımı 
içinde bildirilmelidir ve yeni yapı tipinde ayrı bir bildirim ile başka 
değişkenler bildirilemez.

+ Yapılarla kullanılabilen geçerli işlemler:
  
  - Yapı değişkenlerini aynı tipte yapı değişkenlerine atamak
  - Bir yapı değişkeninin adresini(&) almak
  - Yapı değişkenlerine erişmek
  - Yapı değişkeninin boyutuun belirlemek için 'sizeof' operatörünü kullanmak

+ Yapılar '==' ve '!=' operatörleri ile karşılaştırılamazlar çünkü yapı 
elemanları hafızada ardışık byte' lar içinde bulunmak zorunda değildir. 
Bazen yapılar içinde boşluklar bulunabilir çünkü bilgisayarlar belli veri 
tiplerini özel sınırlar içinde depolarlar. Bu sınırlar, verileri bilgisayarda 
tutmak için kullanılan standart hafıza birimleri olarak düşünülebilir. 
Bu standart birim 1 byte(halfword), 2 byte(word) ya da 4 byte(double word) 
uzunluğunda olabilir.

+ Yapıya değer atamak için, yapı değişkeninin adından sonra eşittir(=) 
işareti ve küme parantezleri({}) içinde virgüllerle ayrılmış atama değerleri 
kullanılır. Eğer atama listesinde yapı elemanlarından daha az sayıda atama 
değeri varsa, kalan elemanlar otomatik olarak 0' a(ya da eleman pointer ise 
NULL' a) atanır. Yapı değişkenleri, fonksiyon tanımı dışında bildirilirse ve 
dışarıda yapılan bu bildirimde özel olarak değerlere atanmazsa, ilk değer 
olarak 0' a ya da NULL' a atanırlar.

+ Yapıların tümü, aynı tipteki yapı değişkenlerine atanabilir.

+ Bir yapı değişkeni, aynı tipteki yapı değişkenine atandığı atama 
ifadelerinde ilk değerlere atanabilir.

+ Yapı elemanlarına ulaşmak için 2 operatör kullanılır:
  
  - Yapı elemanı operatörü(.)(aynı zamanda nokta operatörü de denir), yapı 
  elemanına, yapı değişkenininin ismini kullanarak erişir.
    
    Örn: printf("%s", a.takim);

+ Yapı pointer operatörü(->)(arada boşluk yok!) yapı elemanına, 
yapıyı gösteren bir pointer ile ulaşır.

Örneğin, 'struct kart' yapısını göstermesi için 'kPtr' pointer' ının 
bildirildiğini ve 'struct kart' yapısının adresinin 'kPtr' ye atandığını 
düşünelim. 'struct kart' yapısının 'takim' elemanını yazdırmak için şöyle 
bildirim yapılır:
  
  printf("%s", kPtr -> takim);

Şu deyimler eşdeğerdir:

  'kPtr->takim' = '(*kPtr).takim'
  
  NOT: Burada parantezler gereklidir çünkü yapı elemanı operatörü(.), pointer 
  operatöründen(*) daha yüksek önceliğe sahiptir.

+ Yapı pointer operatörü(->) ve yapı elemanı operatörü(.), parantez( () ) ve 
dizilerde kullanılan köşeli parantez([]) operatörüyle birlikte en yüksek 
önceliğe sahiptir ve soldan sağa doğru işler.

+ Program örneği:

--------------------
  
#include <stdio.h>

struct kart{
    char *taraf;
    char *takim;
};

int main()
{
    struct kart a;
    struct kart *aPtr;

    a.taraf = "As";
    a.takim = "Maca";
    aPtr = &a;
    
    printf("%s%s%s\n"
           "%s%s%s\n"
           "%s%s%s\n",
           a.takim, a.taraf, "ı",
           aPtr->takim, aPtr->taraf, "ı",
           (*aPtr).takim, (aPtr).taraf, "ı");

    return 0;
}

--------------------

Çıktı şöyle olur:

Maca Ası
Maca Ası
Maca Ası

--------------------

+ Yapılar fonksiyonlara şu şekillerde geçirilir:
  
  - Yapı elemanlarının bağımsız bir şekilde geçirilmesiyle,
  - Tüm yapının geçirilmesiyle,
  - Yapıyı gösteren bir pointer' ın geçirilmesiyle.

+ Yapılar ya da yapı elemanları fonksiyonlara geçirilirken, değere göre 
çağırma ile geçirilirler.

+ Bir yapıyı referansa göre çağırmak için, yapı değişkeninin adresi geçirilir.

+ Yapı dizileri, diğer tüm diziler gibi, otomatik olarak referansa göre 
geçirilir.

+ Diziler normalde referansa göre geçirilir fakat değere göre de geçirmek 
mümkündür. Bunun için dizinin eleman olarak kullanıldığı bir yapı oluşturmak 
gerekir. Yapılar değere göre geçirildiğinden, dizi de değere göre geçirilmiş 
olur.

+ 'typedef' anahtar kelimesi, daha önceden tanımlanmış veri tipleri için 
eşanlamlı sözcükler(takma isimler) oluşturan bir mekanizma sağlar. Yapı tipi 
isimleri genellikle 'typedef' ile tanımlanarak daha kısa tip isimleri 
oluşturulur.Örneğin:

  typedef struct kart Kart;

Bu ifade 'struct kart' ile eş anlamda kullanılan 'Kart' isminde yeni bir tip 
oluşturur. C programcıları 'typedef' anahtar kelimesini, yapıyı tanımlarken 
kullanırlar. Böylece sonradan yapı etiketi kullanmaya gerek kalmaz. Örneğin:

  typedef struct{
      char *taraf;
      char *takim;
  } Kart;

Tanımlamadan sonra 'Kart' kelimesi, 'struct kart' tipinde değişkenler 
bildirmek için kullanılabilir.
  
  Kart deste[52];

Bu bildirim, 'struct kart' tipinde 52 adet elemanı olan bir dizi bildirir.

+ 'typedef' ile yeni bir isim oluşturmak, yeni bir tip oluşturmaz; 'dypedef' 
daha önceden var olan bir tip ismi için, eş anlamlı olarak kullanılabilecek 
yeni tip isimleri oluşturur.

+ 'typedef' sıklıkla, temel veri tipleri için eş anlamlı isimler oluşturmada 
kullanılır. Örneğin, 4 byte tamsayılara ihtiyaç duyan bir program, bir 
sistemde 'int', başka bir sistemde 'long' tipini kullanabilir. Taşınabilir 
programlar için genellikle 'typedef' kullanılarak, 4 byte tamsayılar için 
'Tamsayi' gibi eşanlamlı bir isim oluşturulur. 'Tamsayı' ismi, programın 
tüm sistemlerinde çalışabilmesi için programda yalnızca bir kez değiştirilir.

+ Birlikler(union), yapılar(struct) gibi, türetilmiş veri tipleridir. Birlik 
elemanları aynı depolama alanını kullanırlar. Bir programdaki farklı durumlar 
için bazı değişkenler kullanılmazken bazıları kullanılır. Bu sebepten, bir 
birlik kullanılmayan değişkenler için hafızayı boş yere işgal etmek yerine, 
ayrılan alanı kullanır. Bir birliğin elemanları her tipte olabilir. 

+ Birlik 'union' anahtar kelimesiyle, yapılarla aynı biçimde bildirilir.

  union sayi{
      int x;
      double y;
  };

+ Birlik tanımlamaları, bir programda, main() fonksiyonundann önce yer alır. 
Böylece tanımlama, programdaki tüm fonksiyonlarda değişken bildirmek için 
kullanılabilir.

+ Birlikler(yapılar gibi), türetilmiş veri tipleridir. Birlik elemanları aynı 
depolama alanını kullanırlar. Birlik elemanları herhangi bir tipte 
olabilirler.

+ Bir birliği depolayabilmek için kullanılan byte sayısı, en az, birliğin 
en büyük elemanını tutabilecek kadar olmalıdır. Çoğu durumda birlikler iki 
ya da daha fazla veri tipi içerirler. Bir anda yalnızca bir eleman, bu 
sebepten de yalnıza bir veri tipi kullanılabilir.

+ Birliklerde(union) yapılan işlemler şunlardır:
  
  - Bir birliği aynı tipte başka bir birliğe atamak,
  - Birliğin adresini almak(&),
  - Birlik elemanlarına yap ıelemanı operatörü(.) ve yapı pointer operatörü
  (->) kullanarak erişmek.

+ Bildirim sırasında bir birliğe, yalnızca ilk birlik elemanının tipiyle aynı 
tipte değerler atanabilir.

+ Birlikler(union), yapılarla(struct) aynı sebepler yüzünden '==' ve '!=' 
operatörüleri ile karşılaştırmaya tabi tutulamazlar. Hatırlayalım. Yapı 
elemanları hafızada ardışık byte' lar içinde bulunmak zorunda değildir. 
Bazen yapılar içinde boşluklar bulunabilir çünkü bilgisayarlar belli veri 
tiplerini özel sınırlar içinde depolarlar. Bu sınırlar, verileri bilgisayarda 
tutmak için kullanılan standart hafıza birimleri olarak düşünülebilir. 
Bu standart birim 1 byte(halfword), 2 byte(word) ya da 4 byte(double word) 
uzunluğunda olabilir.

+ Bilgisayarın içinde tüm veriler bitlerle temsil edilir. Her bit, yalnızca 
0 ya da 1 değerini alabilir. Çoğu sistemde 8bit = 1byte' ı oluşturur. Byte, 
char tipi için standart depolama birimidir. Diğer veri tipleri daha büyük 
sayıda byte' lar içinde saklanır. Bit operatörleri, operandlarının(char, int 
ve long, hem signed hem de unsigned) bitlerini yönetmek için kullanılır. Bit 
operatörleriyle genellikle işaretsiz tamsayılar(unsigned int) kullanılır.

+ Bit operatörleri şunlardır:
  
  - AND : &
  - OR : |
  - XOR : ^
  - Sola Kaydırma(Left Shift) : <<
  - Sağa Kaydırma(Right Shift) : >>
  - NOT : ~

+ AND operatörü(bitwise AND : &), iki operand kullanır ve her iki operandında 
da ilgili bitte 1 değeri varsa, sonuç bitini 1 yapar.

+ Maskeler bir değerdeki bazı bitleri seçerken bazı bitleri de saklamak için 
kullanılır.

+ OR operatörü(bitwise OR : |), iki operand kullanır ve operandlarındaki 
bitlerden birinde ya da her ikisinde birden 1 değeri varsa, sonuç bitini 1 
yapar.

+ EXCLUSIVE OR(bitwise XOR : ^) operatörü, operandlarındaki bitlerden yalnızca 
birinin değeri 1 ise sonuç biti değeri 1 olur. (XOR: Operandlarının değeri 
birbirinden farklı ise sonuç biti 1 değerini verir.)

+ Sola kaydırma operatörü(<<), soldaki operandındaki bitleri, sağdaki 
operandında belirtilen sayı kadar sola kaydırır. Sağdan boşalan alanı 0' la 
doldurur.

+ Sağa kaydırma operatörü(>>), soldkai operandındaki bitleri, sağdaki 
operandında belirtilen sayı kadar sağa kaydırır. İşaretsiz(unsigned) bir 
tamsayı üzerinde sağa kaydırma yapmak, soldan boşalan bitlerin 0 ile 
doldurulmasını sağlar. İşaretli tamsayılarda soldan boşaltılan bitler, 0 veya 
1 değeri ile doldurulabilir. Bu, her makinada/sistemde farklılık gösterebilir.

+ Tümleyen operatörü(bitwise NOT : ~)(tekli/unary), operandındaki 0 olan tüm 
bitleri 1, ve operandındaki 1 olan tüm bitleri 0 yapar.

+ Her bit operatörünün(tümleyen operatörü hariç) bir atama operatörü bulunur.
  
  &= : AND atama operatörü
  |= : OR atama operatörü
  ^= : XOR atama operatörü
  <<= : Sola kaydırma atama operatörü
  >>= : Sağa kaydırma atama operatörü

+ Operatör Öncelikleri(Yukarıdan Aşağıya):

Category 	            Operator 	            Associativity
-------------------------------------------------------------
Postfix 	        () [] -> . ++ - - 	        Left to right
Unary 	    + - ! ~ ++ - - (type)* & sizeof     Right to left
Multiplicative 	          * / % 	            Left to right
Additive 	               + - 	                Left to right
Shift 	                  << >> 	            Left to right
Relational 	            < <= > >= 	            Left to right
Equality 	              == != 	            Left to right
Bitwise AND 	            & 	                Left to right
Bitwise XOR 	            ^ 	                Left to right
Bitwise OR 	                | 	                Left to right
Logical AND 	            &&  	            Left to right
Logical OR 	                || 	                Left to right
Conditional 	            ?: 	                Right to left
Assignment 	 = += -= *= /= %=>>= <<= &= ^= |= 	Right to left
Comma 	                    , 	                Left to right

+ C, bir birliğin(union) ya da yapının(struct) unsigned ya da int 
elemanlarının kaç bit içinde(bit alanı olarak bilinir) depolanacağını 
belirlememize imkan tanır.

+ Bit alanları, verileri gerekli en az sayıda bit içinde tutarak daha iyi bir 
hafıza kullanımı sağlar.

+ Bit alanları 'int' ya da 'unsigned' olarak bildirilir.

+ Bir bit alanı, 'unsigned' ya da 'int' bir eleman isminden sonra iki nokta 
üst üste(:) ve alanın genişliğini belirten bir tamsayı ile(elemanın 
depolanacağı bit sayısını belirten sabit ile) bildirilir.
  
  struct bitKart{
      unsigned taraf:4;
      unsigned takim:2;
      unsigned renk:1
  };

+ Genişliği belirten sabit, 0 ile sisteminizde 'int' depolamak için 
kullanılan toplam bit sayısı arasında bir tamsayı olmak zorundadır. Az önceki 
örnek 4byte(4 x 8bit(her bir byte) = 32bit) tamsayı kullanan bir bilgisayarda 
denenmiştir.

+ Az önceki yapı tanımlaması; taraf elemanının 4bit, takim elemanının 2bit, 
renk elemanının 1bit içinde depolanmasını belirtmektedir. Bit sayısı, yapının 
her elemanının gereksinimine uygun belirtilmiştir. 
  
  - taraf elemanı, 0(as) ile 12(papaz) arasında değerler depolamaktadır. 
  4bit, 0 ile 15 arasındaki değerleri tutabilir.
  - takim elemanı, 0 ile 3 arasında değerler(0: karo, 1: kupa, 2: sinek, 
  3: maça) depolamaktadır. 2bit, 0 ile 3 arasındaki değerleri tutabilir.
  - renk elemanı, 0(kırmızı) ve 1(siyah) değerlerini tutmaktadır. 1bit, 0 ya 
  da 1 değerini tutabilir.

+ Yapı içinde, boşluk bırakmak için kullanılan isimsiz bit alanları 
belirlemek mümkündür.
  
  struct ornek{
      unsigned a:13;
      unsigned :19;
      unsigned b:4;
  };

Bu yapı tanımı, 19bitlik isimsiz bir alanı boşluk bırakmak için(padding) 
kullanmaktadır. Bu 19bit içinde hiçbir şey depolanmaz. b elemanı(4byte 
tamsayı kullanan bilgisayarınızda) başka bir depolama alanında depolanır.

+ 0 genişliğinde isimsiz bir bit alanı, bir sonraki bit alanını yeni bir 
depolama birimi sınırına hizalamada kullanılır.
  
  struct ornek{
      unsigned a:13;
      unsigned :0;
      unsigned b:4;
  };

Bu yapı tanımı, isimsiz 0bitlik alanı, a' nın depolandığı depolama biriminde 
kalan bitleri(ne kadar varsa) atlamak için ve b' yi yeni bir depolama 
birimine hizalamak için kullanır.

+ C, kullanıcı tarafından tanımlanabilen son veri tipi olan 'enum' tipini 
sunar. Sayma Sabitleri(Enumeration), numaralandırma sabitleri olarak da 
adlandırılabilir.

+ Bir sayma, 'enum' anahtar kelimesi ile tanıtılır ve tanıtıcılarla temsil 
edilen tamsayı sabitlerinin kümesidir. Sayma sabitleri, değerleri otomatik 
olarak belirlenen sembolik sabitlerdir. 'enum' içindeki değerler aksi 
belirtilmedikçe 0 ile başlar, 1 artarak gider. Örneğin; 

enum aylar{OCA, SUB, MAR, NIS, MAY, HAZ, TEM, AGU, EYL, EKI, KAS, ARA};

ifadesi, yeni bir tip olan 'enum aylar' tipini oluşturur. Bu enum, ay 
tanıtıcılarını 0 ile 11 arasında tamsayılar yapar. Ayları 1' den 12' ye kadar 
numaralandırmak için:

enum aylar{OCA = 1, SUB, MAR, NIS, MAY, HAZ, TEM, AGU, EYL, EKI, KAS, ARA};

ifadesi kullanılır. Bu ifadede ilk değer özel olarak 1 yapıldığından, kalan 
değerler 1 artırılarak 1-12 değerleri oluşturulur. 

+ enum' da kullanılan tanıtıcılar özel olmalıdır. Her enum değeri, atama 
değerine bir değer atanarak istenen özel bir değer yapılabilir.

+ enum' da birden çok eleman aynı sabit değere sahip olabilir.

+ Örnek:

--------------------

#include <stdio.h>

enum aylar{OCA = 1, SUB, MAR, NIS, MAY, HAZ, TEM, AGU, EYL, EKI, KAS, ARA};

int main()
{
    enum aylar ay;
    
    const char *ay_ismi[] = {"", "Ocak", "Subat", "Mart", 
                            "Nisan", "Mayis", "Haziran", 
                            "Temmuz", "Agustos", "Eylül", 
                            "Ekim", "Kasim", "Aralik"};
    
    for(ay = OCA; ay <= ARA; ay++)
        printf("%2d : %11s\n", ay, ay_ismi[ay]);
    
    return 0;
}

--------------------

### GENEL PROGRAMLAMA HATALARI

+ Yapı tanımını sonlandıran noktalı virgülü(;) unutmak.

+ Bir tipteki yapıyı, başka bir tipteki yapıya atamak.

+ Yapıları karşılaştırmak bir yazım hatasıdır.

+ Yapı pointer operatörünü yazarken '-' ve '>' arasında boşluk koymak(ya da 
üçlü operatör(?:) haricinde birden çok karakter kullanılarak yazılan 
operatörler arasına boşluk koymak).

+ Yapı elemanının ismini tek başına kullanarak yapı elemanına ulaşmaya 
çalışmak.

+ Bir yapı elemanını, pointer ve yapı elemanı operatörü kullanarak 
belirtirken parantez kullanmamak.

+ Yapıların, diziler gibi otomatik olarak referansa göre çağırma ile 
geçirildiğini düşünmek ve çağırıcının yapısını çağrılan fonksiyon içinde 
değiştirmeye çalışmak.

+ Yapılardan oluşan dizilerde, bağımsız yapıları belirlemek için kullanılan 
dizi belirteçlerini unutmak.

+ Birlik(union) içinde depolanmış verinin tipini farklı bir tip ile kullanmak 
bir mantık hatasıdır.

+ Birlikleri(unions) karşılaştırmak yazım hatasıdır.

+ Bir birlik bildiriminde, birliğin ilk elemanının tipinden farklı bir tipte 
bir değer ile atama yapmak.

+ AND(&) operatörü yerine mantıksal AND(&&) operatörünü kullanmak, ya da tam 
tersi.

+ OR(|) operatörü yerine mantıksal OR(||) operatörünü kullanmak, ya da tam 
tersi.

+ Bir değeri kaydırırken; eğer sağdaki operand negatif ise ya da sağdaki 
operand, soldaki operandın bit sayısından büyükse, kaydırma tanımsızdır.

+ Bir bit alanının içindeki bitlere sanki bir dizi elemanına erişir gibi 
erişmeye çalışmak. Bit alanları, bitlerden oluşan bir dizi değildir.

+ Bir bir alanının adresini almaya çalışmak hatadır. '&' operatörüyle 
bit alanlarının adresleri alınmaz zira bit alanlarının adresi yoktur.

+ Tanımlandıktan sonra bir sayma sabitine değer atamak yazım hatasıdır.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Yeni bir yapı tipini oluştururken her zaman yapı etiket ismi kullanın. Yapı 
etiket ismi, programda daha sonradan o yapı tipinde yeni değişkenler 
bildirmek için gereklidir.

+ Anlamlı bir yapı etiket ismi kullanmak programın daha anlaşılır olmasını 
sağlar.

+ Farklı tipteki yapıların elemanları için aynı isimleri kullanmaktan 
kaçının. Buna izin verilmiştir ancak karışıklık oluşturabilir.

+ '->' ve '.' operatörlerinden önce ve sonra boşluk bırakmayınız. Bu sayede, 
bu operatörlerin kullanıldığı deyimlerin aslında tek bir değişken ismi olduğu 
vurgulanmış olur.

+ 'typedef' isimlerinin ilk harflerini büyük yazarak, bu isimlerin başka tip 
isimleri için eş anlamlı isimler olduğunu vurgulamak.

+ Sayma sabitleri için yalnızca büyük harf kullanın. Bu, sabitlerin programda 
daha belirgin hale gelmesini sağlar ve programcıya sayma sabitlerinin 
değişken olmadığını hatırlatır.

### TAŞINABİLİRLİK İPUÇLARI

+ Belli bir tipte veri parçalarının boyutu, makine bağımlı olduğu için ve 
depolama hizalama hususları da makine bağımlı olduğundan, yapıların 
gösterilmesi de makine bağımlıdır.

+ 'typedef' kullanmak programı daha taşınır bir hale getirir.

+ Eğer birlikte(union) depolanan veri yanlış bir tiple kullanılırsa, sonuçlar 
uygulamaya bağlı olarak farklılık gösterebilir.

+ Bir birliği(union) depolamak için gerekli olan alan, uygulamadan uygulamaya 
farklılık gösterebilir.

+ Bazı birlikler(union) başka bilgisayar sistemlerine kolaylıkla taşınamaz. 
Bir birliğin taşınılabilirliği, genellikle sistemde birliğin eleman 
tiplerinin depolanmasında kullanılan hizalama yöntemlerine dayanır.

+ Verilerin bitleriyle yapılan işlemler makinelere bağımlıdır.

+ Sağa kaydırma makine bağımldıır. İşaretli bir tamsayıyı sağa kaydırma bazı 
makinelerde boşaltılan bitleri 0, bazılarında 1 ile doldurur.

+ Bit alanı işlemleri makine bağımlıdır. Örneğin bazı bilgisayarlar bit 
alanlarının sınırları geçmesine izin verirken diğerleri vermeyebilir.

### PERFORMANS İPUÇLARI

+ Yapıları referansa göre çağırma ile geçirmek, yapıları değere göre çağırma 
ile geçirmekten daha verimlidir. Çünkü tüm yapının kopyasının oluşturulması 
gerekir.

+ Birlikler depolama alanında kazanç sağlar.

+ Bit alanları depolamada kazanç sağlar.

+ Bit alanları depolama alanından kazanç sağlasa da derleyicinin makine 
kodlarını daha yavaş üretmesine sebep olurlar. Bu, adreslenebilir bir 
depolama alanında erişilebilecek alanların belirlenebilmesi için, fazladan 
makine dili işlemlerinin yapılması nedeniyle oluşur. Bu, mekan-zaman 
değişimlerinin bir çok örneğinden biridir.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ 'struct' bildiriminde olduğu gibi, 'union' bildirimi de yeni bir tip 
oluşturur. 'union' ya da 'struct' bildirimini fonksiyonların dışında yapmak, 
global değişkenler oluşturmaz.

---

## 11. BÖLÜM (Dosya İşleme)

### TERİMLER

+ binary digit: ikili basamak
+ character field: karakter alanı
+ data hierarchy: veri hiyerarşisi
+ database: veritabanı
+ database management system: veritabanı yönetim sistemi
+ displaceent: yer değiştirme
+ end-of-file: dosya sonu
+ field: alan
+ file open mode: dosya açma modu
+ file pointer: dosya pointerı
+ file position pointer: dosya pozisyon pointerı
+ formatted input/output: biçimlendirilmiş giriş/çıkış
+ random access: rastgele erişim
+ random access file: rastgele erişimli dosya
+ record: kayıt
+ record key: kayıt anahtarı
+ sequential access file: sıralı erişimli dosya

### ÖZET

+ Bir bilgisayarda işlenen tüm veriler bir ve sıfırlara indirgenir. Bunun 
sebebi, iki kararlı durum içeren elektronik cihazları üretmenin basit ve 
ekonomik olmasıdır.

+ Bilgisayardaki en küçük veri parçası(bit: binary digit), 1 ya da 0 değerini 
alabilir.

+ Rakamlar, harfler ve semboller 'karakter' olarak bilinir. Bir bilgisayarda 
programlar yazmak ve veri parçalarını temsil etmek için kullanılan tüm 
karakterlerin kümesine, bilgisayarın karakter seti denir. Bilgisayarlar 
yalnızca 1 ve 0' ları işleyebildiğinden, bilgisayarların karakter setindeki 
her karakter 1 ve 0' ların değişik biçimde dizilişleriyle(byte) temsil edilir.
(8bit = 1byte)

+ Bir alan(karakter alanı(field)), karakterlerin anlam içerebilecek şekilde 
dizilişidir. Örneğin, yalnızca büyük ve küçük harfler kullanılarak 
oluşturulan bir alan, bir kişinin ismini temsil etmek için kullanılabilir.

+ Bir kayıt(record), bir çok alanın bir araya gelmesiyle oluşur.

+ Dosyadan bir kaydı geri elde etmek için en az bir kayıt, kayıt anahtarı
(record key) olarak seçilmelidir. Bir kayıt anahtarı, bir kaydın, bir kişiye 
ya da varlığa ait olduğunu belirler.

+ Bir dosyadaki kayıtları organize etmenin en popüler yolu, istenen veriye 
ulaşılana dek, tüm kayıtların ard arda erişildiği sıralı erişimli(sequential 
file) dosyalardır. Sıralı dosyalarda kayıtlar, kayıt anahtarının sırasına 
göre depolanır.

+ İlgili dosyaların topluluğuna genellikle 'veritabanı' denir. Veritabanı 
oluşturmak ve yönetmek için kullanılan programlara veritabanı yönetim sistemi 
(database mangement system) denir.

+ C, her dosyayı, basit olarak, bitlerin ard arda geldiği bir akış olarak 
görür.

+ Her dosya ya dosya sonu belirteci(end of file : EOF) ya da sistemde 
yönetici veri yapısı tarafından belirlenmiş özel bir byte sayısı ile 
sonlarnır.

+ Bir dosya açıldığında, dosya ile ilgili bir akış ilişkilendirilir.

+ Program çalışmaya başladığında, üç dosya ve bu dosyalarla ilgili akışlar; 
standard input, standard output, standard error otomatik olarak açılır. 
Akışlar, dosyalar ile program arasında haberleşme kanalları oluşturur.

+ Bir dosyayı açmak, dosyayı işlemek için gerekli FILE yapısını('stdio.h' 
içinde tanımlanmıştır) gösteren bir pointer döndürür. Bu yapı, açık dosya 
tablosu(open file table) adı verilen işletim sistemi dizisi için dizin 
gösteren bir dosya belirteci(file descriptor) içerir.Her dizi elemanı, 
işletim sisteminin bir dosyayı yönetebilmesi için kullandığı dosya kontrol 
bloğunu(file control block) içerir. Standard input, standard output ve 
standard error, 'stdin', 'stdout' ve 'stdrrr' pointerları ile yönetilir.

+ 'fgetc()' fonksiyonu, 'getchar()' gibi, belirlenen dosyadan bir karakter 
okur. 'fgetch()' karakterin okunacağı dosyayı gösteren bir FILE pointer' ı 
alır. 'fgetc(stdin)' çağrısı, stdin' den bir karakter okur. Bu çağrı, 
'getchar()' çağrısı ile eşdeğerdir. 

+ 'fputc()', belirlenen dosyaya bir karakter yazar. Argüman olarak 
yazdırılacak bir karakter ve karakterlerin yazdırılacağı dosyayı gösteren bir 
pointer alır. 'fputc('a', stdout)' çağrısı, 'a' karakterini stdout' a 
yazdırır. Bu çağrı 'putchar('a')' ile eşdeğerdir.

+ 'fgets()' fonksiyonu belirlenen dosyadan bir satır okur. 'fputs()', 
belirlenen dosyaya bir satır yazar. 

+ C, dosyalar için özel bir yapı kullanmaz. Bu sebepten dosyadaki kayıt gibi 
gösterimler C dilinin bir parçası değildir. Bu yüzden, programcı, her 
uygulama için gerekli dosya yapısını kendi oluşturmalıdır.

+ 'FILE', 'stdio.h' header dosyasında tanımlanmış bir yapı tipidir. 
C programı, her dosyayı ayrı bir FILE yapısıyla yönetir. Programcı, dosyaları 
kullanabilmek için bu yapının özelliklerini bilmelidir. Bir dosya 
açıldığında, dosyanın FILE yapısını gösteren bir pointer döndürülür. Her açık 
dosya, o dosyayı belirtmek için kullanılan 'FILE' tipinde bildirilmiş bir 
pointer' a sahip olmak zorundadır.

+ 'fopen()' fonksiyonu iki argüman alır(dosya ismi, dosya açma modu) ve 
dosyayı açar. Eğer varolan bir dosya açılırsa, dosyanın içindekiler hiç bir 
uyarı yapılmadan silinir. Eğer daha önceden var olmayan bir dosya, yazmak 
için açılırsa, 'fopen()' o dosyayı oluşturur.

+ 'feof()' fonksiyonu, bir dosya için dosya sonu belirtecinin elde edilip 
edilmediğine karar verir. Dosya sonu belirteci, programa, işlenecek daha 
fazla veri kalmadığını söyler. 'feof()', dosya sonu belirteci elde edilince 
0' dan farklı bir değer(true:doğru) döndürür, aksi durumda 0 döndürür.

+ Sistemlere göre dosya sonu belirteci tuş birleşimleri:
  
  UNIX: <return><ctrl>d
  IBM PC & Türevleri: <ctrl>z
  Macintosh: <ctrl>d

+ 'fprintf()' fonksiyonu ile 'printf()' fonksiyonu, 'fpirntf()' 
fonksiyonunun, argüman olarak verinin yazılacağı dosyayı gösteren bir 
pointer alması haricinde eşdeğerdir.

+ 'fclose()' fonksiyonu, argümanı ile gösterilen dosyayı kapatır. Argüman 
olarak dosya ismi değil, pointer alır. 'fclose()' özellikle çağrılmamışsa, 
işletim sistemi dosyayı program sonlandığında kapatır. Bu, işletim 
sistemlerinin toparlama/evsahipliği(housekeeping) özelliklerinden biridir.

+ Programda kullanılan her bir dosyanın özel bir ismi olmalıdır. Bu isim 
başka hiç bir dosya tarafından kullanılamaz. Her dosya 'fopen()' tarafından 
döndürülecek farklı bir pointer' a sahip olmalıdır. Dosya açıldıktan sonra, 
dosyayı işleyen diğer fonksiyonlar, dosyayı uygun bir pointer ile 
belirtmelidir.

+ Dosya açma ve güncelleme modları:

  Açma:
  
  w: Bir dosyayı oluşturmak için ya da dosyaya yazmadan önce dosyanın tüm 
  içeriğini silmek için (write: yaz).

  r: Varolan bir dosyadan okuma yapmak için (read: oku).
  
  a: Varolan bir dosyaya kayıtlar eklemek için (add: ekle).
  
  Güncelleme:

  r+: Dosyayı okuma ve yazma yapmak için açar.
  w+: Yazma ve okuma için bir dosya oluşturur. Eğer dosya önceden 
      oluşturulmuşsa w+ modu dosyayı açar ve önceki tüm içerikler kaybolur.
  a+: Dosyayı okuma ve yazma yapmak için açar. Bu modda açılan dosyalarda, 
      tüm yazma işlemleri dosyanın sonuna yapılır. Eğer dosya daha önceden 
      yoksa oluşturulur.

+ FILE pointer' ları, FILE yapıları ve FCB' ler arasındaki ilişki:
  
  1. cfPtr = fopen("musteri.dat", "w");
     'fopen()', FILE yapısını gösteren bir pointer döndürür. FILE, 'stdio.h' 
     içinde tanımlanmıştır.

  2. FILE yapısı, "musteri.dat" dosyası için bir belirteç içerir. Bu belirteç 
     "Açık Dosya(lar) Tablosu" için bir dizin belirten, küçük bir tamsayıdır.
     Bu giriş, dosya açıldığında, FCB' den diske kopyalanır.

  3. Program, 'fprintf(cfPtr, "%d %s %.2f", hesap, isim, bakiye);' gibi bir 
     i/o çağrısı yaptığında, FILE yapısı içindeki belirteci bulur ve bu 
     belirteci, Açık Dosya(lar) Tablosu' ndaki FCB' yi bulmak içib kullanır.
     ("musteri.dat" dosyası için FCB.)

  4. Program, bir işletim sistemi servisini çağırır. Bu servis, FCB içindeki 
     veriyi kullanarak diskteki dosyaya tüm i/o işlemlerini kontrol eder. 
     NOT: Kullanıcı, FCB' ye doğrudan erişemez.

+ 'fscanf()' fonksiyonu, 'fscanf()' fonksiyonunun okuma yapılacak dosyayı 
gösteren bir pointer' ı(normalde stdin' den farklı) argüman olarak kullanması 
dışında 'scanf()' fonksiyonu ile denktir.

+ 'rewind()' fonksiyonu, programın dosya pozisyon göstericisini(dosyada okuma 
ya da yazma yapılacak bir sonraki byte numarasını belirtir), belirlenen 
dosyanın başına geri döndürmesini sağlar. Dosya pozisyon göstericisi, aslında 
bir pointer değildir. Daha doğrusu bu, dosyada okuma ya da yazma yapılacak 
bir sonraki byte' ın konumunu belirten bir tamsayı değeridir. Buna çoğu zaman 
dosya offset' i denir. Dosya pozisyon göstericisi, FILE yapısının her 
dosyayla ilişkili bir elemanıdır.

+ Sıralı erişimli dosyalarda, dosyadaki diğer verilere zarar verme ihtimali 
olmadan değiştirme yapılamadığına dikkat ediniz.

+ Sıralı erişimde, 'fprintf()' ve 'fscanf()', kayıtları yerinde güncelleme 
için kullanılmaz. Bunun yerine tüm dosya yeniden yazılır. Şöyle ki:
  1. Değiştirilecek kısımdan önceki kayıtlar, yeni bir dosyaya kopyalanır.
  2. Yeni kayıt yeni dosyaya yazdırılır.
  3. Yeni kayıttan sonraki kayıtlar, yeni dosyaya kopyalanır.

  NOT: Bu, bir kaydı güncellemek için tüm kayıtların işlenmesini gerektirir.

+ Rastgele erişimli dosyalar, bir kayda doğrudan erişmek için kullanılır.

+ 'fprintf()' ile oluşturulan kayıtlar aynı uzunlukta olmak zorunda değildir. 
Ancak, rastgele erişimli dosyadaki tüm kayıtlar aynı sabit uzunluğa sahiptir 
ve diğer kayıtların aranmasına gerek kalmadan doğrudan(ve bu sebeple hızlıca) 
erişilebilirler. Bu yüzden, veriye hızlı erişim gerektiren sistemler için 
rastgele erişimli dosyalar daha uygundur. Rastgele erişimli dosyaları 
uygulamak için farklı yollar da mevcuttur lakin anlatım 'sabit uzunluklu 
kayıtlar' yaklaşımı ile sınırlı tutulacaktır.

+ Rastgele erişimli bir dosyada her kayıt sabit uzunluğa sahip olduğundan, 
kaydın, dosyanın başlangıcına göre konumu anahtar kaydın bir fonksiyonu 
olarak bulunabilir. Böyle bir dosya, bir çok vagonu olan bir yük treni 
gibidir. Vagonlardan bazıları boş, bazıları dolu olabilir. Her vagon aynı 
uzunluğa sahiptir. 

+ Rastgele erişimli dosyalara, dosyadaki diğer verilere zarar vermeden yeni 
veriler eklenebilir. Daha önceden depolanmış sabit uzunluktaki kayıtlar, tüm 
dosyayı yeniden yazmadan güncellenebilir ya da silinebilir.

+ 'fwrite()' fonksiyonu, hafızada belirlenmiş bir konumdan aldığı bir veri 
bloğunu(belli sayıda byte' ı) dosyaya yazar. Bu veriler dosyaya, dosya 
pozisyon göstericisi ile gösterilen konumdan itibaren yazılır.

+ 'fread()' fonksiyonu, dosya içinde dosya pozisyon göstericisi ile 
belirlenen konumdan aldığı bir bloğu(belli sayıda byte), belirlenen adresten 
başlayarak hafızaya aktarır.

+ 'fwrite()' ve 'fread()' fonksiyonları değişkenin değerine göre okuma ya da 
yazma yapmak yerine, verileri her zaman sabit bir boyutta olacak biçimde 
okuyup yazar. Bu fonksiyonların kullandıkları veriler, 'printf()' ve 
'scanf()' in yaptığı gibi insanların kolayca anlayacağı biçimi yerine, ham 
veri(raw data)(byte' lar halinde veri) biçiminde işlenir.

+ fprintf(fPtr, "%d", sayi);
  fwrite(&sayi, sizeof(int), 1, fPtr);

'fread()' ve 'fwrite()' fonksiyonlarındaki 3. argüman(yukarıdaki örnekte '1') 
diskten diziye okunacak ya da diziden diske yazılacak eleman sayısını 
belirtir. Az önceki 'fwrite()' fonksiyon çağrısı, diske tek bir tamsayı 
yazdırdığından, üçüncü argümanı 1' dir. Bunu, sanki bir dizinin yalnızca bir 
elemanı yazdırılıyormuş gibi düşünebilirsiniz.

+ Rastgele erişimli bir dosyayı sıralı biçimde oluşturma.

--------------------

#include <stdio.h>

struct musteri_verisi{
    int hesap_no;
    char soyisim[15];
    char isim[10];
    double bakiye;
};

int main()
{
    int i;
    struct musteri_verisi bos_veri = {0, "", "", 0.0};
    FILE *cfPtr;

    if((cfPtr = fopen("kredi.dat", "w")) == NULL)
        printf("Dosya acilamadi!\n");
    else
    {
        for(i = 1; i <= 100; i++)
            fwrite(&bos_veri, sizeof(struct musteri_verisi), 1, cfPtr);

        fclose(cfPtr);
    }

    return 0;
}

--------------------

  - 'fwrite()' fonksiyonu dosyaya bir veri bloğu(belli sayıda byte) yazar.
  - 'fwrite(&bos_veri, sizeof(struct musteri_verisi), 1, cfPtr);' ifadesi, 
    'cfPtr' ile gösterilen dosyaya 'sizeof(struct musteri_verisi)' 
    boyutundaki 'bos_veri' yapısının yazdırılmasını sağlar.
  - 'sizeof' operatörü, parantezler içindeki nesnenin(struct musteri_verisi) 
    boyutunu byte olarak döndürür.

+ 'sizeof' operatörü, operandının boyutunu byte olarak döndüren derleme 
zamanlı tekli bir operatördür ve herhangi bir veri ya da deyimin boyutunu 
byte olarak belirlemek için kullanılır. İşaretsiz tamsayı döndürür.

+ Rastgele erişimli bir dosyaya rastgele bir veri yazmak.

--------------------

#include <stdio.h>

struct musteri_verisi
{
    int hesap_no;
    char soyisim[15];
    char isim[10];
    double bakiye;
};

int main()
{
    FILE *cfPtr;
    struct musteri_verisi musteri = {0, "", "", 0.0};

    if((cfPtr = fopen("kredi.dat", "r+")) == NULL)
        printf("Dosya acilamadi!\n");
    else
    {
        printf("Hesap numarasi(1'den 100'e) giriniz(Cikis: 0):\n?");
        scanf("%d", &musteri.hesap_no);

        while(musteri.hesap_no != 0)
        {
            printf("Soyisim, Isim, Bakiye giriniz:\n?");
            fscanf(stdin, "%s%s%lf", 
                   musteri.soyisim, musteri.isim, &musteri.bakiye);
            fseek(cfPtr, 
                  (musteri.hesap_no - 1) * sizeof(struct musteri_verisi), 
                  SEEK_SET);
            fwrite(&musteri, sizeof(struct musteri_verisi), 1, cfPtr);
            printf("Hesap numarasi(1'den 100'e) giriniz(Cikis: 0):\n?");
            scanf("%d", &musteri.hesap_no);
        }

        fclose(cfPtr);
    }

    return 0;
}

--------------------

  - 'fseek(cfPtr, 
          (musteri.hesap_no - 1) * sizeof(struct musteri_verisi), 
          SEEK_SET);'
    ifadesi, 'cfPtr' ile işaret edilen dosyadaki dosya pozisyon 
    göstericisini, '(musteri.hesapno -1) * sizeof(struct musteri_verisi)' 
    deyimi ile hesaplanan byte konumuna taşır. Bu deyimin değeri genellikle, 
    'offset' ya da 'yer değiştirme' olarak bilinir. Byte konumları 0 ile 
    başladığından ve hesap numarası 1 - 100 arasından olduğundan, kaydın 
    byte konumu hesaplanırken, hesap numarasından 1 çıkartılır. Bu sebepten, 
    kayıt 1(yani hesap numarası 1) için, dosya pozisyon göstericisi 
    dosyadaki 0. byte' a taşınır.

  - 'SEEK_SET' sembolik sabiti, dosya pozisyon göstericisinin yer 
    değiştimesinin, dosyanın başındaki konumdan itibaren yapılacağını 
    belirtir.

+ 'fseek()' fonksiyonu, aramanın başlatıldığı konumuna bağlı olarak, dosya 
pozisyon pointer' ını dosyada istenen konuma taşır. Arama şu üç konumdan 
birinden başlayabilir:
  
  1. SEEK_SET: Aramanın dosyanın başından başlayacağını belirtir.
  2. SEEK_CUR: Aramanın dosyadaki o anda bulunulan konumdan başlayacağını 
               belirtir.
  3. SEEK_END: Aramanın dosya sonundan başlayacağını belirtir.

  NOT: Bu üç sembolik sabit 'stdio.h' header dosyası içinde tanımlanmıştır.

+ 'fseek()' fonksiyonunun prototipi ANSI standardına göre şu şekildedir:
  
  'int fseek(FILE *stream, long int offset, int whence);'

  - Burada offset, stream ile belirtilen dosyadaki whence konumundan itibaren 
    byte sayısıdır. whence argümanı, dosyada aramanın başlayacağı konumu 
    belirten SEEK_SET, SEEK_CUR ve SEEK_END değerlerinden birini alabilir.

  NOT: Bu üç sembolik sabit 'stdio.h' header dosyası içinde tanımlanmıştır.

+ Rastgele erişimli dosyadan sıralı veri okumak.

--------------------

#include <stdio.h>

struct musteri_verisi
{
    int hesap_no;
    char soyisim[15];
    char isim[10];
    double bakiye;
};

int main()
{
    FILE *cfPtr;
    struct musteri_verisi musteri = {0, "", "", 0.0};

    if((cfPtr = fopen("kredi.dat", "r")) == NULL)
        printf("Dosya acilamadi!");
    else
    {
        printf("%-6s%-16s%-11s%10s\n", "HspNo", "Soyisim", "Isim", "Bakiye");

        while(!feof(cfPtr))
        {
            fread(&musteri, sizeof(struct musteri_verisi), 1, cfPtr);

            if(musteri.hesap_no != 0)
                printf("%-6d%-16s%-11s%10.2f\n", 
                       musteri.hesap_no, 
                       musteri.soyisim, musteri.isim, 
                       musteri.bakiye);
        }

        fclose(cfPtr);
    }

    return 0;;
}

--------------------

  - 'fread(&musteri, sizeof(struct musteri_verisi), 1, cfPtr);' ifadesi, 
    'cfPtr' ile gösterilen dosyadan 'sizeof(struct musteri_verisi)' ile 
    belirlenen sayıda byte okur ve bu veriyi 'musteri' yapısına depolar. 
    Dosyadan okunacak byte' ların konumu, dosya pozisyon göstericisi 
    tarafından belirlenir. 'fread()' fonksiyonu okunacak elemanların sayısı ve 
    okunacak elemanların depolanacağı diziyi gösteren bir pointer belirtilerek 
    diziden sabit boyuttaki birçok elemanı okumak için kullanılabilir. '1' 
    belirteci, 1 elemanın okunacağını belirtir. Daha fazla okunsun istiyorsak 
    istediğimiz rakamı 3. argümanın yerine yazmalıyız.

  - '!feof(cfPtr)' ifadesi, cfPtr pointer' ının gösterdiği dosyanın dosya sonu 
    belirtecine erişilip erişilmediğini kontrol eder. Erişilene kadar dosyadan 
    okuyup ekrana yazdırır.

### GENEL PROGRAMLAMA HATALARI

+ Kullanıcı dosyanın içeriğini korumak isterken, var olan bir dosyayı yazma 
yapmak(w) için açmak. Bu durumda hiç bir uyarı yapılmadan dosyanın içeriği 
kaybolur.

+ Programın içinde, kullanmadan önce dosyayı açmayı unutmak.

+ Bir dosyayı belirtmek için, yanlış dosya pointer' ı kullanmak.

+ Var olmayan bir dosyayı okuma yapmak için açmak.

+ Dosyaya uygun erişim hakkı verilmeden dosyayı okuma ya da yazma yapmak için 
açmak(Bu, işletim sistemine bağlıdır!).

+ Yeterli disk alanı olmadan dosyayı yazma yapmak için açmak.

+ Bir dosyayı yanlış bir dosya modu ile açmak yıkıcı hasarlara yol açabilir. 
Örneğin, güncelleme modu(r+) ile açılması gereken bir dosyayı, yazma modunda 
açmak(w+), dosyanın bütün içeriğinin kaybolmasına sebep olur.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Bir programdan, dosya işleme fonksiyonlarına yapılan çağrıların, doğru 
dosya  pointer' ını içerdiğinden emin olun.

+ Programın dosyayı yeniden kullanmayacağını öğrendikten sonra, mümkün 
olduğunca çabuk dosyayı kapatmak.

+ Eğer dosyanın içeriği değiştirilmeyecekse, dosyayı yalnızca okuma 
modunda açmak. Bu, dosya içeriğinin istemsiz olarak değiştirilmesini 
engeller. Bu, en az yetki prensibinin başka bir örneğidir.

### PERFORMANS İPUÇLARI

+ Bir dosyayı kapatmaki diğer kullanıcıların ya da programcıların beklediği 
kaynakları serbest bırakır.

+ Çoğu programcı, yanlış bir biçimde, 'sizeof' un bir fonksiyon olduğunu ve 
'sizeof' kullanmanın çalışma zamanında fazladan bir fonksiyon çağrısı 
gerektirdiğini düşünür. Bu şekilde bir durum yoktur çünkü 'sizeof', derleme 
zamanlı bir operatördür.

### TAŞINABİLİRLİK İPUÇLARI

+ 'FILE' yapısı, işletim sistemlerine bağımlıdır. Her sistemin dosyaları ele 
alışlarına göre yapı elemanları değişiklik gösterebilir.

---

## 12. BÖLÜM (Veri Yapıları)

### TERİMLER

+ binary search tree: ikili arama ağacı
+ binary tree: ikili ağaç
+ child node: çocuk düğüm
+ dynamic data structures: dinamik veri yapıları
+ dynamic memory allocation: dinamik hafıza tahsisi
+ inserting a node: düğüm ekleme
+ leaf node: yaprak düğüm
+ linear data structures: doğrusal veri yapıları
+ linked list: bağlı liste
+ node: düğüm
+ parant node: ebeveyn düğüm
+ queue: sıra
+ siblings: kardeşler
+ root node: kök düğüm
+ stack: yığın
+ subtree: ağaççık/alt ağaç/dal
+ tree: ağaç

### ÖZET

+ Bu bölüme gelene kadar anlatılanlar(diziler, structlar...vs.) çalışma 
zamanında boyutları sabit kalan veri yapılarıdır. Bu bölüm ise, çalışma 
zamanında boyutları büyüyüp küçülebilen 'dinamik veri yapılarını' anlatıyor.

+ Bağlı listeler(linked list), bir satırda dizilmiş veri nesnelerinin 
birlikleridir. Bir bağlı listedeki her noktaya ekleme/çıkarma yapılabilir.

+ Yığınlar(stack), derleyiciler ve işletim sistemlerinde önemlidir. Yığınlarda 
ise ekleme/çıkarma, yalnızca yığının iki ucundan birinden yapılabilir.

+ Sıralar(queue), bekleme satırlarını temsil eder. Sıralara ekleme yalnızca 
arkadan(kuyruk), çıkarma yalnızca önden(baş) yapılır.

+ İkili ağaçlar(binary tree), verinin çok hızlı aranması ve dizilmesi, veri 
nesnelerinin kopyalarının elenmesini, dosya sistemi dizinlerinin temsil 
edilmesini ve deyimlerin makine diline çevrilmesini sağlar.

+ Bu bölümde örneklenen programlar ağırlıklı olarak pointer yönetimini 
kullanmaktadır.

+ Kendine dönüşlü bir yapı, yapı tipiyle aynı tipte bir yapıyı gösteren bir 
pointer elemanına sahiptir.
  
  struct dugum{
      int veri;
      struct dugum *yeniPtr; /* yeniPtr elemanı bağ(link) olarak bilinir. */
  };

+ Kendine dönüşlü yapılar, hemen üstteki örnekte gösterildiği gibi, 'link' 
adı verilen ve yapı tipiyle aynı tipte bir yapıyı gösteren(pointer) bir 
elemana sahiptir. 'yeniPtr', 'struct dugum' tipindeki bir yapıyı, yine aynı 
tipteki başka bir yapıya bağlamak için kullanılabilir. 
  
+ Görsel örnek: 

[15][*] ---> [10][\]

Bu görsel anlatım şu demek:

'[15][*]' kendine dönüşlü yapısının bağ elemanı(link), '[10][\]' kendine 
dönüşlü yapısını gösteriyor(pointer). Ama '[10][\]' kendine dönüşlü yapısının 
bağ elemanı(link), başka bir yapıyı göstermiyor.

+ Kendine dönüşlü yapılar birbirine bağlanarak listeler, sıralar, yığınlar ve 
ağaçlar gibi kullanışlı veri tipleri oluşturmakta kullanılabilirler.

+ Dinamik veri yapıları oluşturmak ve yönetmek için, dinamik hafıza tahsisi 
yapmak gerekir. Dinamik hafıza tahsisi, programın çalışma zamanında yeni bir 
veri nesnesini tutabilmek için hafızadan byte blokları ayırma yeteneğidir. 
Dinamik hafıza tahsisinin limiti, bilgisayardaki kullanılabilir fiziksel 
hafıza miktarı kadar ya da sanal sistemlerde sanal hafıza kadar olabilir. 
Sıklıla, limitler daha küçüktür çünkü kullanılabilir hafıza, kullanıcılar 
arasında paylaştırılmalıdır.

+ 'malloc()' fonksiyonu, tahsis edilecek byte sayısını argüman olarak alır ve 
tahsis edilen alanı gösteren 'void *' tipte bir pointer döndürür. 'void *' 
pointer, her tipte pointer' a atanabilir. 'malloc()' fonksiyonu normalde 
'sizeof' operatörü ile kullanılır. 'sizeof' operatörü hafıza tahsis edilen 
yapının boyutunu byte cinsinden belirler. 
  
  yeniPtr = malloc(sizeof(struct dugum));

Bu ifadede; 'sizeof', 'struct dugum' tipindeki yapının boyutunu byte olarak 
hesaplar, 'malloc()' hesaplanan byte kadar hafızayı ayırır ve hafıza adresini 
'yeniPtr' pointer' ına atar. 'yeniPtr', tahsis edilen yeni hafıza alanının 
adresini gösterir. Eğer uygun hafıza alanı yoksa, 'malloc()' bir NULL pointer 
döndürür.

+ 'free()' fonksiyonu tahsis edilen hafıza alanını serbest bırakır(sisteme 
geri döndürülür, böylece ileride yeniden tahsis edilebilir).

  yeniPtr = malloc(sizeof(struct dugum));

Bu ifade ile dinamik olarak tahsis edilen hafıza alanını serbest bırakmak 
için şu ifade kullanılır:
  
  free(yeniPtr);

+ Bir bağlı liste, düğüm(node) adı verilen ve pointer bağları(link) sayesinde 
birleştirilmiş(bu sebepten 'bağlı(linked)' terimi kullanılmaktadır.) bir grup 
kendine dönüşlü yapının doğrusal bir birlikteliğidir.

+ Bağlı bir listeye, listenin ik düğümünü gösteren pointer ile erişilebilir. 
Sonradan gelen düşümlere, her düğüm içindeki pointer elemanları sayesinde 
erişilir. Geleneksel olarak, son düğümdeki bağ(link) pointer, bağlı listenin 
sonunu belirtmesi amacıyla NULL yapılır.

+ Bağlı bir liste, dinamik bir veri yapısıdır. Listenin uzunluğu gerektikçe 
artabilir ya da azalabilir. Her düğüm, ihtiyaç duyulduğunda oluşturulur. Bir 
düğüm(node), başka yapılar(struct) da dahil olmak üzere, her tipte veri 
içerebilir.

+ Veri listeleri dizilerde tutulabilir ancak bağlı listeler(linked lists) bir 
çok avantaj sağlar. Bağlı bir liste, veri yapısında temsil edilen veri 
eleman sayısının bir kerede tahmin edilemediği durumlarda uygundur. Bağlı 
listeler dinamiktir, hafıza yeterli oldukça büyümeye devam edebilir, 
gerektikçe liste uzayabilir/kısalabilir. Dizinin boyutu ise hafıza tahsis 
edildikten sonra değiştirilemez. Diziler dolabilir, bağlı listeler ise sistem 
dinamik hafıza tahsis işlemlerini karşılayamadığında dolar.

+ Bağlı listeler, pointer' ların yeniden atanması sayesinde basit veri ekleme 
ve çıkarma işlemleri yapabilir.

+ Bağlı listelerin düğümleri, normalde hafızada ard arda tulmaz. Mantık 
olarak, listedeki her düğüm sanki ard arda geliyormuş gibi gözükür.

+ Yığınlar ve sıralar doğrusal veri yapılarıdır ve bağlı listelerin 
özelleştirilmiş(kısıtlanmış) biçimleridir.

+ Ağaçlar, doğrusal olmayan veri yapılarıdır.

+ Linked list örneği:

--------------------

/* Bir bağlı liste oluşturmak. Listeye düğümler eklemek ve silmek. 
 * Bu program oldukça büyük ve karmaık bir programdır. */

#include <stdio.h>
#include <stdlib.h>

struct liste_dugumu
{
    char veri;
    struct liste_dugumu *sonrakiPtr; /* Kendine dönüşlü yapı! */
};

typedef struct liste_dugumu liste_dugumu;
typedef liste_dugumu *liste_dugumuPtr;

void ekle(liste_dugumuPtr *, char);
char sil(liste_dugumuPtr *, char);
int bos_mu(liste_dugumuPtr);
void listeyi_yazdir(liste_dugumuPtr);
void menu(void);

int main()
{
    liste_dugumuPtr baslangicPtr = NULL;
    int secim;
    char secim_no;

    menu(); /* menuyu göster */
    printf("?");
    scanf("%d", &secim);

    while(secim != 3)
    {
        switch(secim)
        {
            case 1:
                printf("Bir karakter giriniz:");
                scanf("\n%c", &secim_no); /* Bu '\n' karakteri işleme mi? */
                ekle(&baslangicPtr, secim_no);
                listeyi_yazdir(baslangicPtr);
                break;
            case 2:
                if(!bos_mu(baslangicPtr))
                {
                    printf("Silinecek karakteri giriniz:");
                    scanf("\n%c", &secim_no);
                    
                    if(sil(&baslangicPtr, secim_no))
                    {
                        printf("%c silindi.\n", secim_no);
                        listeyi_yazdir(baslangicPtr);
                    }
                    else
                        printf("%c bulunamadi!\n\n", secim_no);
                }
                else
                    printf("Liste boştur!\n\n");
                break;
            default:
                printf("Geçersiz seçim!\n\n");
                menu();
                break;
        }

        printf("?");
        scanf("%d", &secim);
    }

    printf("Program sonlandı!\n");

    return 0;
}

/* Menüyü yazdır. */
void menu(void)
{
    printf("Seçiminizi girin:\n"
           "1: Listeye eleman ekler\n"
           "2: Listeden eleman siler\n"
           "3: Cikis!\n");
}

/* 'ekle()' fonksiyonu listeye alfabetik sıralı biçimde yeni eleman ekler. 
   Fonksiyon, listenin ve eklenecek karakterin adresini alır. Liste adresi, 
   listenin başlangıcına bir değer ekleneceğinde gereklidir. Listenin 
   adresini bilmek(yani listenin ilk düğümünü gösteren pointer'ı bilmek), 
   listenin referansa göreçağırma ile de değiştirilebilmesine imkan sağlar. 
   Listenin kendisi de bir pointer olduğundan(ilk elemanına), listenin 
   adresini geçirmek, pointer gösteren bir pointer oluşmasına sebep olur. 
   Bu oldukça karmaşık bir gösterimdir ve oldukça dikkatli programlama 
   yapmayı gerektirir. */
void ekle(liste_dugumuPtr *sPtr, char deger)
{
    liste_dugumuPtr yeniPtr, oncekiPtr, suandakiPtr;

    /* malloc() çağırılarak bir düğüm oluşturulur, tahsis edilen adres
       yeniPtr' a atanır. */
    yeniPtr = malloc(sizeof(liste_dugumu));

    if(yeniPtr != NULL) /* boş alan var mı? */
    {
        yeniPtr->veri = deger; /* Eklenecek karakter ataması. */
        yeniPtr->sonrakiPtr = NULL;

        /* oncekiPtr ve suandakiPtr, ekleme noktasından önceki/sonraki düğüm 
           konumlarını tutacak. */
        oncekiPtr = NULL; /* ilk değer ataması */
        suandakiPtr = *sPtr; /* listenin başlangıcını gösteren ptr ataması. */

        while(suandakiPtr != NULL && deger > suandakiPtr->veri)
        {
            oncekiPtr = suandakiPtr; /* bir sonraki düğüme... */
            suandakiPtr = suandakiPtr->sonrakiPtr; /*...git*/
        }

        if(oncekiPtr == NULL)
        {
            yeniPtr->sonrakiPtr = *sPtr;
            *sPtr = yeniPtr;
        }
        else
        {
            oncekiPtr->sonrakiPtr = yeniPtr;
            yeniPtr->sonrakiPtr = suandakiPtr;
        }
    }
    else
        printf("%c eklenemedi! Yetersiz hafiza!\n", deger);
}

/* Bir liste elemanı silmek */
char sil(liste_dugumuPtr *sPtr, char deger)
{
    liste_dugumuPtr oncekiPtr, suandakiPtr, geciciPtr;

    if(deger == (*sPtr)->veri)
    {
        geciciPtr = *sPtr;
        *sPtr = (*sPtr)->sonrakiPtr;
        free(geciciPtr);
        
        return deger;
    }
    else
    {
        oncekiPtr = *sPtr;
        suandakiPtr = (*sPtr)->sonrakiPtr;

        while(suandakiPtr != NULL && suandakiPtr->veri != deger)
        {
            oncekiPtr = suandakiPtr; /* bir sonraki dugume... */
            suandakiPtr = suandakiPtr->sonrakiPtr; /* ...git */
        }

        if(suandakiPtr != NULL)
        {
            geciciPtr = suandakiPtr;
            oncekiPtr->sonrakiPtr = suandakiPtr->sonrakiPtr;
            free(geciciPtr);

            return deger;
        }
    }

    return '\0';
}

/* Listeyi değiştirmez. Eğer liste boşsa 1 döndür, değilse 0 döndür. */
int bos_mu(liste_dugumuPtr sPtr)
{
    return sPtr == NULL;
}

/* Listeyi yazdır */
void listeyi_yazdir(liste_dugumuPtr suandakiPtr)
{
    if(suandakiPtr == NULL)
        printf("Liste bos!\n\n");
    else
    {
        printf("Liste:\n");
        
        while(suandakiPtr != NULL)
        {
            printf("%c --> ", suandakiPtr->veri);
            suandakiPtr = suandakiPtr->sonrakiPtr;
        }

        printf("NULL\n\n");
    }
}

--------------------

+ Bir yığın(stack), bağlı listelerin kısıtlanmış bir çeşididir.

+ Yeni düğümler yığına yalnızca en üstten eklenir ve düğümler yığının 
yalnızca en üstünden çıkartılabilir. Bu sebepten, yığınlar, 'son giren ilk 
çıkar'(LIFO: last in first out) veri yapıları olarak adlandırılır.

+ Bir yığın, yığının en üstteki elemanını gösteren bir pointer sayesinde 
kullanılır. Yığının son düğmündeki bağ elemanı, yığının sonu olduğunu 
belirtmek için NULL yapılır.

+ Yığınlar ve bağlı listeler arasındaki fark; ekleme ve çıkarmanın listelerde 
her noktadan, yığınlarda ise yalnızca en üstten yapılabilmesidir.

+ Bir yığınla ilgili işlemlerde kullanılan temel fonksiyonlar, 'push()' ve 
'pop()' fonksiyonlarıdır. 'push()' fonksiyonu, yeni bir düğüm oluşturur ve 
yığının üstüne yerleştirir. 'pop()' fonksiyonu, yığının üstündeki düğümü 
çıkartır, çıkarılan bu düğüm için tahsis edilmiş olan hafızayı serbest 
bırakır ve çıkartılmış değeri döndürür.

+ Dinamik yığın programı örneği:

--------------------

#include <stdio.h>
#include <stdlib.h>

struct yigin_dugumu
{
    int veri;
    struct yigin_dugumu *sonrakiPtr;
};

typedef struct yigin_dugumu yigin_dugumu;
typedef yigin_dugumu *yigin_dugumuPtr;

void push(yigin_dugumuPtr *, int);
int pop(yigin_dugumuPtr *);
int bos_mu(yigin_dugumuPtr);
void yigin_yazdir(yigin_dugumuPtr);
void menu(void);

int main()
{
    yigin_dugumuPtr yiginPtr = NULL; /* Yığının n-en başını gösterir. */
    int secim;
    int deger;

    menu();
    printf("?");
    scanf("%d", &secim);

    while(secim != 3)
    {
        switch(secim)
        {
            case 1: /* değeri yığına push eder. */
                printf("Bir tamsayi giriniz:");
                scanf("%d", &deger);
                
                push(&yiginPtr, deger);
                yigin_yazdir(yiginPtr);
                
                break;

            case 2: /*değeri yığından pop et. */
                if(!bos_mu(yiginPtr))
                    printf("Cekilen(pop) deger: %d\n", pop(&yiginPtr));

                yigin_yazdir(yiginPtr);

                break;
            
            default:
                printf("Gecersiz secim!\n\n");
                menu();

                break;
        }

        printf("?");

        scanf("%d", &secim);
    }

    printf("Program sonlandı!\n");
    
    return 0;
}

/* Menüyü yazdır */

void menu(void)
{
    printf("Seciminiz:\n"
           "1. Push\n"
           "2. Pop\n"
           "3. Cikis\n");
}

/* Yığının başına node(dügüm) ekle. */

void push(yigin_dugumuPtr *ustPtr, int info)
{
    yigin_dugumuPtr yeniPtr;

    yeniPtr = malloc(sizeof(yigin_dugumu));

    if(yeniPtr != NULL)
    {
        yeniPtr->veri = info;
        yeniPtr->sonrakiPtr = *ustPtr;
        *ustPtr = yeniPtr;
    }
    else
        printf("%d eklenemedi. Yetesiz hafıza!\n", info);
}

/* Yığının üstünden bir düğüm çıkart. */

int pop(yigin_dugumuPtr *ustPtr)
{
    yigin_dugumuPtr geciciPtr;
    int pop_deger;

    geciciPtr = *ustPtr;
    pop_deger = (*ustPtr)->veri;
    *ustPtr = (*ustPtr)->sonrakiPtr;
    free(geciciPtr);

    return pop_deger;
}

/* Yığını yazdır */
void yigin_yazdir(yigin_dugumuPtr suandakiPtr)
{
    if(suandakiPtr == NULL)
        printf("Yigin bostur!\n\n");
    else
    {
        printf("Yigin:\n");

        while(suandakiPtr != NULL)
        {
            printf("%d --> ", suandakiPtr->veri);
            suandakiPtr = suandakiPtr->sonrakiPtr;
        }

        printf("NULL\n\n");
    }

}

/* Yığın boş mu? */
int bos_mu(yigin_dugumuPtr ustPtr)
{
    return ustPtr == NULL;
}

--------------------

+ Yığınların(stack) pek çok ilginç uygulaması vardır. Örneğin: bir fonksiyon 
çağrısı yapıldığında, çağrılan fonksiyon çağırıcısına nasıl geri döneceğini 
bilmek zorundadır, bu yüzden geri dönüş adresi yığına yazılır. Eğer bir çok 
fonksiyon çağrısı ard arda yapılırsa, geri dönüş değeri yığına, son giren ilk 
çıkar(LIFO) sırasına göre yazılır. Böylece her fonksiyon kendi çağırıcısına 
geri dönebilir. Yığınlar, yinelemeli fonksiyon çağrılarını da yinelemeli 
olmayan fonksiyon çağrılarını da olduğu gibi destekler. 

Yığınlar, bir fonksiyonun her çağrısında oluşturulan otomatik değişkenler 
için bir alan içerir. Fonksiyon çağırıcısına geri döndüğünde, o fonksiyonun 
otomatik(auto) değişkenleri için ayrılan alan yığından çıkartılır ve bu 
değişkenler artık program tarafından bilinemez.

+ Yığınlar(stack), derleyiciler tarafından deyimlerin hesaplanması ve makine 
dili kodlarının oluşturulması esnasında kullanılır.

+ Sıra veri yapılarında düğümler, yalnızca sıranın başından çıkarılır ve 
yalnızca sıranın kuyruğundan eklenirler. Bu sebepten, sıra veri yapısı 'ilk 
giren ilk çıkar'(FIFO: first in first out) veri yapısı olarak adlandırılır. 
Ekleme ve çıkarma işlemleri, 'siraya_gir' ve 'siradan_cik' olarak bilinir.

+ Sıra(queue) uygulamaları:

Çoğu bilgisayar, yaşnızca tek bir işlemciye sahiptir, bu yüzden bir anda 
tek bir kullanıcıya hizmet verir. Diğer kullanıcıların istekleri sıraya 
konur. Her istek, sadece öndeki isteğin gerektirdiği işlenler sonlanınca, 
sırada öne doğru ilerler. En öndeki istek, bir sonra hizmet sağlacak 
hizmettir.

Yazdırma işlemlerinde de kullanılır. Çok kullanıcılı ortamda tek bir 
yazıcı kulunuyor olabilir. Bir çok kullanıcı yazdırılacak çıktılar 
üretebilir. Yazıcı meşgulken hala başka çıktılar üretilebilir. Bunlar, yazıcı 
uygun hale gelene kadar diskte bir sıra içinde beklerler.

Data paketleri de bilgisayar ağında sırada beklerler. Bir ağ düğümüne paket 
ulaştığında, bu paket gideceği yere kadar, bir sonraki düğüme 
yönlendirilmelidir. Yönlendirici düğüm, bir anda yalnızca bir paketi 
yönlendirebilir. Bu yüzden sonradan gelen paketler yönlendirilene kadar 
sıraya konur.

+ Bağlı listeler, yığınlar ve sıralar doğrusal veri yapılarıdır. Ağaç ise, 
doğrusal olmayan, iki boyutlu ve özel amaçlı bir veri yapısıdır. Haliyle 
ağaçlar, bağlı listeler, sıralar ve yığınlara göre daha karmaşık veri 
yapılarıdır. Ağaçlar iki boyutlu ve her düğüm için iki ya da daha fazla bağ 
içeren veri yapılarıdır.

+ İkili ağaçlar, bir düğüm için iki bağ içerirler.

+ Kök düğüm, ağaçtaki ilk düğümdür.

+ Kökteki her bağ, bir çocuğu(child) belirtir. İlk sol çocuk, sol ağaççıktaki
(subtree) ilk düğümdür, ilk sağ çocuk, sağ ağaççıktaki ilk düğümdür. Bir 
düğümün çocuklarına kardeşler(siblings) denir. Çocukları olmayan düğüme, 
yaprak düğüm(leaf node) denir.

+ İkili arama ağacı(düğüm değerleri, diğerleriyle aynı değere sahip olmayan), 
herhangi bir sol ağaççıktaki değerlerin, ebevey(parent) düğümündeki 
değerlerden daha küçük olması ve herhangi bir sağ ağaççıktaki değerlerin, 
ebeveyn düğümündeki değerlerden büyük olması karakteristiğine sahiptir.

+ İkili ağaçta 'öncesol(left first)' ilerleme: 
  - sol ağaççıkta 'öncesol' biçiminde ilerle
  - düğümdeki değeri işler
  - sağ ağaççıkta 'öncesol' biçiminde ilerle
  
Bir düğümdeki değer, sol ağaççığındaki değerler işlenene kadar işleme tabi 
tutulmaz.

Ayrıca ikili arama ağacında öncesol ilerleme, düğüm değerlerini artan sırada 
yazdırır. İkili arama ağacı oluşturma süreci, aslında veriyi sıralamaktadır. 
Bu yüzden bu sürece 'ikili ağaç sıralama' denir.

+ 'öncedüğüm(node first)' ilerleme: 
  - düğümdeki değeri işle
  - sol ağaççıkta 'öncedüğüm' biçimind ilerle
  - sağ ağaççıkta 'öncedüğüm' biçiminde ilerle.

Her düğümdeki değer, düğüme gelindiğinde işlenir. Verilen bir düğümdeki değer 
işlendikten sonra, sol ağaççıktaki değerler işlenir, daha sonra sağ 
ağaççıktaki değerler işlenir.

+ 'önceçocuk(child first)' ilerleme:
  - sol ağaççıkta 'önceçocuk' biçiminde ilerle
  - sağ ağaççıkta 'önceçocuk' biçiminde ilerle
  - düğümdeki değeri işle
  
Düğümdeki değer, çocukların değerleri yazdırılana kadar işlenmez.

+ İkili arama ağacı, kopyaların elenmesini sağlar. Ağaç oluşturulurken, bir 
değerin kopyasının eklenmeye çalışılması farkedilir çünkü kopya değer, 
orijinal değerle aynı yolu ilerleyecektir. Bu sebepten, kopya değer en 
sonunda kendisiyle aynı değere sahip düğümle karşılaşacaktır. Kopya değer, bu 
noktada kolaylıkla elenebilir.

+ İkili bir ağaçta, anahtar bir değerle eşleşen değeri aramak da oldukça 
hızlıdır. Eğer ağaç sıkıca paketlenmişse, her seviye bir önceki seviyenin iki 
katı kadar eleman içerecektir. n elemanlı bir arama ağacı, en fazla log2n 
seviye içerecektir ve bu sebepten bir eşleşmeyi bulmak ya da eşleşme 
olmadığına karar vermek, en fazla log2n karşılaştırma gerektirecektir. Bu 
sebepten, örneğin, 1000 elemanlı bir ikili arama ağacında(sıkı paketlenmiş), 
10' dan fazla karşılaştırma yapmaya gerek yoktur. Çünkü 2^10 > 1000. Sıkı 
paketlenmiş ve 1.000.000 elemanlı ikili arama ağacında 20' den fazla 
karşılaştırma yapmaya gerek yoktur. Çünkü 2^20 > 1.000.000

+ İkili ağaçtan değer silme algoritması

+ İkili ağacı, iki boyutlu ağaç biçiminde yazdırma algoritması

+ İkili ağaçta seviye sıralı ilerleme algoritması

Bu algoritma, kök düğüm seviyesinden başlayarak ağaçtaki düğümleri satır 
satır ziyaret etmektedir. Ağacın her seviyesinde, düğümler, soldan sağa 
ziyaret edilmektedir.

+ İkili bir ağacın kopya değer içerebilmesi

+ İkili ağaca string değerlerin yerleştirilmesi

+ İkili ağaçta kaç adet seviye bulunduğunun belirlenmesi

### GENEL PROGRAMLAMA HATALARI

+ Bir listenin son bağına NULL yerleştirmemek.

+ Bir yapının boyutunun, elemanlarının boyutlarının toplamına eşit olduğunu 
düşünmek.

+ Dinamik olarak tahsis edilen hafızaya ihtiyaç kalmadığında, tahsis edilen 
hafızayı sisteme geri döndürmemek. Bu, sistemin olması gerekenden daha erken 
bir zamanda hafıza sıkıntısı çekmesine sebep olur.

+ 'malloc()' ile tahsis edilmemiş bir hafıza alanını serbest borakmak
(boşaltmak).

+ Serbest bırakılmış bir hafıza alanından bahsetmek ve kullanmaya çalışmak.

+ Bir yığının en son düğümündeki bağı NULL yapmamak.

+ Bir sıranın son düğümündeki bağı NULL yapmamak.

+ Bir ağacın yaprak düğümlerindeki bağları NULL yapmamak.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Bir yapının boyutuna karar vermek için 'sizeof' operatörünü kullanmak.

+ 'malloc()' fonksiyonunu kullanırken, geri dönüş değerinin NULL pointer olup 
olmadığını kontrol etmek. Eğer istenen hafıza tahsis edilemezse bir hata 
mesajı yazdırmak.

+ Dinamik olarak tahsis edilen hafızaya ihtiyaç kalmadığında, tahsis edilen 
hafızayı sisteme geri döndürmemek. Bu, sistemin olması gerekenden daha erken 
bir zamanda hafıza sıkıntısı çekmesine sebep olur.

+ Yeni bir düğümün bağ elemanlarına NULL atamak. Pointer' lar kullanılmadan 
önce ilk değerlere atanmalıdır.

### PERFORMANS İPUÇLARI

+ Bir dizi, beklenen veri parçalarının sayısından daha fazla eleman içerecek 
biçimde tanımlanabilir ancak bu, hafızayı boşuna harcayabilir. Bağlı 
listeler, bu durumlarda daha iyi hafıza kullanımı sağlar.

+ Sıralanmış bir dizide ekleme ve silme, zaman alıcı olabilir. Silinen ya da 
eklenen elemanlardan sonraki tüm elemanlar, uygun bir şekilde kaydırılmalıdır.

+ Bir dizinin elemanları hafızada ard arda depolanır. Bu, her dizi elemanına 
anlık erişime izin verir çünkü elemanın adresi, dizinin başlangıcına göre 
uzaklığı hesaplanarak bulunabilir. Bağlı listeler elemanlarına bu şekilde 
bir ani erişimi gerçekleştiremez.

+ Çalışma zamanında büyüyüp küçülebilen dinamik hafıza tahsisini(dizilerin 
yerine) kullanmak, hafızayı verimli kulanmanızı sağlar. Ancak, pointer' ların 
alan kapladığını ve dinamik hafıza tahsisi yapmak için yapılacak fonksiyon 
çağrılarının bir yük getirebileceğini aklınızda tutun.

### TAŞINABİLİRLİK İPUÇLARI

+ Bir yapının boyutu, elemanlarının boyutları toplamına eşit olmak zorunda 
değildir. Bunun sebebi, çeşitli makinelerde hizalamanın farklı yapılmasıdır.
(10. bölüme bakınız!).

---

## 13. BÖLÜM (C Önişlemcisi)

### TERİMLER

+ C preprocessor: C önişlemcisi
+ conditional compilation: koşullu derleme
+ debug: hata ayıklama
+ expand a macro: bir makronun genişletilmesi
+ predefined symbolic constants: önceden tanımlanmış sembolk sabitler
+ replacement text: yer değiştirme metni
+ scope of a symbolic constant: bir sembolik sabitin faaliyet alanı
+ symbolic constant: sembolik sabit

### ÖZET

+ Önişleme, bir program derlenmeden önce gerçekleşir. Yapılabilecek bazı 
işlemler şunlardır:
  - Derlenen dosyanın içine başka dosyaları eklemek
  - Sembolik sabitler ve makrolar tanımlamak
  - Program kodlarını koşullu olarak derlemek
  - Önişlemci komutlarının koşullu çalıştırılması

+ Tüm önişlemci komutları # ile başlar.

+ Bir satırda önişlemci komutundan önce yalnızca boşluk karakteri bulunabilir.

+ '#include' komutu, belirlenen dosyanın bir kopyasını komutun bulunduğu yere 
ekler. İki biçimi vardır: 
  - #include "dosyaismi" : tırnak içi dosya ismi
  - #include <dosyaismi> : açılı parantez içi dosya ismi 
  
Eğer dosya ismi tırnak içinde ise, önişlemci, dosyayı, aranan dosya 
eklendikten sonra derlenecek dosyanın bulunduğu dizin içinde arar. Bu yöntem, 
genellikle programcı tarafından tanımlanmış header dosyalarını eklemek için 
kullanılır.

Eğer dosya ismi, açılı parantezler( <, > ) arasındaysa, bu yöntem standard 
kütüphane header dosyalarını eklemek için kullanılır. Arama, uygulamaya 
bağımlı bir şekilde ve genellikle daha önceden tasarlanmış dosyalar içinde 
yapılır. 

+ '#define' komutu, sembolik sabitler(sembollerle temsil edilen sabitler) ve 
makrolar(yapılacak işlemler sembol olarak tanımlanır) oluşturur.
  
  #define tanıtıcı yer_degistirme_metni

  #define PI 3.14159 /* atama için '=', sonra ';' kullanılmaz! */

Bu ifadeden sonra program dosyasında PI sembolik sabitiyle karşılaşılan her 
yere önişlemci tarafından 3.14159 yazılır. Sembolik sabitler, programcının 
bir sabit için isim verebilmesini ve bu ismi tüm program boyunca 
kullanabilmesini sağlar. Eğer programda sabitin değerinin değiştirilmesi 
gerekirse, değiştirme '#define' komutunun içinde yapılır ve program 
derlendiğinde, sabitin programda yer aldığı tüm yerlerdeki değeri otomatik 
olarak önişlemci tarafından değiştirilmiş olur.

+ Bir sembolik sabit, bir sabitin ismidir.

+ Bir makro, '#define' önişlemci komutu içinde tanımlanmış bir işlemdir. 
Makrolar argümanlarla ya da argümansız olarak tanımlanabilir. Argümansız 
makro sembolik sabit gibi işlenir. Argümanları olan bir makro ise, argümanlar 
yer değiştirme metnindeki ifadelerle değiştirilir. Daha sonra makro 
genişletilir. Yani yer değiştirme metni, programda, tanıtıcıyı ve argüman 
listesini değiştirir.

  #define PI .14159
  #define CEMBER_ALANI(x) ((PI) * (x) * (x))
  
Bu ifade bir çemberin alan hesabı için kullanılan tek argümanlı bir makro 
tanımlamasıdır. Program içinde, 'CEMBER_ALANI(y)' ile karşılaşıldığında 
y' nin değeri, yer değiştirme metnindeki 'x' ile, 'PI' sembolik sabiti de 
3.14159 ile değiştirilir ve böylece makro genişletirilir. Örneğin:
  
  'alan = CEMBER_ALANI(4);' ifadesi, 
  'alan = ((3.14159) *(4) * (4))' 
olarak genişletilir, deyimin değeri hesaplanarak 'alan' değişkenine atanır.

Parantezler hesaplama doğruluğu için önemlidir.

  'alan = CEMBER_ALANI(c + 2);' ifadesi, 
  'alan = ((3.14159) * (c + 2)* (c + 2));' 
şeklinde genişletilir çünkü parantezler hesaplama sırasını düzene sokmuştur 
ve hesaplama doğru şekilde yapılır. Parantezler konulmasaydı genişletme şu 
şekilde yapılacak ve hataya sebep olacaktı:

  'alan = 3.14159 * c + 2 * c + 2;' ifadesi,
  'alan = (3.14159 * c) + (2 * c) + 2;' şeklinde hesaplanır.
  /* operatör önceliği! */

CEMBER_ALANI makrosu fonksiyon olarak da tanımlanabilir.

double cember_alani(double x)
{
    return 3.14159 * x * x;
}

Bu fonksiyon da CEMBER_ALANI makrosu ile aynı hesaplamayı yapar. Fakat 
fonksiyon kullanılması fonksiyon çağrısı gerektirir. Makro kullanmanın 
avantajı, makro kodları programa doğrudan eklenir ve program daha okunabilir 
halde kalır. Dezavantajı ise argümanın iki kez hesaplanmasıdır.

+ Bir makro ya da sembolik sabit için yer değiştirme metni, '#define' komutu 
içindeki tanıtıcıdan sonra, o satırdaki herhangi bir metindir. Eğer makro ya 
da sembolik sabit için kullanılacak yer değiştirme metni, satırın geri 
kalanından daha uzunsa, satırın sonuna, yer değiştirme metninin sonraki 
satırda da devam ettiğini belirten ters bölü(\) karakteri yerleştirilmelidir.

+ Sembolik sabitler ve makroların geçerliliğini sonlandırmak için '#undef' 
önişlemci komutu kullanılır. '#undef' komutu, bir sembolik sabiti ya da makro 
ismini tanımsız hale getirir.

+ Bir sembolik sabitin ya da makronun faaliyet alanı, tanımlandığı noktadan 
'#undef' ile tanımsız hale getirildiği yere ya da dosya sonuna kadardır. 
Bir kez tanımsız hale geldikten sonra, bir isim '#define' ile yeniden 
tanımlanabilir.

+ Standard kütüphane fonksiyonları, bazen başka kütüphane fonksiyonlarına 
dayalı olarak makro biçiminde tanımlanırlar. 'stdio.h' header dosyasında 
tanımlanmış bir makro aşağıda gösterilmiştir:
  
  #define getchar() getc(stdin)

'getchar()' ın makro tanımı, 'getc()' fonksiyonunu, standard girişten bir 
karakter almak için kullanılmaktadır. 'stdio.h' içindeki 'putchar()' 
fonksiyonu ve 'ctype.h' içindeki karakter işleme fonksiyonları, sıklıkla 
makro olarak da uygulanır. Yan etkileri olan(örneğin, değişken değerleri 
değiştirilmiştir) deyimlerin, makroya geçirilmemesi gerekir çünkü makro 
argümanları birden fazla kez hesaplanabilir.

+ Koşullu derleme, programcının önişlemci komutlarının çalışmasını ve 
program kodunun derlenmesini kontrol edebilmesini sağlar.

+ Koşullu önişlemci komutlarının her biri, sabit bir tamsayı deyimini 
değerlendirir. Dönüşüm operatörleri, 'sizeof' deyimleri ve  sayma 
sabitleri(enum), önişlemci komutlarında değerlendirilemez.

+ Koşullu önişleme oluşturmak, 'if' seçim yapısına oldukça benzer.
  
  #if !defined(NULL)
    #define NULL 0
  #endif

Bu komutlar, NULL' un tanımlı olup olmadığına karar vermektedir. 
'defined(NULL)' deyimi, NULL tanımlı ise 1, değilse 0 üretir. Eğer sonuç 0 
ise, '!defined(NULL)' = 1 olur(yani true), ve '#define NULL 0' çalıştırılarak 
NULL tanımlanır(0). Aksi takdirde('!defined(NULL)' = 0 olması hali(yani
 false)), '#define NULL 0' atlanır.

+ Her '#if' oluşumu, '#endif' ile sonlanır.

+ '#ifdef' ve '#infdef' komutarı, '#if defined'(isim) ve '#if !defined'(isim) 
için kısaltma olaran kullanılır.

+ Çok kısımlı bir koşullu önişlemci oluşumu, '#elif'(= else if) ve '#else' 
komutları kullanılarak denenebilir.

+ Kod yazılırken yorum satırları hatırlanacağı üzere '/*' ve '*/' ile 
bildirilir(C89). '/*' ve '*/' ile bildirilmiş yorum satırları da derlenir. 
Eğer program geliştirirken, kodun bazı kısımlarının derlenmesine engel olmak 
istiyorsanız şu önişlemci komutunu kullanın:
  
  #if 0
    derlenmesinin_engellenmesini istediğiniz kod
  #endif

Kodun derlenebilmesini istiyorsanız '#if 0' yerine '#if 1' yazmanız yeterli.

+ Koşullu derleme genellikle bir hata ayıklama aracı olarak kullanılır. Çoğu 
C uygulaması, koşullu derlemeden daha güçlü özelliklere sahip hata ayıklayıcı
(debugger) içerir. Eğer bir debugger bulunamıyorsa, 'printf()' ifadeleri, 
değişkenlerin değerlerini yazdırmak ve akış kontrolünü onaylamak için 
kullanılır. Bu 'printf()' ifadeleri, koşullu önişlemci komutları arasına 
yazılarak yazlnıca hata ayıklama sonlanmadıkça yazdırılmaları sağlanabilir. 
Örneğin:
  
  #ifdef DEBUG
    printf("degisken x : %d\n", x);
  #endif

Eğer 'DEBUG' sembolik sabiti, '#ifdef DEBUG' komutundan önce tanımlanmışsa, 
'printf()' ifadesinin derlenmesine sebep olur. Hata ayıklama sonlandıktan 
sonra, '#define' komutu kaynak kodddan çıkartılır ve hata ayıklama amacıyla 
yerleştirilmiş 'printf()' ifadeleri, derleme esnasında atlanır. Büyük 
programlarda, kaynak kodun değişik kısımlarında koşullu derlemeyi kontrol 
edebilmek için daha fazla sayıda sembolik sabit tanımlanması gerekebilir.

+ '#error' komutu, komutta belirlenen atomları içeren mesajları, uygulama 
bağımlı olarak yazdırır. Atomlar, boşluklarla birbirinden ayrılmış karakter 
serileridir. Örnek:
  
  '#error 1 - Aralik disinda hatasi' 
  /* 5 atom içermektedir. Atomlar: '1', '-', 'Aralik', 'disinda', 'hatasi'*/

Bazı sistemlerde '#error' komutu işlendiğinde, komuttaki atomlar bir hata 
mesajı olarak yazdırılır, önişleme durur ve program derlenmez.

+ '#pragma' komutu, uygulama bağımlı bir işlem gerçekleştirir. Uygulama 
tarafından tanınmayan bir pragma ihmal edilir.
(NOT: Bunu başka kaynaktan ayrıntılı öğren!)

+ '#'(stringize operator) ve '##'(token pasting operator) önişlemci 
operatörleri, standard C içinde mevcuttur.

+ '#' operatörü, bir yer değiştirme metni atomunun, tırnak içine alınmış bir 
string haline dönüşmesini sağlar. 

  #define HELLO(x) printf("Merhaba, " #x "\n");

Yukarıdaki gibi tanımlanmı bir ifadenin kullanımı şöyle: Program dosyasında 
HELLO(John) ile karşılaştığında, şu şekilde genişletilir:
  
  printf("Merhaba, " "John" "\n");

"John" stringi, yer değiştirme metnindeki '#x' yerine geçer. Boşluk ile 
ayrılan stringler önişleme esnasında birleştirilir ve şöyle olur.
  
  printf("Merhaba, John\n");

'#' operatörü, makro içinde argümanlarla kullanılmak zorundadır çünkü '#' 
operatörünün operandı, makro içindeki bir argümanı belirtir.

+ '##' operatörü, iki atomu birleştirir. 
  
  #define ATOMEKLE(x,y) x ## y

'ATOMEKLE' ye program kaynak kodunda rastlandığında, argümanları birleştiri 
ve makro yerine kullanır. Örneğin:
  'ATOMEKLE(O,K)' ifadesi programda OK ile değiştirilir.

+ '##' operatörünün mutlaka iki operandı olmalıdıır.

+ '#line' önişlemci komutu, kendinden sonra gelen tüm kaynak kod 
satırlarının, belirlenen tamsayı sabitinin değerinden başlanarak 
numaralandırılmasını sağlar.
  
Örneğin, '#line 100' komutundan sonraki kaynak satırı, 100' den başlayarak 
numaralandırılır.

+ '#line' komutu içinde bir dosya ismi yer alabilir. 
Örneğin, '#line 100 "file1.c"' ifadesi, kendinden sonraki satırların 100' den 
başlayarak dosya ismiyle birlikte numaralandırılacağını ve derleyici 
mesajlarının "file1.c" için verileceğini belirtir. Bu komut kullanım şekli, 
genellikle yazım hatalarının ve derleyici mesajlarının daha anlamlı olmasına 
yardımcı olması için kullanılır. Satır numaraları kaynak kod içinde gözükmez.

+ ANSI C, önceden tanımlanmış sabitlere sahiptir. Daha önceden tanımlanmış 
sembolik sabit tanıtıcılarının her biri, 2 adet altçigi ile başlar ve 2 adet 
alt çizgi ile sonlanır. Bu tanıtıcılar ve 'defined' tanıtıcısı, '#define' ya 
da '#undef' komutları içinde kullanılamaz.

+ '__XXXX__' sabitleri:
  
  - '__LINE__' sabiti, kullanılan kaynak kodun satır numarasıdır(bir tamsayı).
  - '__FILE__' sabiti, kaynak kodun varsayılan ismidir(bir string). 
  - '__DATE__' sabiti, kaynak kodun derlendiği tarihtir(bir string).
  - '__TIME__' sabiti,kaynak dosyanın derlendiği zamandır(string bilgisidir).

NOT: '__DATE__' : 'Aaa gg yyyy' biçiminde string. Örn: Dec 07 2018
NOT: '__TIME__' : 'ss:dd:sn' biçiminde bir string. Örn: 18:37:53

+ 'assert' makrosu('assert.h' içinde), bir deyimin değerini test eder. 
Eğer deyimin değeri 0(false, yanlış) ise 'assert' bir mesaj yazdırır ve 
'abort()' fonksiyonunu('stdlib.h' içinde) programı sonlandırması için 
çağırır. Bu, bir değişkenin doğru bir değere sahip olup olmadığını test etmek 
için kullanışlı bir hata ayıklama aracıdır. 

Örneğin, x değişkeninin bir programda asla 10 değerini geçmemesi gerektiğini 
varsayalım. x' in değerini test etmek için bir bildiri kullanılabilir ve eğer 
x' in değeri hatalı ise bir hata mesajı yazdırılır.

  'assert(x <= 10);'

Eğer x, 10' dan büyükse, programda az önceki ifadeyle karşılaşıldığında, 
satır numarasını ve dosya adını içeren bir hata mesajı yazdırılacak ve 
program sonlanacaktır. Programcı, hatayı gidermek için, kodun bu kısmını 
inceleyebilecektir. Eğer, 'NDEBUG' sembolik sabiti tanımlanmışsa, daha 
sonraki bildirimler ihmal edilir. Bu sebepten, bilgilere gerek kalmadığında 
  
  '#define NDEBUG'

satırı kullanarak, tüm bildirileri elle silmek yerine, otomatik olarak 
geçersiz yapmak mümkün olur.

### GENEL PROGRAMLAMA HATALARI

+ Yer değiştirme metninde makro argümanlarını parantez içine almayı unutmak.

+ C' nin tek bir ifade beklediği konumlara, hata ayıklama amacıyla, koşullu 
olarak derlenen 'printf()' ifadeleri yerleştirmek. Bu durumda, koşullu olarak 
derlenen ifade, birleşik bir ifade içine yerleşririlmelidir. Bu sayede, 
program hata ayıklama ifadeleri ile derlendiğinde, programın akışı değişmemiş 
olur.

  İYİ PROGRAMLAMA ALIŞTIRMALAR:

+ Sembolik sabitler için anlamlı isimler kullanmak, programın kendiliğinden 
daha okunur hale gelmesini sağlar.

### PERFORMANS İPUÇLARI

+ Makrolar bazen, çalışma zamanından öncelikli olarak, fonksiyon çağrısı 
yerine, programa doğrudan kod eklemek için kullanılır.

---

## 14. BÖLÜM (İleri Düzey C Konuları)

### TERİMLER

+ append output symbol(>>): çıktı ekle sembolü
+ command line arguments: komut satır argümanları
+ dynamic arrays: dinamik diziler
+ floating-point exception: ondalıklı sayı istisnası
+ internal linkage: iç bağlama
+ interrupt: kesme
+ redirect input symbol: girişi değiştir sembolü
+ redirect output symbol(>): çıkış yönlendirme sembolü
+ temporary file: geçici dosya
+ variable lenght argument list: uzunluğu değişebilen argüman listesi

### ÖZET

+ Bu bölüm, C giriş kurslarında genellikle işlenmeyen birkaç ileri konu 
başlığını anlatmaktadır. Burada anlatılan yeteneklerin çoğu, yalnızca belirli 
bazı işletim sistemleri için, özellikle UNIX ve DOS için geçerlidir.

+ Çoğu bilgisayar sisteminde(özellikle UNIX ve DOS sistemlerinde), girişin 
klavye yerine, bir dosyadan gelecek biçimde ve çıkışın ekran yerine dosyaya 
yerleştirilecek biçimde değiştirilmesi mümkündür. İki biçimdeki değiştirme de 
standard kütüphanenin dosya işleme yetenekleri kullanılmadan 
gerçekleştirilebilir.

+ Giriş, UNIX ve DOS sistemlerinde komut satırından girişi, değiştir 
sembolü(<) ve yönlendirme(pipe) sembolü(|) ile yeniden yönlendirilebilir.

+ I/O' u, UNIX komut satırından değiştirmenin birkaç yolu vardır. 

Örneğin, 
Toplam dosyası, çalıştırılabilir bir dosya olsun. Tamsayıları bir seferde 
alarak, dosya sonu belirteciyle karşılaşana kadar tamsayıların toplamını 
tuttuğu, daha sonra da yazdırdığını varsayalım. Normalde, kullanıcı 
tamsayıları klavyeden girecek ve en sonunda da daha fazla veri girmeyeceğini 
belirtmek için dosya sonu belirtecini(feof) girer. 

Eğer giriş değiştirilrse, giriş bir dosyada saklanabilir. 

Örneğin,
eğer veri 'giris' dosyası içinde saklanacaksa, 
  
  '$toplam < giris' 

komut satırı ifadesi, toplam programının çalıştırılmasını, girişi değiştir 
sembolünün(<), 'giris' dosyası içindeki verilerin programda giriş değeri 
olarak kullanılacağını belirtir. DOS sistemlerde de girişi değiştirmek aynı 
biçimde yapılır.

Girişi değiştirmenin ikinci yöntemi de yönlendirmedir(piping: |). Bir 
yönlendirme(pipe: |), bir programın çıktısının diğer programın girişi olarak 
kullanılmasını sağlar.

  '$rastgele | toplam' 

Bu ifade, 'rastgele' programı tarafından oluşturulan çıktının, 'toplam' 
programına girdi olarak alınmasını sağlar. Yönlendirme(piping: |) hem UNIX, 
hem de DOS sistemlerde mümkündür.

+ '$' UNIX komutsatırı başlangıcını belirtir (bazı UNIX sistemleri '%' 
kullanır). Yukarıda bahsedilen I/O değiştirme C' nin değil işletim sisteminin 
bir fonksiyonudur.

+ Program çıktısı, UNIX ve DOS sistemlerinde komut satırından, çıkış 
yönlendirme sembolü(>) ya da dosyanın sonuna çıktı ekle sembolü(>>) ile 
yeniden yönlendirilebilir. 

Çıkış yönlendirme sembolü(>), program çıktısını bir dosya içinde saklar.

Dosyanın sonuna çıktı ekle sembolü(>>), çıktıları var olan bir dosyanın 
sonuna ekler.

Hem çıkış yönlendirme sembolü(>), hem de çıktı ekle sembolü(>>) UNIX ve DOS 
sistemlerin ikisinde de aynıdır.

+ Belirlenmemiş sayıda argüman alan fonksiyonlar yazmak mümkündür. 'printf()' 
aslında böyle bir fonksiyondur ve ilk argümanı olarak bir string almak 
zorundadır ancak fazladan herhangi bir sayıda argüman alabilir. 
Prototipi şöyledir:
  
  'int printf(const char * format, ...);'

Fonksiyon prototipi içindeki üç nokta(...), fonksiyonun değişken sayıda 
argüman alabileceğini gösterir ve her zaman parametre listesinin en sonuna 
yerleştirilmesi gerekir.

+ Değişken argüman header dosyası 'stdarg.h' ın makroları ve tanımlamaları, 
değişken uzunlukta argüman listeleri kullanan fonksiyonları oluşturmak için 
gerekli yetenekleri sağlar.

+ 'stdarg.h' header dosyası içinde tanımlanmış tip ve makrolar:

  - 'va_list' tipi, 'va_start, va_arg, va_end' makrolarının ihtiyaç duyduğu 
  bilgiyi tutmak için uygun tiptir. Değişken uzunlukta argüman listesindeki 
  argümanlara erişmek için 'va_list' tipinde bir nesne bildirilmelidir.

  - 'va_start' makrosu, değişken uzunlukta bir argüman listesindeki 
  argümanlara erişmeden önce çağrılan bir makrodur. Makro, 'va_arg' ve 
  'va_end' makrolarının kullanması için 'va_list' ile bildirilmiş nesneye ilk 
  değer atar.

  - 'va_arg' makrosu, değişken uzunlukta argüman listesi içindeki bir sonraki 
  argüman tipi ve değerinde bir deyime genişleyen bir makrodur. 'va_arg' için 
  yapılan her çağrı, 'va_list' ile bildirilmiş nesneyi listedeki bir sonraki 
  argümanı gösterecek biçimde değiştirir.

  - 'va_end' makrosu, değişken uzunluktaki argüman listesi 'va_start' ile 
  belirlenmiş bir fonksiyondan, normal geri dönüş yapılmasını sağlayan bir 
  makrodur.

+ 'printf()' ve 'scanf()', 'va_arg' makrosunda kullanılacak tipleri, bir 
sonra işlenecek argümanın tipine karar vermek için biçim kontrol dizesi 
içindeki biçim dönüşüm belirteçlerini tarayarak bilir.

+ Çoğu sistemlerde, özellikle de DOS ve UNIX sistemlerinde, 'main()' 
fonksiyonunun parametre listesinde 'int argc' ve 'char *argv[]' 
parametrelerini kullanarak, komut satırından 'main()' fonksiyonuna argüman 
geçirmek mümkündür. 'argc' parametresi, komut satırı argümanlarının sayısını 
alır. 'argv' parametresi, gerçek komut satır argümanlarının depolandığı bir 
string dizisidir. Komut satırı argümanlarının genel kullanımları, argümanları 
yazdırmak, programa seçenekler ve dosya isimleri geçirmektir.

+ Birden çok kaynak dosyadan oluşan programlar programlar oluşturmak 
mümkündür. Birden çok kaynak dosyadan oluşan bir program oluştururken göz 
önünde tutulacak birkaç husus vardır. Örneğin, bir fonksiyon tanımının tamamı 
bir dosya içinde yer almalı, başka dosyaların içine yayılmamalıdır.

+ 5. bölümde, depolama sınıfı ve faaliyet alanı karamlarından bahsettik. 
Tüm fonksiyon tanımlarının dışında bildirilen değişkenlerin, aksi 
belirtilmedikçe 'statik' depolama sınıfında bulunduğunu ve 'global değişken' 
olarak adlandırıldığını öğrenmiştik. Global değişkenler, değişkenler 
bildirildikten sonra, o dosyada tanımlanan tüm fonksiyonlar tarafından 
kullanılabilirler. Ayrıca diğer dosyalardaki fonksiyonlar da global 
değişkenlere erişebilirler. Ancak bunun için, global değişkenler, 
kullanıldıkları her dosya içinde  bildirilmelidirler. Örneğin, eğer bir dosya 
içinde 'bayrak' tamsayı global değişkenini tanımlarsak, diğer dosyalar, 
  
  extern int bayrak;

bildirimini, değişkenlerin kullanıldığı yerden önce içermek zorundadır. Az 
önce bahsedilen bildirimde, 'extern' depolama sınıfı belirteci, derleyiciye, 
'bayrak' değişkeninin aynı dosya içinde daha sonra, ya da başka bir dosya 
içinde tanımlandığını bildirmektedir. Derleyici, bağlayıcıya, dosya içinde 
'bayrak' değişkeni için çözülemeyen referanslar bulunduğunu bildirir. 
Derleyici 'bayrak' değişkeninin nerede tanımlandığını bilmez, bu sebepten 
'bayrak' değişkenini bulmayı bağlayıcıya bırakır. Eğer bağlayıcı, 'bayrak' 
değişkeni için bir tanımlama bulamazsa, bir bağlayıcı hatası oluşturur ve 
çalıştırılabilir bir program üretilemez. Eğer uygun bir global tanımlama 
bulunursa, bağlayıcı 'bayrak' değişkeninin nerede bulunduğunu belireterek 
referansları çözer.

+ Global değişkenler, kullanıldıkları her dosya içinde bildirilmelidirler.

+ 'extern' bildirimlerinin diğer program dosyaların için global değişken 
bildirmede kullanılması gibi, fonksiyon prototipleri de bir fonksiyonun 
faaliyet alanını, tanımlandığı dosyanın dışına genişletebilir.(fonksiyon 
prototipi içinde 'extern' belirtecine gerek yoktur). Bu, fonksiyon 
prototipini fonksiyonun çağrıldığı her dosya içine yazmak ve dosyaları 
birlikte derlemek sayesinde gerçekleştirilir. Fonksiyon prototipleri 
derleyiciye, belirlenen fonksiyonun aynı dosya içinde daha sonra ya da başka 
bir dosya içinde tanımlandığını bildirmektedir. Derleyici, yine böyle bir 
için referansları çözmeye kalkmaz, bu görev bağlayıcıya bırakılır. Eğer 
bağlayıcı uygun bir fonksiyon tanımlaması bulamazsa bir hata üretir.

Fonksiyon faaliyet alanlarını genişletmek için fonksiyon prototiplerinin 
kullanılmasına örnek olarak, '#include <stdio.h>' önişlemci komutunu içeren 
bir program düşünelim. Bu komut, 'printf()' ve 'scanf()' gibi fonksiyonların 
prototiplerini programa dahil eder. Dosyadaki diğer fonksiyonlar, görevlerini 
yapmak için 'printf()' ve 'scanf()' i kullanabilirler. 'printf()' ve 
'scanf()' fonksiyonları bizim için ayrıca tanımlanmıştır. Bu fonksiyonların 
nerede tanımlandıklarını bilmememiz gerekmez. Biz programımızda, kodu yeniden 
kullanıyoruz. Bağlayıcı, bu fonksiyonlara yaptığımız referansları otomatik 
olaral çözer. Bu süreç, standard kütüphanedeki fonksiyonları kullanabilmemizi 
sağlar.

+ Bir global değişkeninin ya da fonksiyonun faaliyet alanını, tanımlandığı 
dosya içinde kısıtlamak mümkündür. 'static' depolama sınıfı belirteci, global 
bir değişken ya da fonksiyona uygulandığıdna, aynı dosyada tanımlanmamış bir 
fonksiyon tarafından kullanılmaları engellenmiş olur. Buna, iç bağlama
(internal linkage) denir. Tanımlarından 'static' içermeyen global değişkenler 
ve fonksiyonlar dış bağlamaya(external linkage) sahiptir. Yani eğer 
kullanılacakları dosyalar uygun bildirimleri ya da fonksiyon prototiplerini 
içeriyorsa, başka dosyalar içinde de kullanılabilirler.

Örneğin, 'static double pi = 3.14159;' global değişken ifadesi, 'static' 
belirteci yüzünden yalnızca bulunduğu dosyadaki fonksiyonlar tarafından 
kullanılabilir.

+ 'static' belirteci, belli bir dosyadaki fonksiyonlar tarafından çağrılan 
görev fonksiyonları ile kullanılır. Eğer bir fonksiyonun belli bir dosyanın 
dışında kullanılması gerekmiyorsa, 'static' kullanılarak en az yetki 
prensibine uyulmalıdır.

+ Eğer bir fonksiyon, dosyada kullanılmadan önce tanımlanmışsa, 'static', 
fonksiyon tanımına uygulanmalıdır. Aksi takdirde, 'static', fonksiyon 
prototipine uygulanmalıdır.

+ Birden çok kaynak dosya içinde geniş programlar oluştururken, programı 
derleme, eğer bir dosyada küçük bir değişiklik yapılırsa ve tüm programın 
yeniden derlenmesi gerekirse usandırıcı olabilir. Çoğu sistem, yalnızca 
değişiklik yapılan dosyayı derleyen özel hizmetler sağlar. UNIX sistemlerinde 
bu hizmet, 'make' olarak bilinir. 'make' hizmeti, programın derlenmesi ve 
bağlanması hakkında emirler içeren 'makefile' adındaki dosyayı okur.

+ Genel amaçlı kütüphane(stdlib.h), 'main()' fonksiyonundan geri dönmek 
yerine başka program sonlandırma yöntemlerini sağlar.

+ 'exit()' fonksiyonu, programın normal bir şekilde çalışmış gibi 
sonlanmasını sağlatır. Bu fonksiyon, genellikle girişte bir hata tespit 
edildiğinde ya da programda işlenecek bir dosya açılamadığında programı 
sonlandırmak için kullanılır.

+ 'atexit()' fonksiyonu, program içinde, programın başarılı bir şekilde 
sonlanmasında(yani programın 'main()' in sonuna ulaşarak sonlandığında ya da 
'exit()' fonksiyonu çağrıldığında) çağrılan bir fonksiyonu kaydeder.

+ 'atexit()' fonksiyonu, argüman olarak fonksiyonu gösteren(fonksiyon ismini) 
bir pointer alır. Program sonlandırmada çağrılan fonksiyonlar, argümana sahip 
olamazlar ve değer döndüremezler. Programın sonlanmasında çalıştırılacak en 
fazla 32 fonksiyon kaydedilebilir.

+ 'exit()' fonksiyonu bir argüman alır. Argüman normalde 'EXIT_SUCCESS' ya da 
'EXIT_FAILURE' sembolik sabitidir. Eğer 'exit()' fonksiyonu 'EXIT_SUCCESS' 
ile çağrılırsa, çağırıcı ortama, başarı için sisteme bağlı olarak tanımlanmış 
değer döndürülür. Eğer 'exit()', 'EXIT_FAILURE' ile çağırılırsa, sistemde 
başarısız sonlanma için tanımlanmış değer döndürülür. 'exit()' fonksiyonu 
çağrıldığında, 'atexit()' ile kaydedilmiş fonksiyonlar, kayıt sıralarının 
tersine bir biçimde çağrılırlar, program ile ilgili akışlar kapatılır ve 
kontrol esas ortama döndürülür.

+ 6. ve 7. bölümde 'const' tip belirtecini tanıtmıştık. ANSI C, ayrıca 
çeşitli iyileştirmelerin yapılmaısnı engellemek için 'volatile' tip 
belirtecini kullanmamıza izin verir. 

+ 'volatile' tip belirteci: Eğer bir değişkenin değerinin herhangi bir 
zamanda değişmesi mümkünse 'volatile' belirteci ile yazılması gerekir. 
Pratikte 3 çeşit değişken değişebilir:
  1. Hafızaya haritalanmış ortam sicilleri
  2. Interrup hizmet rutini tarafından değiştirilen global değişkenler
  3. Çok iş parçacıklı(multithread) bir uygulama içinde birden fazla görev 
  tarafından erişilen genel değişkenler

Özet olarak: embeded sistem için bir kod yazılacaksa ve değişken memory 
mapped i/o tekabül ediyorsa, bu sıfat değişkenin sıfatı olarak yazılır ve 
compiler bu değişkeni içeren kodu optimize etmeye çalışmaz.

Extra özet: 

Mikrodenetleyicilerin registerlarını tanımlamada kullanılan veri tipidir. 
Derleyici kodu optimize ederken, değeri aslında sürekli değişen bir 
değişkeni(yani registerımızı), sanki sabit bir değermiş gibi kabul edebilir. 
Ama aslında çevre birimlerden gelen işaretler sürekli değişir. Yani program 
işletildiğinde istediğimiz gibi çalışmaz. Bunu için değişkenimizi 'volatile' 
olarak tanımlarız ve derleyiciye 'Bak güzel compiler, bu değer uçucu! Sen 
sabit sanabilirsin ama koddan bağımsız bir şekilde değişebilir bu!' demiş 
oluruz.

Örnek:

'#define porta (*(volatile unsigned char*)(0x1a))'

Aşama aşama gidersek, "'unsigned char' ile 8bitlik bir veri alanım var benim" 
dedik.

'unsigned char*' yapınca, "8bitlik veri alanını işaret eden bir pointer' ım 
var" dedik.

'(unsigned char*)(0x1a)' ile dedik ki "8bitlik alanı işaret eden bir pointer 
var. işaret ettiği adres ise 0x1a."

'(*(unsigned char*)(0x1a))' ile "8 bitlik alanımı işaret eden bir pointer 
var. Pointerın gösterdiği adresin değeriyle oynamak ya da görmek istiyorum" 
dedik.

başına 'volatile' koyunca da dedik ki "aman compiler sakın bunu sabitmiş gibi 
optimize etme, adamın biri butona basacak bu değer değişecek!"

+ ANSI Standardı(ANSI90), bir tipin belirtilmesi için 'volatile' 
kullanıldığında, o nesneye erişimin sistem bağımlı olacağını belirtmiştir.

+ C, tamsayı ve ondalıklı sayı sabitlerin tipinin belirlenmesi için sonekler 
kullanılmasına izin vermektedir. 

Tamsayı sonekleri; 

  - 'unsigned' bir tamsayı için 'u' ya da 'U'
  - 'long' tamsayılar için 'l' ya da 'L'
  - 'unsigned long' tamsayı için 'ul', 'lu', 'UL' ya da 'LU'

olarak belirlenmiştir. 

Eğer bir tamsayı sabitine sonek eklenmemişse, tipi o büyüklükteki bir 
değeri tutabilecek ilk tip olarak belirlenir(önce 'int', sonra 'long int' ve 
sonra da 'unsigned long int'). 

Ondalıklı sayı sonekleri ise;

  - 'float' için 'f' ya da 'F'
  - 'long double' için 'l' ya da 'L'

olarak belirlenmiştir. 

Sonek almamış bir ondalıklı sayı sabiti otomatik olarak 'double' tipinde 
olacaktır.

+ C, ayrıca ikili dosyaları işleme yeteneğine de sahiptir ancak bazı 
bilgisayar sistemleri ikili dosyaları desteklemez. Eğer ikili dosyalar 
desteklenmiyorsa ve dosya ikili dosya modunda açılırsa, dosya metin dosyası 
olarak ele alınır.

+ İkili dosyalar, metin dosyaları yerine, yalnızca hız, depolama ve/veya uyum 
koşulları ikili dosyalara dayandığı durumlarda kullanılmalıdır. Aksi takdirde 
metin dosyaları, her zaman doğal taşınabilirlikleri ve dosyadaki veriyi 
araştırmak ve işlemek için standard araçları kullanabilme yetenekleri için 
tercih edilirler. 

+ 11. bölümde anlatılan dosya işleme fonksiyonlarına ek olarak, standard 
kütüphane 'wb+' modunda geçici bir dosya açan 'tmpfile()' fonksiyonunu da 
sunmaktadır. 'tmpfile()' fonksiyonu 'wb+' modunda geçici biri dosya açar. 
Bu mod, ikili dosya modu olsa da, bazı sistemler geçici dosyaları metin 
dosyaları olarak işlerler. Geçici bir dosya, 'fclose()' ile kapatılana dek ya 
da program sonlanana dek var olur.

+ Binary(ikili) dosya açma modları:
  
  rb: Binary bir dosyayı okumak için açar.
  wb: Yazmak için binary bir dosya oluştur. Eğer dosya daha önceden varsa, o 
      andaki içeriğini siler.
  ab: İkili bir dosyayı okumak için ya da dosyanın sonuna yazma/ekleme yapmak 
      için açar.
  rb+ : Binary bir dosyayı güncellemek(okumak ve yazma yapmak) için açar.
  wb+ : Güncellemek için binary bir dosya oluşturur. Eğer dosya daha önceden 
        varsa, o anki içeriğini siler.
  ab+ : Binary bir dosyayı güncellemek için aç ya da oluştur. Tüm yazma, 
        dosya sonuna yapılır.

+ Beklenmeyen bir olay ya da sinyal, programın beklenenden daha erken 
sonlanmasına yol açabilir. Bazı beklenmeyen olaylar kesmeye sebep olabilir. 
Bu sonlanmaya sebep olabilecek şeyler şunlar olabilir:
  - UNIX ve DOS sistemlerde '<ctrl>c' yazmak
  - İllegal emirler
  - Segment kısıtlamaları/hataları
  - İşletim sistemi tarafından gönderilen sonlandırma emirleri
  - 0' a bölme yada büyük ondalıklı sayıları çarpma gibi ondalıklı sayı 
    istisnaları

+ Sinyal işleme kütüphanesi, beklenmeyen olayları 'signal()' fonksiyonu ile 
yakalayabilme yeteneğini sunar. 'signal()' fonksiyonu iki argüman alır:
  - tamsayı olan bir sinyal sayısı
  - sinyal işleme fonksiyonu gösteren bir pointer

+ Sinyaller, argüman olarak tamsayı olan bir sinyal sayısı alan 'raise()' 
fonksiyonu tarafından üretilebilirler.

+ 'signal.h' header dosyası, standard kütüphane içindeki standard sinyalleri 
özetler. Şunlardır:

  SIGABRT : 'abort()' fonksiyonuna yapılan çağrıda olduğu gibi, programın 
            normal olmayan şekilde sonlanması.
  SIGFPE  : Hatalı aritmetik işlem. Örneğin, sıfıra bölme ya da taşma ile 
            sonuçlanacak işlem.
  SIGILL  : İllegal emrin tesbiti.
  SIGINT  : Etkileşimli sinyalin alınması.
  SIGSEGV : Depolamaya geçersiz erişim.
  SIGTERM : Programı sonlandırma isteği.

+ Normalde etkileşimli sinyallere ilk değerleri programın dışında verilir. 
Örneğin, UNIX ya da DOS sistemlerinde program çalışırken '<ctrl>c' yazmak, 
programın çalışmasını sonlandıran etkileşimli bir sinyal oluşturur. Sinyal 
işleme, etkileşimli sinyali yakalamak ve programın sonlanmasını engellemek 
için kullanılabilir.

+ 12. bölümde, 'malloc()' fonksiyonu kullanarak dinamik hafıza tahsisi 
yapmayı anlatmıştık. 12. bölümde belirttiğimiz gibi diziler; hızlı sıralama, 
arama ve veri erişiminde, bağlı listelere(linked list) göre daha iyidir. 
Ancal diziler genellikle statik veri yapılarıdır.

+ Genel amaçlı kütüphane(stdlib.h), dinamik hafıza tahsisi için iki fonksiyon 
daha sunar: 'calloc()' ve 'realloc()'. Bu fonksiyonlar, dinamik dizilerin 
oluşturulması ve değiştirilmesi için kullanılır. 7. bölümde gösterildiği 
gibi, diziyi gösteren pointer, dizilerde olduğu gibi belirteçlerle 
kullanılabilir. Bu sebepten, 'calloc()' ile oluşturulan ve birbirine bitişik 
hafıza alanını gösteren pointer, bir dizi gibi yönetilebilir. 

+ 'calloc()' fonksiyonu, bir dizi için dinamik olarak hafıza tahsisi yapar. 

Prototipi: 'void *calloc(size_t nmemb, size_t size);' şeklindedir.

+ 'calloc()' fonksiyonu iki argüman alır:
  - eleman sayısı(nmemb)
  - her elemanın boyutu(size)

Ayrıca dizinin elemanlarını sıfıra atar. Fonksiyon, ya tahsis edilen alanı 
gösteren bir pointer ya da hafıza tahsis edilemezse NULL döndürür.

+ 'malloc()' ile 'calloc()' arasındaki temek fark, 'calloc()' fonksiyonunun 
tahsis ettiği hafızayı temizlemesi ancak 'malloc()' un temizlememesidir.

+ 'realloc()' fonksiyonu, kendinden önce 'malloc()', 'calloc()' ya da 
'realloc()' çağrılarak tahsis edilmiş nesnenin boyutunu değiştirir. 
Orijinal nesnenin içeriği, eğer tahsis edilen yeni alan, daha önceden tahsis 
edilen alandan daha büyükse değiştirilmeden korunur. Aksi takdirde, yeni 
nesnenin boyutuna ulaşılıncaya kadar, içerik değiştirilmeden korunur.

Prototipi: 'void *realloc(void *ptr, size_t size);' şeklindedir.

+ 'realloc()' fonskiyonu iki argüman alır:
  - orijinal nesneyi gösteren bir pointer(ptr)
  - nesnenin yeni boyutu(size)

Eğer pointer NULL ise, 'realloc()' fonksiyonu 'malloc()' ile eşdeğer biçimde 
çalışır. Eğer size 0 ve pointer NULL değilse, nesne için kullanılan hafıza 
serbest bırakılır. Eğer pointer NULL değil ve size 0' dan büyükse, 
'realloc()' nesne için yeni bir hafıza alanı tahsis etmeye çalışır. Eğer yeni 
alan tahsis edilemezse, pointer tarafından gösterilen nesne değiştirilemez. 
'realloc()' fonksiyonu yeniden tahsis edilmiş alanı gösteren bir pointer 
ya da NULL pointer döndürür.

+ Koşulsuz dallanma: goto

Tüm kitap boyunca hata ayıklaması, değiştirmesi ve geliştirmesi kolay, 
güvenilir programlar oluşturabilmek için yapısal programlama teknikleri 
kullanmanın önemini anlattık. Bazı durumlarda performans, yapısal programlama 
tekniklerine bağlı kalmaktan daha önemlidir. Bu durumlarda, yapısal olmayan 
bazı programlama teknikleri kullanılabilir. Örneğin, döngü devam koşulu 
yanlış olmadan 'break;' kullanarak döngüden çıkabiliriz. Bu, döngü 
sonlanmadan önce istenen görev yerine getirilmiş olursa, döngünün kalan 
kısımlarının tekrarını engeller. 

Yapısal olmayan programlamanın başka bir örneği de 'goto' ifadesi ile yapılan 
koşulsuz dallanmadır. 

+ 'goto' ifadesinin sonucu, programın akışındaki kontrolün değişimidir. 
Programın çalışması, 'goto' ifadesinde belirtilen etiketten sonraki ilk 
ifadeden devam eder.

+ Bir etiket, tanıtıcıdan sonra iki nokta üst üste(:) konarak oluşturulur. 
Bir etiket, kontrolü kendisine gönderen 'goto' ifadesi ile aynı fonksiyon 
içinde bulunmalıdır.

+ 3. bölümde herhangi bir programı yazmak için yalnızca 3 kontrol yapısının
(sıra, seçim ve döngü) yeterli olacağını söylemiştik. Yapısal programlamanın 
kurallarına uyulduğunda, içinden verimli bir şekilde çıkmanın güç olduğu, 
yuvalı kontrol yapıları oluşturmak mümkündür. Bazı programcılar bu durumda 
yuvalı kontrol yapısından hızlıca çıkabilmek için 'goto' ifadelerini 
kullanabilirler. Bu, bir kontrol yapısından çıkmak için, bir çok koşulun test 
edilmesi gerekliliğini ortadan kaldırır.

### GENEL PROGRAMLAMA HATALARI

+ Fonksiyon parametre listesinin ortasına üç nokta(...) yerleştirmek. 
Üç nokta(...) yalnızca parametre listesinin sonuna eklenebilir.
  
### TAŞINABİLİRLİK İPUÇLARI

+ Bazı sistemler 6 karakterden uzun global değişken isimler ve fonksiyon 
isimlerini desteklemez. Bu, başka platformlara taşınacak programlar 
yazılırken göz önünde bulundurulması gereken bir husustur.

+ Taşınabilir programlar yazarke, nmetin dosyalarını kullanın.

### PERFORMANS İPUÇLARI

+ Global değişkenler performansı artırır çünkü her fonksiyon tarafından 
doğrudan erişşilebilirler ve böylece verinin fonksiyonlara geçirilmesi yükü 
ortadan kaldırılmış olur.

+ İkili dosyaları, metin dosyaları yerine, yalnızca yüksek performansa 
ihtiyaç duyan uygulamalarda kullanın.

+ 'goto' ifadeleri yuvalı kontrol yapılarından verimli bir çıkış yapılması 
için kullanılabilir.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ Global değişkenleri, uygulamanın performansı kritik olmadıkça kullanmamak 
gerekir. Çünkü global değişkenler, en az yetki prensibine uymazlar.

+ Programları birden çok dosya içinde yazmak, yazılımın yeniden 
kullanılabilirliğini sağlar ve bu sebepten iyi bir yazılım mühendisliği 
örneğidir. Fonksiyonlar, bir çok uygulama için genel olabilir. Bu durumda, 
ortak olarak kullanılalcak fonksiyonlar, kendi dosyaları içinde depolanmalı 
ve her kaynak dosya, fonksiyon prototiplerini içeren ilgili bir öncü dosyaya 
sahip olmalıdır. Bu, programcıların farklı uygulamalarda uygun öncü dosyayı 
ekleyerek ve uygulamalarını ilgili kaynak dosya ile birlikte derleyerek aynı 
kodu yeniden kullanmalarını sağlatır.

+ 'goto' ifadeleri, yalnızca performansın ön planda tutulduğu uygulamalarda 
kullanılmalıdır. 'goto' ifadesi yapısal değildir ve hata ayıklaması, 
geliştirmesi ve değiştirmesi oldukça güç programlar yazılmasına yol açabilir.

---

## 15. BÖLÜM ("Daha İyi C" Olarak C++)

### TERİMLER

+ alias: lakap, takma ad
+ argument in a function call: fonksiyon çağrısındaki argüman
+ class: sınıf
+ component: parça
+ dangling reference: sallantılı referans
+ default function arguments: varsayılan fonksiyon argümanları
+ fixed point format: sabit nokta biçimi
+ function overloading: fonksiyon aşırıyüklemesi
+ function scope: fonksiyon faatliyet alanı
+ name decoration: isim dekorasyonu
+ non parameterized stream manipulator: parametrize edilmemiş akı manipülatörü
+ signature: işaret
+ stream extraction operator: akış çıktı opetatörü
+ stream insertion operator: akış ekleme operatörü
+ stream manipulator: akış manipülatörü
+ template function: taslak fonksiyonu
+ type safe linkage: tip güvenli bağlama
+ unary scope rasolution operator: tekli faatliye alanı çözünürlük operatörü

### ÖZET

+ İlk 14 bölüm, C ile şunları anlatıyor:
  - yukarıdan şağıya program tasarımı
  - kapsamlı yordamsal programlama anlayışı

  Bundan sonra ise, C++ ile şu 3 programlama modeli anlatılacak:
  - nesne tabanlı programlama(sınıflar, depolama, nesneler, overloading)
  - nesne yönelimli programlama(kalıtım ve çokbiçimlilik)
  - genel programlama(fonksiyon ve sınıf taslakları)

+ Varolan C programlarını derlemek için C++ derleyicileri kullanılabilir(?).

+ Bu kitapta ANSI/ISO C++ anlatılıyor(ISO/IEC 14882-1998). C++' ın şimdiki 
sürümünün pek çok özelliği, daha eski C++ sürümleri ile uyumlu değildir. 
Eski sürüm derleyciler bazı yeni kodları çalıştırmayabilir.

+ C Dosyaları .c uzantısına sahiptirler. C++ dosyaları ise bir çok farklı 
uzantıya sahip olabilir: .cpp, .cxx, .C

+ C++ standard kütüphanesi, programcıların kendi programlarında faydasını 
görecekleri bir çok fonksiyon ve sınıflar içerir.

+ Tek satırlık C++ yorumları '//' ile başlar. C tarzı yorumları (/*...*/) da 
kullanılabilir.

+ '#include <iostream>' satırı, C++ önişlemcisine i/o akış öncü dosyasını 
programa eklemesini söyler. Bu dosya; 'std::cin, std:cout, std::endl, << ve 
>>' operatörlerini kullanan programların derlenmesi için gerekli bilgileri 
içerir.

+ C' de main fonksiyonunun tipinin nelirlenmesine gerek yoktur. C++' ta ise 
tip belirtilmelidir. Belirtilmemişse derleyici hata verir.

+ C' de değişkenler bir blok içerisinde herhangi bir çalıştırılabilir 
ifadeden önce bildirildiğinin aksine C++' ta değişken bildirimleri bir blok 
içinde herhangi bir yerde yapılabilir(?).

+ Standard çıkış nesnesi 'cout' normalde ekrana bağlıdır ve veri çıkışı 
yapmak için kullanılır. Çoklu veri elemanları, akış ekleme operatörlerinin
(<<) ard arda eklenmiş biçimde kullanılmasıyla yazdırılır.

+ Standard giriş nesnesi 'cin' normalde klavyeye bağlıdır ve veri girişi 
yapmak için kullanılır. Çoklu veri elemanları, akış çıkarma operatörlerinin
(>>) ard arda eklenmiş biçimde kullanılmasıyla yazdırılır.

using std::cout;
using std::cin;
using std::endl;

ifadeleri, 'std::' önekini kullanma gerekliliğini ortadan kaldırmak için 
'using' ifadelesini kullanmaktadır. Bu 'using' ifadelerini bir kez programa 
ekledikten sonra, programın geri kalanında 

'std::cout' yerine 'cout'
'std::cin' yerine 'cin'
'std::endl' yerine 'endl'

kullanabiliriz.

+ 'std::endl', 'endl' satır sonu anlamına gelen 'end line' teriminin 
kısaltmasıdır. 'std::endl' akış yöneticisi olarak ta adlandırılır. Yeni satır 
çıktısı verir ve "arabelleği temzler"! Basit anlatırsak bu, çıktının ekranda 
görüntülecek hale gelene kadar biriktirildiği sistemlerde, 'std::endl' nin 
herhangi bir birikmiş çıktının o anda görüntülenmesini sağladığı anlamına 
gelir.

+ 'std::cout' veya diğer 'std::xxxx' ifadelerinde kullandığımız 'std::' 
gösterimi, std isim alanına(namespace) ait olan bir ismi kullandığımızı 
belirtir. İsim alanları ileri düzey konudur.

+ C++, farklı data tiplerini(double, int..vs.) çıktı verebilir. Akış ekleme 
operatörü(<<), verinin her parçasını nasıl çıktı olarak vereceğini bilir. Bu 
operatörün tek bir ifade içinde çoklu kullanımına zincirleme denir.

+ C++' ın diğer güçlü bir özelliği de kullanıcının kendi veri tiplerini 
oluşturma imkanıdır. Kullanıcının bu yeni veri türlerini nasıl girdi ve çıktı 
olarak kullanacağı, >> ve << operatörlerini kullanılarak C++' a 
öğretilebilir. Bu işleme operatör aşırıyüklemesi(operator overloading) denir.

+ C++ programları, iki temel yapı bloğu ile inşa edilirler: fonksiyonlar ve 
sınıf adı verilen, kullanıcı tarafından tanımlanmış veri tipleri(bir sonraki 
bölümde anlatılacaktır). Bir çok C++ programcısı, C++ standard kütüphanesinde 
verilen zengin sınıf ve fonksiyon koleksiyonunun faydasını görmektedir. 
Kısacası, gerçekte C++ dünyasını öğrenmek iki kısım içerir: Birincisi, C++ 
dilinin kendisini öğrenmek, ikincisi, C++ standard kütüphanesindeki sınıf ve 
fonksiyonların kullanımını öğrenmek. Kitap boyunca bu fonksiyonların pek 
çoğunu ele alacağız.

+ Standard sınıf kütüphaneleri genellikle derleyici üreticileri tarafından 
sağlanır. Bir çok özel amaçlı sınıf kütüphaneleri debağımsız yazılım 
üreticileri tarafından sağlanmaktadır.

+ Kendi yazacağını fonksiyon ve sınıfların avantajı, onların nasıl 
çalıştığını tamamen biliyor olmanızdır çünkü kendi kodlarınızı daha kolay 
incelersiniz. Dezavantajı ise doğru ve verimli çalışan yeni fonksiyon ve 
sınıfların tasarımı, geliştirilmesi ve bakımının zaman alıcı ve karmaşık bir 
iş olmasıdır.

+ Header Dosyalar:
  
.h ile biten header dosyalar, C++ standard kütüphanelerindeki header 
dosyalar ile değiştirilmiş "eski tarz" öncü dosyalarıdır.

Programcı kendi header dosyalarını oluşturabilir. Programcı tarafından 
tanımlanmış header dosyalar .h ile sonlandırılmalıdır ve çift tırnak("") 
kulanılarak '#include' komutuna eklenirler.
  #include "xxxxxx.h"

  - assert: Makrolar ve programın hatalarının ayıklamasına yardımcı olacak 
  araçları eklemek için gerekli bilgileri içerir. Eski adı 'assert.h'.

  - cctype: Karakterleri bazı özelliklerini test eden fonksiyon prototipleri 
  içerir. 'ctype.h' yerine kullanılır.

  - cfloat: Sistemin, float tipindeki sayılar için limitlerini içerir. 
  'float.h' yerine kullanılır.

  - climits: İntegral limitlerini içerir. 'limits.h' yerine kullanılır.

  - cmath: Matematik kütüphane fonksiyon prototiplerini içerir. 'math.h' 
  yerine kullanılır.

  - cstdio: Standard i/o kütüphane fonksiyonlarının prototiplerini ve bu 
  fonksiyonların kullandıkları bilgileri içerir. 'stdio.h' yerine kullanılır.

  - cstdlib: Sayıları metne, metni sayılara çeviren, hafızada yer ayıran, 
  rastgele sayılar üreten ve diğer çeşitli faydalı fonksiyonların 
  prototiplerini içerir. 'stdlib.h' yerine kullanılır.

  - cstring: C tarzı string işleme fonksiyonlarının prototiplerini içerir. 
  'string.h' herine kullanılır.

  - ctime: Zamanı ve tarihi yöneten fonksiyonların prototiplerini içerir. 
  'time.h' yerine kullanılır.

  - iostream: Standard i/o akış fonksiyonlarının prototiplerini içerir. 
  'iostream.h' yerine kullanılır.

  - iomanip: Veri akışlarını biçimlendirme imkanı sağlayan, akış yönetim 
  fonksiyonlarının prototiplerini içerir. 'iomanip.h' yerine kullanılır.

  - fstream: Disk üzerindeki dosyalara i/o işlemleri yapan fonksiyon 
  prototiplerini içerir. 'fstream.h' yerine kullanılır.

  - utility: Bir çok standard kütüphane header dosyasının kullandığı 
  sınıfları ve fonksiyonları içerir.

  - vector, list, deque, queue, stack, map, set, bitset: Bu header dosyalar, 
  standard kütüphane taşıyıcılarını sağlayan sınıfları içerir. Taşıyıcılar, 
  programın çalışması sırasında verileri saklamak için kullanılır.

  - functional: Standard kütüphane algoritmaları tarafından kullanılan sınıf 
  ve fonksiyonları içerir.

  - memory: Standard kütüphane taşıyıcılarına hafızada yer ayıran standard 
  kütüphane tarafından kullanılan sınıfları içerir.

  - iterator: Standard kütüphane taşıyıcıları içindeki veriye ulaşmak için 
  kullanılan sınıfları içerir.

  - algorithm: Standard kütüphane taşıyıcılarındaki bilgi üzerine işlem yapan 
  fonksiyonları içerir.

  - exception, stdexcept: İstisnai durumları işleyen sınıfları içeren öncü 
  dosyalardır. İstisnalar 23. bölümde anlatılacaktır.

  - string: Standard kütüphanedeki string sınıfının tanımlamasını içerir.

  - sstream: Hafızadan string girişi alan veya hafızaya string gönderen 
  fonskiyon prototiplerini içerir.

  - locale: Farklı dillerin doğal hallerindeki bilgileri(para, tarih..vs.) 
  işlemek için kullanılan sınıf ve fonksiyonları içerir.

  - limits: Her bilgisayar platformu üzerindeki sayısal veri tiplerinin 
  limitlerini belirleyen sınıfları içerir.

  - typeinfo: Çalışma anı tip tanıma yapmak için kullanılan sınıfları içerir.
  (Çalışma anındaki veri tiplerini belirle.)

+ C++, fonksiyon çağrılarının getireceği yükü azaltmak için (özellikle küçük 
programlar için) 'satır içi fonksiyonlar' ı sunar. 'inline' belirtecini 
fonksiyonun tanımlamasındaki geri dönüş tipinin önüne yerleştirmek, 
derleyiciye, o fonksiyonun bir kopyasını, fonksiyon çağrısından kaçınmak 
üzere fonksiyonun kullanıldığı yerde oluşturulmasını "tavsiye eder".

Bunu tercih etmek, fonksiyona yapılan çağrıda kontrolü fonksiyonun tek bir 
kopyasına geçirmek yerine, fonksiyon kodunun bir çok kopyasını programın 
içine yerleştirir ve dolayısıyla programı daha fazla yer kaplar hale 
getirir. Derleyici genellikle küçük fonksiyonlar haricindeki fonksiyonlar 
için(büyük fonksiyonlar) 'inline' belirtecini ihmal edebilir.

+ for döngüsünde kullanılacak sayıcı değişkenler, for yapısının başlığında 
bildirilebilir. Herhangi bir yapının bağlığında bildirilen değişkenler 
yalnızca o yapı bloğu içinde tanımlı, blok dışında tanımsız olurlar.

+ C++, boolean değerleri(0 - 1, true - false, doğru - yanlış) göstermek için 
'bool' veri tipini getirmiştir. 'bool' tipinde bir değişkene, bir tamsayı 
değeri, 'true' ve 'false' anahtar kelimesi atanabilir.

+ C++ anahtar kelimeleri:

  C(C89) ve C++(1998) programlama dillerinde ortak olanlar:
  
  auto      break           case        char                conts
  continue  default         do          double              else
  enum      extern          float       for                 goto
  if        int             long        register            return
  short     signed          sizeof      static              struct
  switch    typedef         union       unsigned            void
  volatile  while

  Yalnızca C++(1998):

  asm       bool            catch       class               const_cast
  delete    dynamic_cast    explicit    false               friend
  inline    mutable         namespace   new                 operator
  private   protected       public      reinterpret_cast    static_cast
  template  this            throw       true                try
  typeid    typename        using       virtual             wvhar_t

+ C++, referans parametreleri kullanarak, referansa göre geçirmenin doğrudan 
bir biçimini sunar. Bu C' den hatırladığımız ilk metod pointer metodudur. 
Bundan farklı ikinci bir metod daha var. Bir fonksiyon parametresinin 
referans ile geçirildiğini belirtmek için fonksiyon prototipinde parametrenin 
tipinden sonra '&' konur. Fonksiyon çağrısında değişkenin ismini kullanmak 
onun referansa göre geçirilmesini sağlar. Değişkeni çağrılan fonksiyonun 
gövdesinde parametre ismiyle kullanmak, aslında çağırılan fonksiyondaki 
orijinal değişkenden bahseder ve çağırılan fonksiyon tarafından orijinal 
değişken doğrudan değiştirilebilir.

  Örneğin: 'int &x' veya 'int& x'

+ Bir referans parametresi, kendisine karşılık gelen argüman için, takma bir 
addır(alias). Referans değişkenlerine bildirimleri esnasında ilk değerleri 
atanmalıdır ve başka değişkenlere referans olarak tekrar atanmamalıdır. Bir 
kez bir takma ad referans olarak bildirildikten sonra, takma ad üzerinde 
yapılan tüm işlemler, aslında orijinal değişken üzerinde yapılır. Takma ad, 
basit olarak orijinal değişkenin bir başka adıdır. Ne referansın adresini 
almak ne de referansları karşılaştırmak yazım hatasına yol açmaz. Referans 
sol değer olmalıdır. Sağ değer, değer döndüren bir sabit ya da deyim olamaz.
  
  Örneğin:
  int sayi = 1; // tamsayi degisken bildirimi
  int &sRef = sayi; // sRef' i sayi' nin takma ismi olarak oluşturma ve atama
  sRef++; // sayi' yi takma adi olan 'sRef' i kullanarak artirma

+ Fonksiyonlar referans döndürebilirler ama bu tehlikeli olabilir. Çağrılan 
fonksiyonda bildirilmiş bir değişkene referans geri döndürürken, değişken o 
fonksiyon içinde 'static' olarak bildirilmelidir. Yoksa fonksiyon sona 
erdiğinde yok edilecek(auto) bir değişkene referans gösterilmiş olur. Böyle 
durumdaki değişkenlere "tanımlanmamış" denir ve programın davranışı tahmin 
edilemez(bazı derleyiciler böyle durumlarda uyarı verir). Tanımlanmamış 
değişkenleri gösteren referanslara, sallantılı referans(dangling reference) 
denir.
  
+ C++, programcıya bir fonksiyonu 'varsayılan argüman(default argument)' 
belirtme ve bu argüman için varsayılan bir değer sağlama imkanı sunar. 
Fonskiyon çağrısı sırasında varsayılan argüman unutulursa, derleyici 
tarafından bu argümanın değeri otomatik olarak eklenir ve çağrıda geçirilir. 
Varsayılan argümanlar, fonskiyonun parametre listesinde en sağdaki argümanlar 
olmalıdırlar. İki veya daha fazla varsayılan argümanı bulunan bir fonksiyonu 
çağırırken, eğer atlanan argüman, argüman listesindeki en sağdaki eleman 
değilse, bu argümanın sağındaki tüm argümanlar da boş bırakılmalıdır. 
Varsayılan argümanlar fonksiyon adının ilk kez geçtiği yerde, genellikle 
prototipte belirtilmelidir. Varsayılan değerler sabit, global değişken veya 
fonksiyon çağrısı olabilir.

+ C++, programcının bir fonksiyonun parametre listesini boş bırakmasına izin 
verir. C++' ta boş parametre listeleri void yazılarak ya da parantezlerin içi 
boş bırakılarak belirtilir.

  void function_1();
  void function_2(void);

Bu ifadeler, fonksiyonun hiç bir argüman almadığını ve hiç bir değer 
döndürmediğini bildirir. Fonksiyon isimleri dışında bu prototipler eşdeğerdir.
  
+ C++' ta boş fonksiyon parametre listesi, C' de olduğundan daha farklı bir 
anlam taşır. C' de bu durum, argüman kontrolünün çağrılmayacağı anlamına 
gelirken(yani fonksiyon çağrısı istenilen herhangi bir argümanı geçirebilir), 
C++' ta ise fonksiyonun argüman almadığı anlamına gelir. Dolayısıyla C 
programları, bu özellik kullanılarak C++' ta derlendikleri zaman yazım 
hataları oluşabilir.

+ Tekli Faaliyet Alanı Çözünürlük Operatörü (::)

C' de(5.bölüm) aynı isimli yerel ve global değişken bildiriminin mümkün 
olduğunu hatırlayacaksınızdır. Bu, yerel faaliyet alanlarında, global 
değişkenin, yerel değişkenden saklanmasına yol açar.

+ C++, yerel faaliyet alanında aynı isimli değişken tarafından saklandığında, 
global değişkene erişim için 'tekli faaliyet alanı çözünürlük operatörü(::)' 
sunar. Fakat, tekli faaliyet alanı çözünürlük operatörü(::), dış bloktaki 
aynı isimli yerel değişkene erişmek için kullanılamaz. C' de olduğu gibi, 
global değişkenin adı faaliyet alanındaki yerel değişkenin adından farklı ise 
global değişkene, tekli faaliyet alanı çözünürlük operatörü kullanılmadan 
doğrudan erişilebilir.

+ Tekli dönüşüm operatörü 'static_cast<float>()', parantez içindeki, işleme 
tabi tutulan operandının ondalıklı sayı biçiminde bir kopyasını oluşturur. 
C++' ta 'static_cast' operatörü, daha önceki bölümlerde bahsedilen C tarzı 
dönüşüm operatörü yerine kullanılmaktadır.

C++, C tarzı dönüşüm operatörü yerine kullanılabilen 'static_cast' dahil 4 
farklı dönüşüm operatörü sağlar. Kalan 3 tanesinden burada bahsedilmeyecek
(belki ileride ben eklerim). Tip dönüşüm işlemleri o kadar karmaşık ve hataya 
açıktır ki, C++ topluluğu, C tarzı dönüşüm operatörünü yeni dönüşüm 
operatörleriyle değiştirmenin, tip dönüşüm işlemlerini basitleştirip hataları 
azaltacağını düşünmüştür.

+ 'setprecision(20)' çağrısı, ondalık noktasının sağından itibaren 20 hane 
duyarlıkta basılacağını belirtir. Bu çağrı, 'parametrize edilmiş akış 
yöneticisi' olarak adlandırılır. Eğer duyarlık belirtilmezse, default 6 hane 
duyarlıkta çıktı üretir.

+ Akış yöneticisi 'setw', bir değerin varsayılan(olarak sağa dayalı olacak 
şekilde) belirlenen genişlikteki alana yazılacağını bildirir. Eğer 
yazdırılacak değer belirtilen alan genişliğinden büyükse, alan genişliği tüm 
değeri kapsayacak şekilde genişletilir. Bu çağrıyı kullanan programların 
'#include <iomanip>' önişlemci komutunu içermesi gerekir.

+ Akış yöneticisi 'setiosflags(ios::fixed | ios::showpoint)', iki çıktı 
biçimlendirme seçeneğini yani 'ios::fixed' ve 'ios::showpoint' i ayarlar. 
Bit düzeyinde 'OR(|)' operatörü, 'setiosflags' çağrısındaki çoklu seçenekleri 
birbirinden ayırır. 'ios::fixed' seçeneği, bir ondalıklı sayı değerinin, 
sabit nokta biçimi olarak adlandırılan biçimde(21.bölümde bahsedilecek 
bilimsel gösterimin aksine) basılmasını sağlar. 'ios:showpoint' seçeneği ise 
ondalık noktanın ve noktanın sağındaki sıfırların da basılmasını sağlar. Bu 
çağrıları kullanan programların '#include <iomaip>' önişlemci komutunu 
içermesi gerekir.

NOT: endl; parametrize edimemiş bir akış yöneticisidir ve '<iomanip>' 
gerektirmez. (Ayrıntılı 'iomanip' 21. bölümde... )

NOT: Genellikle liste halindeki maddeleri ayırmak için virgül(,) kullanılsa 
da, bunlar akış yöneticisi 'setiosflags' ile kullanılamazlar. Kullanılırlarsa 
sadece listedeki son seçenek ayarlanır.

+ C++, birbirinden farklı parametreleri(en azından tipleri göz önüne 
alındığında) olduğu sürece, aynı simli birden fazla fonksiyonun 
tanımlanmasına izin verir. Bu yetenek, fonksiyon aşırıyüklemesi(function 
overloading) olarak adlandırılır. Overload edilmiş fonksiyonlar işaretleriyle 
ayırdedilir. Bir işaret, fonksiyon adı ve paramtre tiplerinin birleşimidir.
Aşırı yüklenmiş bir fonksiyon çağırıldığı zaman, C++ derleyicisi, çağrıdaki 
argümanların sayısını, tipini ve sırasını inceleyerek(isim bozumu, isim 
dekorasyonu da denir) uygun fonksiyonu seçer. Bu tip güvenli bağlamadır(type 
safe linkage).

+ Derleyici, aynı isimli fonksiyonlar arasında ayrım yaparken sadece 
parametre listelerini kullanır. Aşırı yüklenmiş fonksiyonlar farklı geri 
dönüş değerlerine sahip olabilir fakat farklı parametre listeleri olmak 
zorundadır. Sadece dönüş tipleriyle birbirinden ayrılan iki fonksiyon, 
derleme hatasına yol açar. 

+ Overloaded fonksiyonlar, normalde, farklı veri tipleri üzerinde farklı 
programlama mantığı içeren, benzer işlemler yapmakta kullanılırlar. Eğer, 
her veri tipi için programlama mantığı ve işlemler aynı ise, bu işlemler 
fonksiyon taslakları kullanılarak daha toplu ve uygun şekilde yapılabilir.

+ Programcı tek bir fonksiyon taslağı yazar. Bu fonksiyona yapılan çağrılarda
argümanlar verilerek, C++' ın otomatik olarak her bir çağrı tipini tutmak 
için ayrı taslak fonksiyonlar üretmesi sağlanır. Dolayısıyla, tek bir taslağı 
belirlemek, tüm çözüm kümesini belirler(22. bölümde sınıf taslakları...).

+ Fonksiyon taslakları, farklı veri tipleri üzerinde aynı işlemleri yapan 
fonksiyonların oluşturulmasını sağlar. Fakat fonksiyon taslağı sadece bir kez 
tanımlanabilir.

+ Tüm fonksiyon taslağı tanımlamaları 'template' anahtar kelimesi tanımlaması 
ile başlar ve parantez(< >) içinde fonksiyon taslağına resmi tipte 
paramtreler listesi ile devam eder. Her resmi tipte parametre ya 'typename' 
anahtar kelimesiyle, ya da 'class' anahtar kelimesi ile başlar. Resmi tipte 
parametreler, doğal tiplerdir ya da fonksiyona verilen argümanların tipini 
belirtmek, fonksiyonun geri dönüş tipini belirtmek ve fonksiyon gövdesi 
içinde değişken bildirimi yapmak için kullanılan, kullanıcı tarafından 
tanımlanmış tiplerdir.

+ Taslak örneği:

---

template <class T>
T maksimum(T deger1, T deger2, T deger3)
{
    T maks = deger1;
    if(deger2 > maks)
    maks = deger2;
    if(deger3 > maks)
    maks = deger3;

    return maks;
}

---

'maksimum' fonksiyonu tarafından test edilecek veri tipi T resmi tipte 
bildirilmektedir. Derleyici, programın kaynak kodunda 'maksimum' çağrısı 
tespit edildiği zaman, taüm taslak tanımlaması boyunca geçirilen veri tipini 
T yerine koyar ve C++ belirlenen veri tipindeki üç değerin maksimumunu 
belirleyen fonksiyonu oluşturur. Sonra, yeni oluşturulan fonksiyonlar 
derlenir. Dolayısıyla taslaklar, kod oluşturmanın özüdür.

### GENEL PROGRAMLAMA HATALARI

+ Bir C++ fonksiyon tanımlamasında, geri dönüş değer tipini unutmak yazım 
hatasıdır.

+ Referans parametreleri, çağrılan fonksiyonlarda sadece isimleriyle 
kullanıldıklarından, programcı, kasıtlı olmadan referans parametrelerine, 
değere göre çağırma parametresi gibi davranabilir. Bu, orijinal değişkenin 
değeri eğer çağırılan fonksiyon tarafından değiştirilmişse, beklenmedik 
etkiler ortaya çıkartabilir.

+ Bir referans değişkenine bildirildiği esnada ilk değer atamamak yazım 
hatasıdır.

+ Daha önceden bildirilmiş bir referansa, başka bir değişkene takma ad(alias) 
olmak üzere tekrar atama yapmaya çalışmak mantık hatasıdır. Diğer değişkenin 
değeri, referansın şu anda takma ad olduğu değişkene atanmış olur.

+ '&' ın, virgülle ayrılmış değişken isimleri listesine dağıtılacağını 
düşünerek tek bir ifadede çoklu referans bildirmek hatadır.
  
int &x = a, y = b, z = c; veya int &x,y,z yerine
int &x = a, &y = b, &z = c; yazımını kullanın.

+ Çağrılan fonksiyondaki otomatik değişkenlere referans veya pointer geri 
döndürmek mantık hatasıdır. Bazı derleyiciler böyle bir durumla karşılaşınca 
uyarı verir.

+ En sağda olmayan bir argümanı, varsayılan argüman olarak kullanmaya 
çalışırken, aynı zamanda en sağdaki argümanları varsayılan yapmamak yazım 
hatasıdır.

+ Dış bloktaki global olmayan bir değişkene, tekli faaliyet alanı çözünürlük 
operatörü ile erişmeye çalışmak, eğer dış blokta değişkenle aynı isimde 
glabal bir değişken yoksa, yazım hatasıdır, varsa mantık hatasıdır.

+ Aynı parametre listeleri ve farklı dönüş tipleri ile overload edilmiş 
fonksiyonlar oluşturmak yazım hatasıdır.

+ Bir fonksiyon taslağının her tür parametresinin önüne 'class' veya 
'typename' anahtar kelimesinin yerleştirilmemesi yazım hatasıdır.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Eğer bildirimleri bir fonksiyonun başlangıcında yapmayı tercih ederseniz, 
bildirimlerin bittiğini ve çalıştırılabilir ifadelerin başladığını belirtmek 
için bildiririmlerle çalıştırılabilir satırları bir satır boşluk bırakarak 
ayırın.

+ 'inline' belirteci, sadece küçük ve sık kullanılan fonksiyonlar için 
kullanılmalıdır.

+ Varsayılan argümanlar kullanmak, fonksiyon çağrılarını yazarken kolaylık 
sağlar. Fakat bazı programcılar, tüm argümanları açık olarak belrtmenin daha 
okunaklı olduğunu düşünür.

+ Bir programda farklı amaçlar için aynı isimli değişkenler kullanmaktan 
kaçının. Çeşitli durumlarda buna izin verilmiş olsa da, bu kafa karıştırıcı 
olabilir.

+ Birbiriyle oldukça ilişkili işleri yapan fonksiyonları overload etmek, 
programları daha okunaklı ve anlaşılır yapar.

### PERFORMANS İPUÇLARI

+ Kendi yazacağınız fonksiyon ve sınıflar yerine, bunların karşılığı olacak 
standard kütüphane fonksiyon ve sınıfların kullanmak, program performansını 
artırır. Çünkü bunlar, verimli çalışmaları için özenle yazılmışlardır.

+ 'inline' fonksiyonları kullanmak, çalışma zamanını azaltabilir fakat 
programın boyutnunu artırabilir.

+ Değere göre çağırmanın bir dezavantajı, eğer büyük bir veri geçirilecekse, 
tüm veriyi kopyalamanın önemli miktarda çalışma zamanı gerektirmesidir.

+ Referansa göre çağırma, büyük miktardaki veri kopyalaması sorununu ortadan 
kaldırdığından, performans açısından iyi bir yoldur.

+ Büyük nesneleri geçirirken, değere göre çağırmanın görünüş ve güvenliğine 
benzetmek ve büyük nesnelerin kopyalarını geçirmekten kaçınmak için sabit 
referans parametrelerini kullanın.

### TAŞINABİLİRLİK İPUÇLARI

+ Kıyaslanabilir sürümlerini kendiniz yazmak yerine, standard kütüphane 
fonksiyon ve sınıfların kullanmak, program taşınırlığını artıracaktır. Çünkü 
bu yazılımlar, sanal olarak tüm C++ sürümlerine dahil edilmiştir.

+ C++' ta boş fonksiyon parametre listesi, C' de olduğundan daha farklı bir 
anlam taşır. C' de bu durum, argüman kontrolünün çağrılmayacağı anlamına 
gelirken(yani fonksiyon çağrısı istenilen herhangi bir argümanı geçirebilir), 
C++' ta ise fonksiyonun argüman almadığı anlamına gelir. Dolayısıyla C 
programları, bu özellik kullanılarak C++' ta derlendikleri zaman yazım 
hataları oluşabilir.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ Programları oluştururken 'blok yığma' yaklaşımını kullanın. Tekerleği 
yenden icad etmekten kaçının. Var olan parçaları mümkün olduğunca kullanın. 
Buna 'yazılımın yeniden kullanımı' denir ve bu, nesne yönelimli 
programlamanın temelini oluşturur.

+ C++' ta programlama yaparken, şu temel bileşenleri kullanacaksınız: C++ 
standard kütüphanesindeki sınıf ve fonksiyonlar, kendi kendinize yazacağınız 
sınıf ve fıonksiyonlar, üçüncü taraf üreticileri tarafından sağlanan çeşitli 
popüler kütüphanelere ait sınıf ve fonksiyonlar.

+ Fonksiyon prototipleri C++' ta gereklidir. Standard kütüphane prototipleri 
için '#include' önişlemci komutunu kullanın.

+ 'inline' fonksiyonda yapılacak herhangi bir değişiklik, fonksiyonu kullanan 
her programın yeniden derlenmesini gerektirir. Bui bazı program geliştirme ve 
bakım durumarlında gözle görülür ölçüde etkili olur.

+ Referansa göre çağırma, güvenliği azaltabilir. Çünkü çağırılan fonksiyon, 
çağırıcının verisini bozabilir.

+ Performans ve okunurluk gerekçelerinin birleşimi olarak, birçok C++ 
programcısı şunları tercih eder:
  - değiştirilebilir argümanları pointer ile geçirmeyi
  - küçük, değiştirilemez argümanları değere göre çağırma ile geçirmeyi
  - geniş, değiştirilemez argümanları da sabitlerle referans kullanımıyla 
    geçirmeyi

---

## 16. BÖLÜM (C++ Sınıfları ve Veri Soyutlama)

### TERİMLER

+ abstract data type: soyut veri tipi
+ access function: erişim fonksiyonu
+ attribute: nitelik
+ behaviour: davranış
+ class decleration: sınıf bildirimi
+ class definition: sınıf tanımı
+ class scope: sınıf faaliyet alanı
+ client of a class: bir sınıfın istemcileri
+ constuctor: yapıcı, inşa edici
+ data abstraction: veri soyutlama
+ data member: veri üyesi
+ data type: veri tipi
+ default constructor: varsayılan yapıcı
+ destructor: yıkıcı
+ encapsulation: depolama, sarmalama
+ extensibility: genişletilebilirlik
+ global object: global nesne
+ implementation of a class: bir sınıfın yapılışı/uygulaması
+ information hiding: bilgi saklama
+ inline member function: satır içi üye fonksiyonu
+ interface: arayüz
+ memberwise copy: üye düzeyinde kopyalama
+ query function: sorgu fonksiyonu
+ rapid application development: hızlı uygulama geliştirme
+ reusable code: yeniden kullanılabilir kod
+ utility function: hizmet fonksiyonu

### ÖZET

+ Nesne Yönelimli Programlama(NYP):

sınıf: class, veri: data

NYP, veriyi(niteikleri) ve fonksiyonları(davranışları) 'sınıf(class)' adı
verilen paketlerin içinde depolar. Örneğin: Kuş(class); baykuş, karga(nesne). 

Sınıflar 'bilgi saklama' özelliğine sahiptir. Bu, sınıf nesnelerinin birbiri
ile iyi tanımlanmış 'arayüzler' ile nasıl haberleşeceğini bilmelerine rağmen,
diğer sınıfların nasıl yapıldıklarını bilmelerine izin verilmediği anlamına
gelir. Yapımın detayı, sınıfların kendi içinde gizlidir. Motorun, yürüyen
aksamın, fren sisteminin nasıl çalıştığını bilmeden de araba sürülebilir
olduğu gibi... 

C' de ve diğer yordalsal programlama dillerinde programlama, 'olay yönelimli'
olma eğilimindeyken, C++' da programlama, ideal olarak 'nesne yönelimli' dir.
C' de programlamanın yapı taşı 'fonksiyon', C++' da ise nesnelerin
oluşturulduğu 'sınıf' lardır. 

C programcıları, fonksiyonları yazmak üzerine yoğunlaşır. Bazı görevleri
yerine getiren olaylar grubu fonksiyonları, fonksiyonlar da programları
oluşturacak şekilde gruplanır. Veri(data) C' de de önemlidir fakat buradaki
yaklaşım, verinin öncelikle fonksiyonların gerçekleştirdiği olayları
desteklemek için var olduğudur.

C++ programcıları ise, 'sınıf(class)' adı verilen kendilerine ait 'kullanıcı
tanımlı veri tipleri' ni oluşturma üstüne yoğunlaşırlar. Sınıflar, programcı
tanımlı tipler olarak da bilinirler. Her bir 'class', hem verinin kendisini,
hem de veriyi yöneten fonksiyonları içerir. Bir sınıfın veri bileşenlerine
'veri üyeleri' denir. Bir sınıfın fonksiyon bileşenlerine ise 'üye
fonksiyonlar(diğer NYP dillerinde method(yöntem))' denir.

C++' taki sınıflar, 10. bölümdeki 'struct' fikrinin doğal bir evrimidir.
Hatırlarsanız bir 'struct', birbiri ile ilgili değişkenlerin(veri) bir araya
toplanmasıydı. Sınıflar ise hem değişkenleri(veri üyeleri) hem de bu verileri
yönetecek fonksiyonları(üye fonksiyon) içerir.

İleride sınıfların yeni 'soyut veri tipleri' oluşturmak için sağlam bir yol
sağladığını göreceğiz.

+ Sınıflar, programcıya, nitelikler(veri üyeleri) ve davranışları/işlemleri
(üye fonksiyonları) olan nesneler modelleme yeteneği verir. 'class' anahtar
kelimesi kullanarak sınıf tanımlanır.

+ Üye fonksiyonlar bazen diğer NYP dillerinde method/metod/yöntem olarak
adlandırılırlar ve 'nesneye gönderilen mesajlara yanıt vermek üzere'
çağırılırlar. Bir mesaj, bir nesneden bir diğerine ya da bir fonksiyondan bir
nesneye gönderilen üye fonksiyon çağrısına karşılık gelir.

+ Sınıf bir kez tanımlandıktan sonra, sınıf adı o sınıfın nesnelerinin
bildiriminde kullanılır.

---
class Zaman{
public:
    Zaman();
    void zaman_ayarla(int, int, int);
    void askeri_yaz();
    void standard_yaz();
private:
    int saat; //0-23
    int dakika; //0-59
    int saniye; //0-59
}; // sondaki noktalı virgülü(;) unutma! struct gibi...

---

'public:' ve 'private:' etiketleri 'üye erişim belirteçleri' olarak
adladırılır.

'public:' altındaki üye fonksiyon prototiplerine, 'genel üye fonksiyonları,
genel servisleri, genel davranışları' veya 'arayüzleri' denir. Bu
fonksiyonlar, sınıfın istemciler(yani programın bu sınıfın kullanıcısı olan
parçaları) tarafından sınıfın verisini yönetmek için kullanılacaktır. Sınıfın
veri üyeleri ise, sınıfın üye fonksiyonları ile istemcilerine sağladığı
servislerin teslimatına yardım eder. Bu servisler, istemci kodun, sınıfın bir
nesnesi ile etkileşime geçmesine izin verir.

Sınıfla aynı isindeki üye fonksiyona(Zaman();) sınıfın 'yapıcı/constructor'
fonksiyonu adı verilir. Bir yapıcı, sınıf nesnesinin veri üyelerine ilk değer
atama işlemini yapan özel bir üye fonksiyondur. Bir sınıf yapıcı fonksiyon, o
sınıfın bir nesnesi oluşturulduğunda otomatik olarak çağrılır. Bir sınıf için
bir kaç yapıcı fonksiyona sahip olmanın yaygın olduğunu göreceğiz. Bu,
fonksiyon overloading ile yapılmaktadır. Yapıcı için bir dönüş tipi
belirtilmediğine dikkat ediniz!

'private:' üye erişim belirtecinden sonra üç tamsayı üye görülüyor. Bu,
sınıfın bu üyelerinin yalnızca sınıfın üye fonksiyonları tarafından
erişilebilir olduklarını(ve bir sonraki bölümde göreceğimiz gibi sınıfın
'friend'i olduklarını) belirtir. Normalde, veri üyeleri 'private:', üye
fonksiyonlar da 'public:' kısımda listelenir. Daha sonra göreceğimiz gibi
'private:' üye fonksiyonlarına veya 'pubblic:' veri üyelerine sahip
olunabilir. Bu durum yaygın değildir ve zayıf programlama örneği olarak
değerlendirilir.

Sınıf bir kez tanımlandıktan sonra şu şekillerde tip olarak kullanılabilir:
  1. Zaman gun_batimi: // Zaman tipinde bir nesne
  2. zaman_dizisi[5]: // Zaman nesnelerinin bir dizisi
  3. *zamanPtr: Zaman nesnesini gösteren bir pointer
  4. &kahvalti_zamani = gun_batimi: // Yukarıdaki Zaman nesnesine referans

Sınıf adı, yeni bir tip belirteci olur. Tıpkı 'int' tipinde birçok değişken
olabileceği gibi, bir sınıfın da bir çok nesnesi olabilir. Programcı ihtiyaç
duydukça yeni sınıf tipleri oluşturabilir. Bu C++' a 'genişletilebilir' bir
dil denme sebeplerinden biridir.

+ Yapılar, diğer tiplerin verilerini kullanarak yapılan, birbiriyle ilişkili
veri tipleridir.

+ 'struct' anahtar kelimesi, yapı tanımlamasını gösterir. Bir yapının gövdesi
küme parantezleriyle({}) sınırlandırılmıştır ve her yapı tanımlaması noktalı
virgülle sonlandırılır(;).

+ Bir yapı etiket adı, yapı tipinde değişkenler bildirilirken kullanılabilir.

+ Yapı tanımalamaları hafızada yer kaplamaz, değişkenler bildirmek için
kullanıan yeni veri tipleri oluştururlar.

+ Bir yapının veya sınıfın üyelerine, üye erişim operatörleri kullanılarak
erişilebilir. Bunlar; nokta operatörü(.) ve ok operatörüdür(->). Nokta
operatörü(.), bir yapı üyesine, nesnenin değişken adı ile ya da nesneye bir
referans ile erişir. Ok operatörü(->), bir yapı üyesine nesneyi gösteren bir
pointer ile erişir.

+ 'struct' lar ile yeni veri tipleri oluşturmanın doğuracağı sorunlar şunlar;
  - ilk değeri atanmamış veriye sahip olma olasılığı,
  - düzgün olmayan ilk değer atama,
  - eğer 'struct' yapılışı değiştirilirse, 'struct' kullanan tüm programların
    değiştirilme zorunluluğu,
  - verinin düzgün değerler kullanılarak tutarlı bir durumda olduğundan emin
    olmayı sağlayacak bir korumanın olmayışıdır.

+ Sınıflar, programcıya, nesneleri, davranışlar ve niteliker ile modelleme
imkanı sağlar. Sınıf tipleri, C++' ta 'class' ve 'struct' anahtar kelimeleri
kullanılarak tanımlanır. Fakat, normalde 'class' bu amaçla kullanılır.

+ Bir sınıfın nesnelerini bildirmek için sınıf adı kullanılır.

+ Sınıf tanımlamaları 'class' anahtar kelimesi ile başlar. Sınıf gövdesi küme
parantezleri({}) arasına alınır. Sınıf tanımlaması noktalı virgül(;) ile
sonlandırılır.

+ Bir sınıfta 'public:' ten sonra bildirilen herhangi bir veri üyesine veya
üye fonksiyona, sınıfın nesnesine erişimi olan herhangi bir fonksiyon
tarafından erişilebilir.

+ 'private:' tan sonra bildirilen herhangi bir veri üyesi veya üye fonksiyon,
sadece 'friend' ler ve diğer sınıf üyeleri tarafından görülebilir.

+ Üye erişim belirteçleri sonuna her zaman iki nokta üst üste(:) konur ve
sınır tanımlamasında herhangi bir sırada birçok kez kullanılabilir.

+ Özel veriye sınıf dışından erişilemez.

+ Bir sınıfın yapılışı, istemcilerden saklanmalıdır.

+ Bir yapıcı, sınıfla ayın ismi olan bir üye fonksiyondur ve sınıfın
nesnesinin üyelerine ilk değerlerini atamak için kullanılur. Bir sınıf
yapıcısı, sınıf nesnesi oluşturulduğunda çağrılır.

+ Sınıf adıyla aynı isimde olan fakar önünde tilda karakteri(~) olan üye
fonskiyona, yıkıcı denir.

+ Bir sınıfın 'public' üye fonksiyonlarına, o sınıfın arayüzü veya genel
arayüzü denir.

+ Sınıfın tanımlaması, sınıfın veri üyelerinin ve sınıfın üye fonksiyonlarının
bildirimini içerir. Üye fonksiyon bildirimleri, fonksiyon prototipleridir. Üye
fonksiyonlar sınıfın içinde de tanımlanabilir fakat sınıf tanımlamasının
dışında yapmak iyi programlama alıştırmasıdır. Böyle yapıldığında arayüzü,
sınıfın yapılışından ayırır. Böylece bir sınıfın istemcileri, o sınıfın üye
fonksiyonlarının yapılışını göremez ve yapılış değiştirildiğinde tekrar
derlenmeyi gerektirmez.

+ Sınıf tanımlandıktan ve üye fonksiyon prototipleri bildirildikten sonra üye
fonksiyonlar sınıf tanımlaması dışında tanımlanmalıdır.

+ Bir üye fonksiyon, sınıf tanımlaması dışında tanımlanırken, fonksiyon adının
önüne sınıf adı ve ikili faaliyet alanı çözünürlük operatörü(::) konur.

+ Bir sınıf tanımlaması dışında, faaliyet alanı çözünürlük operatörü(::)
kullanılarak tanımlanan üye fonksiyonlar, sınıfın faaliyet alanı içindedir.
Çünkü farklı sınıfların aynı isimli üye fonksiyonları olabileceğinden,
faaliyet alanı çözünürlük operatörü(::), üye fonksiyonu belirtilen sınıf adına
"bağlar".
  
  Zaman::zaman_ayarla(13, 21, 07);

+ Bir sınıf tanımlaması yapılırken bildirilen üye fonksiyon prototipi, o
sınıfın tanımlamasının dışında tanımlanabildiği halde, bu üye fonksiyon hala
'sınıf faaliyet alanı' içindedir. Yani sınıfın bir nesnesi, sınıfın bir
nesnesine referans veya sınıfın bir nesnesini işaret eden bir pointer
tarafından çağırılmadıkça, adı sadece diğer üye fonksiyonlar tarafından
bilinir.

+ Sınıf tanımlaması içinde tanımlanan üye fonksiyonlar, otomatik olarak inline
fonksiyon yapılır. Sınıf tanımlaması dışında tanımlanan üye fonksiyonlar,
'inline' anahtar kelimesi kullanılarak satır içi fonksiyon yapılabilirler.
Derleyici, bir fonksiyonu inline yapıp yapmama hakkını saklı tutar.

+ Üye fonksiyonları çağırmak, yordamsal programlamadaki fonksiyonları
çağırmaktan daha güvenilirdir çünkü üye fonksiyonlar tarafından kullanılan
veri, nesne içinde doğrudan erişilebilecek şekilde bulunur.

Örneğin;

---
class Zaman{
public:
    Zaman();
    void zaman_ayarla(int, int, int);
    void askeri_yaz();
    void standard_yaz();
private:
    int saat; //0-23
    int dakika; //0-59
    int saniye; //0-59
}; // sondaki noktalı virgülü(;) unutma! struct gibi...
---

'void askeri_yaz()' ve 'void standard_yaz()' fonksiyonları argüman almıyor
olsalar da özel bir Zaman nesnesinin veri üyelerini yazdırdıklarını kapalı bir
biçimde bilirler. Bu yüzden, üye fonksiyon çağrılarının yordamsal programlama
dillerinin geleneksel fonksiyon çağrılarından daha kısa sürmesini sağlar.

+ Genellikle sınıfların sıfırdan oluşturulmasına gerek yoktur. Çünkü bu
sınıflar da kendilerinden türeyen yeni sınıflar gibi, kendilerinin kullanacağı
davranışları ve nitelikleri içeren başka sınıflardan türetilir, ya da diğer
sınıfların nesnelerini üye olarak içerebilirler. Böylece yazılım 'tekrar
kullanılabilir' olur, üretkenlik artar. Bu kitabın merkezi teması 'Tekrar
kullan!' dır. 

+ Varolan sınıflardan yeni sınıflar üretmeye 'kalıtım' denir. 'Kalıtım' 19.
bölümde ele alınacaktır. Sınıf nesnelerini, diğer sınıfların üyesi olarak
eklemeye 'Birleşim(mixin)' denir. Birleşim(mixin) 17. bölümde ele alınacaktır.

+ NYP' de nesnelerin büyük yer kapladığı düşünülebilir. Mantık olarak
doğrudur.  Programcı nesnelerin veri fonksiyonları içerdiğini düşünebilir ama
fiziksel olarak bu doğru değildir. Gerçekte sadece nesneler veri içerirler ve
dolayısıyla fonksiyonları da içerdiğini düşündüğünüz halinden oldukça
küçüktürler. 'sizeof' operatörünü bir sınıf adına veya sınıfın bir nesnesine
uygulamak, size sadece sınıf verisinin boyutunu verecektir. Derleyici, sınıfın
tüm nesnelerinde, ayrı olarak üye fonksiyonların sadece bir kopyasını üretir.
Sınıfın tüm nesneleri, bu tek kopyayı kullanır. Fakat her bir nesne, sınıf
verisinin kendisine ait bir kopyasını tutar. Çünkü bu veri, nesneden nesneye
değişebilir. Fonksiyonun kodu(yeni eklenen kod ya da saf yordam da denir)
değiştirilemez ve dolayısıyla bir sınıfın tüm nesneleri arasında
paylaştırılabilir.

+ Bir sınıfın veri üyeleri(sınıf tanımlaması içinde bildirilen değişkenler) ve
üye fonksiyonları(sınıf tanımlamasında bildirilen fonksiyonlar/prototipler),
bu sınıfın faaliyet alanına sahiptir. Üye olmayan fonksyonlar, dosya faaliyet
alanına sahiptir.

+ Bir sınıfın faaliyet alanı içinde, sınıf üyelerine , sınıfın tüm üye
fonksiyonları tarafından erişilebilir sınıf üyelerine sadece isimleriyle
referans gösterilebilir. Sınıfın faaliyet alanı dışında sınıf üyeleri, bir
nesnenin tutamaklarından birisi üzerinden referans gösterilir. Şöyle ki; 
  - bir nesne adıyla, 
  - nesneye bir referans ile,
  - nesneye bir pointer ile referans gösterilebilir.

NOT: 17. bölümde anlatılacağı üzere, bir nesnenin üye fonksiyonuna veya veri
üyesine, her referansta, derleyici kapalı olarak bir tutamak ekler.

+ Bir sınıfın üye fonksiyonları overload edilebilir. Bu işlem yalnızca sınıfın
diğer üye fonksiyonları tarafından yapılabilir. Bir üye fonksiyonu overload
etmek için sınıf tanımlaması içine, overload edilecek fonksiyonun her
versiyonu için bir prototip koyun ve fonksiyonun her bir versiyonunun
tanımlamasını ayrı ayrı yapın.

+ Üye fonksiyonun içinde tanımlanmış değişkenler, fonksiyonun faaliyet alanına
sahiptirler. Sadece bu fonksiyon tarafından bilinirler. Eğer bir üye
fonksiyon, sınıf faaliyet alanındaki bir değişkenle aynı isimde bir değişken
tanımlarsa, sınıf faaliyet alanındaki değişken, fonksiyon faaliyet alanı
içindeki değişken tarafından gizlenir. Bu tür bir gizli değişkene, önüne sınıf
adı ve faaliyet alanı çözünürlük operatörü(::) konularak erişilebilir. Gizli
global değişkenlere, tekli faaliyet alanı çözünürlük operatörü(::)
kullanılarak erişilebilir.

+ Bir yapının veya sınıfın üyelerine, üye erişim operatörleri kullanılarak
erişilebilir. Bunlar; nokta operatörü(.) ve ok operatörüdür(->). Nokta
operatörü(.), bir yapı üyesine, nesnenin değişken adı ile ya da nesneye bir
referans ile erişir. Ok operatörü(->), bir yapı üyesine nesneyi gösteren bir
pointer ile erişir.

+ İyi yazılım mühendisliğinin temel prensipleri, arayüzü uygulamadan
(yapılıştan) ayırmaktır. Bu, programların daha kolay değiştirilmesini sağlar.
İstemci göz önüne alındığında, bir sınıfın istemciye sunduğu arayüz
değişmediği sürece, sınıfın yapılışındaki değişiklikler istemciyi etkilemez
(sınıfın fonksiyonelliği, orijinal arayüzün ötesinde genişletilebilir).

+ Gerçekte her şey bu kadar pembe değildir. Header dosyalar, yapılışın bazı
kısımları ve yapılışla alakalı ipuçları verir. Örneğin, satır içi üye
fonksiyon tanımlarının, header dosya içinde olması gerekmektedir. Çünkü
derleyici, istemciyi derlerken, istemci 'inline' fonksiyon tanımöamalarını
kullanıldıkları yere yerleştirebilmelidir. 'private' üyeler, header dosya
içindeki sınıf tanımlamasında listelenir, böylece istemciler erişememelerine
rağmen bu üyeler, istemciler tarafından görülebilir.

+ Sınıf tanımlamaları normalde header dosyalar içinde, üye fonksiyon
tanımlamaları da normalde aynı isimli kaynak kodu dosyaları içine konur.
Header dosyalar, sınıfın kullanıldığı her dosyaya '#include' ile eklenir ve
kaynak kodu dosyası, ana program dosyası ile derlenip bağlanır.

NOT: Çoklu kanak dosyalardan oluşan programların nasıl derlenip bağlandığını
öğrenmek için derleyicinizin belgelerini inceleyin.

+ Sınıf bildirimi şu önişlemci komutları arasına yapılır:

---

// header dosyanın birçok kez eklenmesini engellemek için
#ifndef XXXXX_H
#define XXXXX_H
    sınıf bildirimi kodları
    ...
    ...

#endif

---

NOT: Önişlemci komutundaki sembolik sabitin ismini verirken uyguladığımız
gelenek, header dosya adındaki nokta yerine alt çizgi(_) koymaktır.

+ 'public:', 'private:' ve 'protected:' üye erişim belirteçleri, bir sınıfın
veri üyelerine ve üye fonksiyonlarına erişimi kontrol etmekte kullanılır. Bu
bileşenler, sınıfın yapılışını(uygulamasını) oluşturur.

+ Sınıflara varsayılan erişim modu 'private' dir. Böylece sınıf başlığından
sonraki ve ilk üye erişim belirtecinden önceki tüm üyeler 'private' kabul
edilir.

+ Her üye erişim belirtecinden sonra, bir sonraki üye erişim belirtecine veya
sonlandırma küme parantezine(}) kadar, bu üye erişim belirtecinin çağırdığı
mod geçerli olur.

+ Üye erişim belirteçleri karışık tekrarlanabilir fakat böyle bir kullanım
nadiren gözlemlenir ve kafa karıştırıcı olabilir.

+ Bir sınıfın 'private' üyelerine, sadece, o sınıfın üye fonksiyonları ve
'friend' leri(17. bölüm) tarafından erişilebilir. 'public' üyelere ise program
içindeki herhangi bir fonksiyon tarafından erişilebilir.

+ Bir sınıfın 'public' üyeleri, sınıfın istemcilerine sağladığı hizmetlere
bir bakış sunar. Bu servis kümesi, sınıfın genel arayüzünü oluşturur.
İstemcilerin, sınıfın görevlerini ne şekilde yerine getirdiklerini ile
ilgilenmesine gerek yoktur.

+ Sınıf verisinin 'private' olması, istemcilerin veriyi etkileyemeyeceği
anlamına gelmez. Veri, üye fonksiyonlar veya 'friend' fonksiyonlar tarafından
değiştirilebilir. Bu fonksiyonlar, verinin bütünlüğünü garanti edecek şekilde
tasarlanmalıdır.

+ Bir sınıfın 'private' verisine erişim, erişim fonksiyonları denen üye
fonksiyonlar kullanılarak dikkatlice kontrol edilebilir. Eğer bir sınıf,
istemcilerin 'private' bir veriyi okumasına izin vermek isterse, bir
'oku()/get()' fonksiyonu sağlayabilir. İstemcilerinin, 'private' veriyi
değiştirmesine olanak tanımak için 'ayarla()/set()' fonksiyonu sunabilir.

+ get() / set()

  get():
  
  - Özel bir veri değerinin, istemci tarafından okunması sağlanabilir.
  - Veriyi ham biçimde vermek yerine, düzenleyip, istemcinin veriyi sınırlı
    şekilde görmesi sağlanabilir.

  set():

  - İstemcinin özel bir veriyi değiştirmesi sağlanabilir.
  - Özel veri anlayışını çiğnediği düşünülse de veri doğrulama yeteneği de
    sunabilir.
  - Verinin arayüzdeki ve uygulamadaki biçimleri arasında çevrimi
    sağlayabilir.

NOT: Sınıfın her özel veri üyesi için set()/get() sunmasına gerek yoktur. Bu
imkan, yalnızca uygun olduğunda sağlanmalıdır. Bu tür bir servis istemci için
kullanışlı olacaksa sınıfın özel değil genel arayüzünde verilmelidir.

NOT: Bir sınıfın veri üyelerini 'private', üye gonksiyonlarını 'public' yapmak
hata ayıklama imkanını artırır; çünkü veri yönetiminde oluşabilecek problemler
sınıfın üye fonksiyonlarına veya 'friend' lerine indirgenmiş olur.

+ Normalde sınıfın veri üyeleri 'private' ve üye fonksiyonları da 'public'
yapılır. Bazı üye fonksiyonlar 'private' olabilir ve sınıfın diğer
fonksiyonlarına hizmet fonksiyonu olarak fayda sağlar.

+ Üye fonksiyonlar birkaç farklı kategoride toplanabilir:
  - özel veri üyelerinin değerlerini okuyup döndüren fonksiyonlar,
  - özel veri üyelerinin değerlerini ayarlayan fonksiyonlar,
  - sınıfın servislerini oluşturan fonksiyonlar,
  - sınıf için, sınıf nesnelerine ilk değerlerini atamak, sınıfların doğal
    tiplerle veya diğer sınıflarla çevirisini sağlamak, sınıf nesneleri için
    hafızayı yönetmek gibi mekanik görevleri yapan fonksiyonlar.

+ Erişim fonksiyonları veriyi okuyup görüntüleyebilir. Erişim fonksiyonlarının
bir başka yaygın kullanım alanı da koşulların doğruluğunu veya yanlışlığını
kontol etmektir. Bu tür fonksiyonlara genelde 'doğrulayıcı fonksiyonlar'
denir.

+ Bir sınıfın veri üyelerine sınıf tanımlamasında ilk değer atanamaz. Bunun
yerine, bir yapıcı tarafından ilk değerler atanmalıdır veya nesne
oluşturulduktan sonra ayarlanmalıdır. Bir yapıcı, sınıf ile aynı isme sahip
sınıf üye fonksiyonudur. Programcı, yapıcı fonksiyonu sınıf tanımlaması içine
sınıf ismiyle aynı isimde kodlar, sonra o sınıftan bir nesne oluşturuldukça
yapıcı otomatik olarak çağrılır.

+ Yapıcılar, sınıf nesnelerine çeşitli biçimde ilk değer atamak için overload
edilebilir. Veri üyelerine, ya yapıcı tarafından ya da nesne oluşturulduktan
sorna ayarlamak suretiyle ilk değerleri atanmalıdır. Fakat iyi programlama ve
yazılım mühendisliği açısından, herhangi bir istemci kod tarafından üye
fonksiyonlar çağırılmadan önce, nesnenin ilk değerlerinin tamamen atanmış
olduğundan emin olun.

+ Bir sınıfın nesnesine ilk değeri düzgün biçimde atandıktan sonra, nesneyi
yöneten tüm üye fonksiyonlar, nesnenin tutarlı bir durumda bulunduğundan emin
olmalıdır. Genel olarak, nesnenin düzgün biçimde ilk değerinin atanmış
olduğundan emin olmak için istemci koda güvenmeyin.

+ Bir sınıf nesnesi bildirilirken, ilk değer atayıcılar kullanılabilir. Bu ilk
değer atayıcılar, sınıfın yapıcısına geçirilir.

    Zaman::Zaman(){saat = dakika = saniye = 0;}

    veya

    Satici::Satici()
    {
        for(int i = 0; i < 12; i++)
        satislar[i] = 0.0;
    }

+ Programcının açık olarak yapıcıyı çağırmamasına rağmen, yazdığı başka
kodlar, yapıcılara geçirilmek üzere veri sağlayabilir.

+ Yapıcılar, varsayılan argüman belirleyebilir. Bu sayede, nesne oluştururken
yapıcıya ilk değer verilmese bile, varsayılan argümanlar vasıtasıyla nesneye
tutarlı ilk değer ataması gerçekleştirilmiş ve değer ataması garanti altına
alınmış olur.

+ Programcı tarafından, varsayılan argümanlar ile birlikte verilmiş olan ya da
açık olarak argüman gerektirmeyen yapıcı, aynı zamanda varsayılan yapıcıdır.
Her sınıf için yalnızca bir tane yapıcı olabilir.

+ Yapıcılar dönüş tipi ya da dönüş değeri belirleyemezler.

+ Sınıfın yapıcısının veya üye fonksiyonunun gerek duyduğu fonksiyonelliği,
bir başka üye fonksiyon zaten sağlıyorsa, yapıcı veya üye fonksiyon içinde bu
fonksiyonu çağırın. Bu kodun bakımını kolaylaştırır ve kodun
değiştirilmesinden ortaya çıkacak hata ihtimalini azaltır. Genel bir kural
olarak kodun tekrarından kaçının!

+ Varsayılan fonksiyon argümanlarının değerini, sadece header dosya içinde
bulunan sınıf tanımlamasındaki fonksiyon prototiplerinde bildirin.

+ Bir metodun varsayılan argümanlarındaki herhangi bir değişiklik, istemci
kodun tekrar derlenmesini gerektirir. Eğer varsayılan argüman değerleri
değişecek gibiyse, overload edilmiş fonksiyonlar kullanın. Böylece, üye
fonksiyonların yapılışı değişirse de, istemci kodun tekrar derlenmesine gerek
kalmaz.

+ Eğer bir sınıf için hiç bir yapıcı tanımlanmamışsa, derleyici bir varsayılan
yapıcı oluşturur. Derleyici tarafından sağlanan bir varsayılan yapıcı, hiç bir
ilk değer atama işlemi gerçekleştiremez. Dolayısıyla, nesnenin,
oluşturulduğunda tutarlı bir durumda bulunduğu garanti edilemez.

+ Bir yıkıcı, sınıfın özel bir üye fonksiyonudur. Yıkıcının adı, sınıf adının
önüne tilda karakteri(~) konmuş halidir. Bu isim verme şeklinin, sezgisel bir
çekiciliği de vardır çünkü bir sonraki bölümde göreceğimiz gibi, tilda
operatörü(~) bit düzeyinde tümleyen alma operatörüdür ve anlamlı bir şekilde
yıkıcı, yapıcının tersidir.

+ Otomatik bir nesnenin yıkıcısı, nesne yok edilirken(örneğin, nesne
faaliyet alanı dışına çıktığında çağırılır. Yıkıcının kendisi aslında
nesneyi yıkmaz, fakat sistem nesnenin hafıza alanını almadan önce
sonlandırma temizliği yapar. Böylece hafıza, yeni nesnelerin tutulması için
tekrar kullanılabilir.

+ Yıkıcılar hiç bir parametre almaz ve değer döndürmezler. Bir sınıfın
yalnızca bir yıkıcısı olabilir ve yıkıcılar overload edilemez.

+ 18. bölümde yıkıcıların dinamik hafıza tahsisi(örneğin diziler, stringler)
yapan sınıflar için çok uygun olduklarını göreceğiz. 17. bölümde ise nasıl
dinamik hafıza tahsisi yapacağımızı ve dinamik hafızayı nasıl boşaltacağımızı
göreceğiz.

+ Yapıcılar ve yıkıcıların C++ için önemi büyüktür! 

+ Yapıcı ve yıkıcılar otomatik olarak çağırılırlar. Bu fonksiyonların
çağırılış sırası, programın çalışmasıın oluşturulan nesnelerin faaliyet
alanına girişi ve çıkışlarının sırasına bağlıdır. Genel olarak yıkıcı
çağrıları, yapıcı çağrılarıyla ters sırada gerçekleşir. Fakat, nesnelerin
depolama sınıfı, yıkıcıların çağrılış sırasını değiştrebilir.

+ Dosya çalıştırılmaya başlandığında(dosyalar arasındaki global nesne
yapıcıların sırası garanti edilememesine rağmen), global faaliyet alanında
tanımlanmış nesneler için yapıcılar, tüm diğer fonksiyonlardan önce(main de
tüm bu fonksiyonlara dahildir!) çağrılır. Karşılık gelen yıkıcılar, 'main()'
sona erdiğinde yada 'exit()' fonksiyonu(14.bölüm) kullanıldığında çağrılır.
Program 'abort()' fonksiyonuyla sonlandırılırsa, global nesneler için yıkıcı
çağırılmaz.

+ Otomatik nesneler için yapıcılar, programın çalışması, nesnelerin
tanımlandığı yere geldiğinde çağrılır. Yıkıcılar, nesne faaliyet alanından
çıktığında(yani içinde tanımlandıkları bloktan çıktığında) çağrılır. Otomatik
nesneler için yapıcı ve yıkıcılar, nesne faaliyet alanına her girip çıktığında
çağrılır. Otomatik nesneler için yıkıcılar, program 'exit()' ya da 'abort()'
fonksiyonu ile sonlandırıldıysa çağrılmazlar.

+ Yapıcılar, 'static' yerel nesneler için sadece bir kez, programın çalışması
nesnenin tanımlandığı yere geldiğinde çağrılır. Karşılık gelen yıkıcılar ise,
'main()' sonlandığında veya 'exit()' kullanıldığında çağrılır. Yıkıcılar sabit
nesneler için, program 'abort()' ile sonlandırılmışsa çağrılmazlar.

+ Bir sınıfın özel veri üyelerine, sadece sınıfın üye fonksiyonları ve
'friend' leri tarafından erişilebilir.

+ Sınıflar, istemcilerin, özel veri üyelerinin değerini ayarlayıp(yani yazıp)
alabilecekleri(yani okuyabilecekleri) genel üye fonksiyonları sunarlar. Bu
fonksiyonlar özel olarak 'get()' ya da 'set()' olmak zorunda değildirler fakat
genellikle bu şekilde adlandırılırlar. Değer okuyan(alan) fonksiyonlara(get())
genelde sorgu fonksiyonları da denir.

+ 'get()/set()' fonksiyonları sunmak, veri üyelerini public yapmakla temelde
aynı şeymiş gibi gözükebilir. Bu C++' ın başka bi inceliğidir. Eğer bir veri
üyesi 'public' olursa, programdaki herhangi bir fonksiyon onu okuyabilir ve
değerini değiştirebilir. Eğer bir veri üyesi 'private' olursa, genel bir
'get()' fonksiyonu, diğer fonksiyonlara veriyi okuma imkanı verecektir
fakat 'get()' fonskiyonu verinin görüntülenmesini veya biçimlendirilmesini
kontrol edebilir.

'public' bir 'set()' fonksiyonu, veri üyesinin değerinin değiştirilmesi
girişimlerini dikkatle inceleyebilir(ve muhtemelen inceleyecektir). Bu, yeni
değerin, veri üyesine uygun olup olmasını garanti altına alacaktır. Örneğin,
ayın gününü 37' ye ayarlama girişimi, 0 - 100 arasına not alınabilecek bir
sınavda 185 değeri atamaya çalışma veya bir kişinin yaşının negatif bir sayıya
ayarlanması girişimi reddedilecektir. Bir sınıfın istemciler, veri üyesine
geçersiz bir değer atamaya çalıştıklarında uyarılmalıdırlar. Bir sınıfın
'set()' fonksiyonları, genelde, sınıf nesnesinin verisine geçersiz veri
atamaya çalışıldığını belirten değerler döndürecek şekilde yazılırlar. Bu,
istemcilerin, üzerinde işlem yaptıkları nesnenin geçerli olup olmadığını
anlamak için, 'set()' fonksiyonunun döndürdüğü değeri sınamalarını sağlar.
Herhangi bir veri üyesini geçersiz bir değere atamaya çalışma durumunda, o
veri üyesinin sıfıra ayarlanmasını sağlayarak, verinin tutarlı bir durumda
olması garanti altına alınabilir.

+ Bir yapıcı, 'get()/set()' gibi diğer üye fonksiyonlarını çağırabilir ama
nesneye ilk değerleri atanmamışsa veri üyeleri tutarlı bir durumda
olmayabilir. Doğru bir şekilde ilk değer ataması yapılmadan veri üyelerini
kullanmaya çalışmak mantık hatalarına neden olabilir.

+ Nesneye bir referans(&), nesnenin bir takma adıdır(alias) ve dolayısıyla
atama ifadelerinin sol tarafında kullanılabilir. Bu bağlamda, referans, bir
değer alabilen 'sol taraf değeri' dir. Bu imkanı kullanmanın bir
yolu(maalesef!) 'private' bir veri üyesine 'const' olmayan referans(ya da
pointer) döndüren, bir üye fonksiyonuna sahip olmaktır. Böyle bir referans
döndürmek, sınıfın depolamasını ortadan kaldırır. Aslında 'private' bir veriye
herhangi bir referans veya pointer döndürmek istemci kodu sınıf verisinin
gösterimine bağımlı yapar. Dolayısıyla, geri döndürülen 'perivate' veri
üyesine bir pointer ya da referanstan kaçınılmalıdır.

+ Atama operatörü(=), aynı tipteki bir nesneyi, bir diğer nesneye atamak için
kullanılabilir. Bu tür bir atama normalde varsayılan üye düzeyinde kopyalama
ile yapılır. Nesnenin her bir üyesi, diğer nesnenin aynı üyesine tek tek
kopyalanır. 

+ Üye düzeyinde kopyalama, veri üyeleri dinamik olarak ayrılmış alan kullanan
bir sınıfla kullanılırsa ciddi sorunlar oluşturabilir. 18. bölümde bu
sorunlar ve çözümleri gösterilecek. Üye düzeyinde kopyalama her sınıf için
uygun değildir.

+ Nesneler fonksiyonlara argüman olarak geçirilebilirler ve fonksiyonlardan
döndürülebilirler. Bu tür bir geçirme ve döndürme, varsayılan olarak değere
göre geçirme/döndürme ile yapılır; nesnenin bir kopyası geçirilir veya
döndürülür.(Örnekler 18. bölümde...)

+ Bir nesneyi değere göre döndürerek geçirmek güvenlik açısından iyidir; çünkü
çağırılan fonksiyonun orijinal nesneye erişimi olmaz, ama bu yöntem ile büyük
bir nesnenin kopyasını alırken performans düşebilir. Bir nesne referans veya
pointer' lar kullanarak referansa göre çağırma yöntemi ile geçirilebilir.
Referansa göre çağırmak performansı artırır fakat güvenlik açısından zayıftır
çünkü çağrılan fonksiyona orijinal nesneye erişim hakkı verilir. 'const' bir
referansa göre çağırmak gövenli ve performansı iyi bir alternatiftir.

+ Nesne Yönelimli programlar yazan insanlar, kullanışlı sınıflar yapmak
üzerine yoğunlaşırlar. Sınıfları toplayıp bir katalog yapmak için büyük
fırsatlar sunulmaktadır. Böylece, çok büyük yazılım toplulukları tarafından
erişilebilirler. Dünya çapında bir çok sınıf kütüphanesi mevcuttur ve bir o
kadarı da geliştriilmektedir. Bu kütüphaneleri geniş kitlelere yaymak için
büyük çabalar sarfedilmektedir. Yazılım artık, var olan, iyi tanımlanmış,
dikkatlice test edilmiş,  iyi belgelendirilmiş, taşınabilir ve kolaylıkla
bulunabilen bileşenlerden yapılmaktadır. Bu çeşit bir yazılım tekrar
kullanılabilirliği, güçlü, yüksek kaliye yazılımların geliştirilmesini
hızlandırır. Tekrar kullanılabilen bileşen mekanizmalarıyla Hızlı Uygulama
Geliştirme(Rapid Application Development) önemli bir sektör haline gelmiştir. 

Fakat yazılım tekarr kullanılabilirliğinin tüm potansiyelinin farkına
varılabilmesinden önce, bazı önemli sorunların çözülmesi gereklidir. Hala
katalog şemalarında, lisans şemalarında, sınıfların ana kopyalarının
bozulmamasını sağlayacak koruma mekanizmalarına ve yeni bir sistemi
tasarlayacak olanlar, var olan nesneler ihtiyaçlarını karşılıyorsa, hangi
sınıfların kullanılabilir olduğunu ve ihtiyaçlarını ne ölçüde karşıladığını
belirleyebilecek göz atma mekanizmalarına ihtiyacımız var. Bir çok ilginç
araştırma ve geliştirme problemlerinin çözümüne ihtiyaç vardır. Bu problemleri
çözmek için müthiş bir motivasyon var çünkü çözümlerin potansiyel değeri çok
yüksektir.

### GENEL PROGRAMLAMA HATALARI

+ Sınıf ya da yapı tanımlaması sonundaki noktalı virgülü(;) unutmak bir yazım
hatasıdr.

+ Bir yapıcı için dönüş tipi ve/veya dönüş değeri belirtmek yazım hatasıdır.

+ Bir sınıfın veri üyelerine sınıf tanımlaması sırasında açık olarak ilk değer
atamaya çalışmak yazım hatasıdır.

+ Bir sınıfın üye fonksiyonlarını, o sınıfın dışında tanımlarken fonksiyon
adının önündeki sınıf adını ve faaliyet alanı çözünürlük operatörünü unutmak
hatadır.

+ 'private' bir sınıfın üyesi(veya o sınıfın 'friend' i) olmayan bir
fonksiyonun bu sınıfın 'private' üyelerine erişmeye çalışması yazım hatasıdır.

+ Bir sınıfın veri üyelerine sınıf tanımlaması içinde ilk değer atanamaz.

+ Yapıcı için bir dönüş tipi belirlemek ve/veya yapıcıdan bir değer döndürmeye
çalışmak yazım hatasıdır.

+ Aynı üye fonksiyonun varsayılan ilk değer atamaları hem header dosya içinde
hem de üye fonksiyon tanımlamasında yapmak hatadır.

+ Bir yıkıcıya argüman geçirmeye çalışmak, yıkıcı için dönüş tipi belirlemeye
çalışmak(void bile tanımlanamaz), yıkıcıdan değer döndürmeye çalışmak veya
yıkıcıyı overload etmeye çalışmak yazım hatasıdır.

+ Bir yapıcı, get() ve set() gibi diğer üye fonksiyonları çağırabilir ama
yapıcı nesneye ilk değerini atadığından dolayı veri üyeleri henüz tutarlı bir
durumda olmayabilir. Doğru bir şekilde ilk değerleri atamadan veri üyelerini
kullanmak mantık hatalarına neden olabilir.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Sadelik ve okunabilirlik açısından sınıf tanımlamasında her bir üye erişim
belirtecini sadece bir kez kullanın. Genel üyeleri en kolay
yerleştirilebilecekleri ilk sıraya koyun.

+ Header dosyadaki önişlemci komutlarında, header dosyanın adındaki noktayı
alt çizgi ile değiştirerek kullanın.

+ Eğer sınıf tanımlamasında 'private' üyeleri ilk önce listelemek isterseniz
'private' erişim modunun varsayılan olmasına rağmen 'private' erişim
belirtecini açık olarak yazın. Bu, programın okunabilirliğini artırır. Bizim
seçimimiz, sınıf arayüzünü vurgulamak üzere 'public' üyeleri ilk önce
yazmaktır.

+ 'public' ve 'private' üye erişim belirteçlerinin tekrarlı ve iç içe geçmiş
olarak kullanılabilmesine rağmen ilk olarak tüm 'public' üyeleri bir grup,
sonra tüm 'private' üyeleri de başka bir grup olarak sıralayın. Bu, istemcinin
sınıfın yapılışından çok genel arayüzün üstüne odaklanmasını sağlar.

+ Uygun oldukça(hemen her zaman), her nesnenin düzgün biçimde ve anlamlı
değerlere ilk değerlerinin atanmış olduğundan emin olmak için yapıcı kullanın.
Pointer tipindeki veri üyelerine özel olarak, geçerli bir pointer değeri veya
0 ilk değeri verilmelidir.

+ Varsayılan fonksiyon argümanlarının değerlerini sadece header dosya içinde
bulunan sınıf tanımlamasındaki fonksiyon prototiplerinde bildirin.

+ 'private' veri üyelerinin değerlerini ayarlayan üye fonskiyonlar, atanmak
istenen yeni değerlerin düzgün olduğunu kontrol etmelidir; değilse 'set()'
fonksiyonları 'private' veri üyelerini tutarlı duruma getirmelidir.

+ Hiçbir zman 'private' olmayan bir veri üyesine 'const' olmayan bir referans
(ya da pointer) döndüren 'public' fonksiyonlara sahip olmayın. Böyle bir
referans döndürmek, sınıfın depolanmasını ortadan kaldırır. Aslında 'private'
veriye herhangi bir referans veya pointer döndürmek istemci kodu sınıf
verisinin gösterimine bağımlı yapar. Dolayısıyla, geri döndürülen 'private'
veri üyesine bir pointer veya referanstan kaçınılmalıdır.

### PERFORMANS İPUÇLARI

+ Ufak üye fonksiyonları sınıf tanımlaması içinde tanımlamak, bu üye
fonksiyonları otomatik olarak inline yapar(eğer derleyici böyle yapmayı
seçerse). Bu, performansı iyileştirebilir fakat iyi yazılım mühendisliğini
desteklemez çünkü sınıfın istemcileri, fonksiyonun nasıl yapıldığını
görebilecektir ve inline fonksiyonun tanımlaması değişirse, kodların da tekrar
derlenmesi gerekir.

+ Gerçekte, nesneler sadece veri içerirler, dolayısıyla fonksiyonları da
içermiş olduğu düşünülen hallerden oldukça küçüktürler. 'sizeof' operatörünü
bir sınıf adına veya sınıfın bir nesnesine uygulamak, size sadece sınıfın
verisinin boyutunu bildirecektir. Derleyici sınıfın tüm nesnelerinde, ayrı
olarak üye fonksiyonların sadece bir kopyasını üretir. Sınıfın tüm nesneleri,
bu tek kopyayı kullanır. Fakat her bir nesne, sınıfın verisinin kendisine ait
bir kopyasını tutar çünkü bu veri, nesneden nesneye değişebilir. Fonksiyonun
kodu değiştirilemez(ayrıca yeni eklenen kod veya saf yordam denir) ve
dolayısıyla bir sınıfın tüm nesneleri arasında paylaştırılabilir.

+ Bir nesneyi değere göre döndürerek geçirmek güvenlik açısından iyidir; çünkü
çağırılan fonksiyonun orijinal nesneye erişimi olmaz, ama bu yöntem ile büyük
bir nesnenin kopyasını alırken performans düşebilir. Bir nesne referans veya
pointer' lar kullanarak referansa göre çağırma yöntemi ile geçirilebilir.
Referansa göre çağırmak performansı artırır fakat güvenlik açısından zayıftır
çünkü çağrılan fonksiyona orijinal nesneye erişim hakkı verilir. 'const' bir
referansa göre çağırmak gövenli ve performansı iyi bir alternatiftir.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ Bir sınıfın istemcileri o sınıfı, nasıl yapıldığını iç ayrıntılarını
bilmeden kullanır. Eğer sınıfın yapılışı, sınıfın arayüzlerinin sabit kalması
koşulu ile değiştirilirse(örneğin performansı artırmak için), istemcinin
kaynak kodunun değişmesine gerek yoktur(istemcinin tekrar derlenmesine gerek
olabilir). Bu, sistemlerin değiştirilebilmesini oldukça kolaylaştırır.

+ Üye fonksiyonlar, nesne yönelimli olmayan programlardaki fonksiyonlardan
genelde kısadır. Çünkü veri üyelerinde tutulacak veri, ideal olarak bir yapıcı
ve/veya yeni veriyi tutacak üye fonksiyon tarafından onaylanmıştır.  Veri
zaten nesne içinde olduğundan, üye fonksiyon çağrıları genelde ya hiç argüman
almazlar ya da nesne yönelimli olmayan programlardaki tipik fonksiyon
çağrılarından çok daha az argüman alırlar. Dolaysıyla, çağrılar daha kısa,
fonksiyon tanımlamaları daha kısa ve fonksiyon prototipleri daha kısa olur.

+ İstemcilerin bir sınıfın arayüzlerine erişim hakları olmalı ama sınıfın
yapılışına erişim hakları olmamalıdır.

+ Üye fonksiyonların bildirimini sınıf tanımlamasının içinde yapıp(fonksiyon
prototiplerini kullanarak) bu üye fonksiyonların tanımlamalarını sınıf
tanımlamasının dışında yapmak, bir sınıfın arayüzünü o sınıfın yapılışından
ayırır. Bu, iyi yazılım mühendisliğini destekler. Bir sınıfın istemcileri, o
sınıfın üye fonksiyonlarının yapılışını göremez ve yapılış değiştirildiğinde
tekrar derlenmeyi gerektirmez.

+ Sadece en basit üye fonksiyonlar ve en sabit(yapılışı değişmeyecek olan) üye
fonksiyonlar sınıf başlığının içinde tanımlanmalıdır.

+ Nesne Yönelimli Programlama yaklaşımı, genelde fonksiyon çağrılarını
geçirilecek parametre sayısını azaltarak basitleştirir. Nesne Yönelimli
Programlamanın bu faydası, veri üyelerinin ve üye fonksiyonların aynı nesne
içinde depolanmasının üye fonksiyonlara, veri üyelerine erişim hakkı
vermesinden türetilmiştir.

+ Bu kitabın merkezi teması "Tekrar kullan! Tekrar kullan! Tekrar kullan!"
dır. Tekrar kullanılırlığı cesaretlendirmek üzere sınıfları 'cilalamak' için
birkaç teknik üzerinde dikkatle duracağız. "Değerli sınıflar" ve "Değerli
Yazılım Varlıkları" oluşturmak üzerine yöğunlaştık.

+ Bir sınıfı kullanmak isteyen herhangi bir istemcinin eklemesi için, sınıf
tanımını bir header dosya içine koyun. Bu, sınıfın genel arayüzünü oluşturur
(ve istemcinin, sınıfın üye fonksiyonlarını çağırabilmesi için gerekli olan
fonksiyon prototiplerini sağlar). Sınıf üye fonksiyon tanımlamalarını bir
kaynak dosya içine koyun. Bu, sınıfın yapılışını oluşturur.

+ Bir sınıfın istemcilerinin o sınıfı kullanması için kaynak koduna erişmesine
gerek yoktur, fakat sınıfın nesne koduna bağlantı yapabilmeleri gereklidir. Bu
durum, bağımsız yazılım üreticilerinin(BYÜ), satmak ya da lisanslamak üzere
sınıf kütüphaneleri üretmelerini teşvik eder. BYÜ' ler sadece header dosyaları
ve nesne modüllerini verir. Hiçbir özel bilginin verilmesine gerek
yoktur(kaynak kodunun da verildiği durumlar hariç). C++ kullanıcı toplulukları
bir büyük BYÜ' nün ürettiği sınıf kütüphanesinin faydasını görmektedir.

+ Bir sınıfın arayüzü için önemli olan bilgiler, header dosya içine
konmalıdır. Sadece sınıf içinde kullanılacak ve istemcinin ihtiyaç duymayacağı
bilgiler, yayınlanmayacak olan kaynak dosyanın içine konmalıdır.  Bu 'en az
yetki prensibi' örneğidir.

+ C++, programların uygulama bağımsız olmasını sağlar. Uygulama bağımsız kod
tarafından kullanılan sınfın yapılışı(uygulaması) değiştiğinde, bu kodun
değiştirilmesine gerek olmaz. Fakat sınıfın arayüzünün herhangi bir kısmı
değişirse, uygulama bağımsız tekrar derlenmelidir.

+ Bir sınıfın tüm veri üyelerini 'private' olarak tutun. 'private' veri
üyelerine değer atayacak ve değerlerini okuyacak 'public' üye fonksiyonlar
sağlayın. Bu mimari, sınıfın yapılışını istemcilerden saklar ve hataları
azaltıp programın değiştirilebilirliğini artırır.

+ Sınıf tasarımcıları bilgi saklama ve en az yetki prensibini güçlendiren
özel, korunmuş ve genel üye yazımını kullanır.

+ Sınıf tanımlamasının her özel veri üyesi için 'get()/set()' fonksiyonu
sunmasına gerek yoktur. Bu imkanlar sadece uygun olduklarında sağlanmaldır.
Bu tür bir servis istemci tarafında kullanışlı olacaksa sınıfın genel
arayüzünde verilmelidir.

+ Üye fonksiyonlar birkaç farklı kategoride toplanabilir:
  - özel veri üyelerinin değerlerini okuyup döndüren fonksiyonlar,
  - özel veri üyelerinin değerlerini ayarlayan fonksiyonlar,
  - sınıfın servislerini oluşturan fonksiyonlar,
  - sınıf için, sınıf nesnelerine ilk değerlerini atamak, sınıfların doğal
    tiplerle veya diğer sınıflarla çevirisini sağlamak, sınıf nesneleri için
    hafızayı yönetmek gibi mekanik görevleri yapan fonksiyonlar.

+ Nesne yönelimli programlamanın bir diğer fenomeni de, sınıf bir kez
tanımlandıktan sonra, bu sınıftan nesneler oluşturup, bu nesneleri yönetmenin
genelde birkaç basit üye fonksiyon çağrısından ibaret oluşudur; çok az(eğer
gerekliyse) kontrol yapısı kullanılır. Kontrol yapıları yukarıdaki durumun tam
tersine sınıfın üye fonksiyonlarının yapılışı sırasında kullanılır.

+ Sınıfın yapıcısının(veya bir üye fonksiyonunun) gerek duyduğu
fonksiyonelliği bir başka üye fonksiyon zaten sağlıyorsa, yapıcı(veya üye
fonksiyon) içinde bu üye fonksiyonu çağırın. Bu, kodun bakımını kolaylaştırır
ve kodun değiştirilmesinden ortaya çıkabilecek hata ihtimalini azaltır. Genel
bir kural olarak kodun tekrarından kaçının.

+ Bir sınıfın(herhangi bir yapıcısı tanımlanmışsa ve bunlardan hiç biri açık
olarak varsayılan yapıcı olarak tanımlanmamışsa) hiç varsayılan yapıcısı
olmayabilir.

+ Kitabın geri kalanında görebileceğiniz gibi, yapıcılar ve yıkıcıların, C++
için önemi büyüktür ve Nesne Yönelimli Programlama' ya, sadece buradaki özet
girişle devam etmek mümkündür.

+ Veri üyelerini 'private' yapıp, bunlara erişimi 'public' üye fonksiyonlarla
yapmak, verinin bütünlüğünü korumaya yardım eder.

+ 'private' veriye 'get()/set()' fonksiyonları ile erişmek, veriyi 
geçersiz değerler almaktan korumakla birlikte, ayrıca sınıfın istemcilerini 
veri üyesinin gösteriminden ayırır. Böylece, verinin gösterimi bir sebeple 
değiştirilirse(genelde daha az yer kaplaması için veya performans artırımı 
için) sadece üye fonksiyonların değiştirilmesine gerek olur; istemcilerin üye 
fonksiyonlar tarafından sağlanan arayüzleri değişmediği sürece tekrar 
derlenmesine gerek olmaz. Fakat, istemcinin tekrar derlenmesine gerek 
olabilir.

  TEST VE HATA AYIKLAMA İPUÇLARI:

+ Üye fonksiyon çağrılarının genelde argüman almaması veya Nesne Yönelimli 
Programlama dillerinin geleneksel fonksiyon çağrılarından daha az argüman 
aldıkları gerçeği, yanlış argümanları geçirme, yanlış tipte argüman geçirme 
ve/veya yanlış sayıda argüman geçirme olasılığını azaltır.

+ Bir programda header dosyaları birçok kez eklemekten kaçınmak için şu 
önişlemci komutlarını kullanın:
  - #ifndef
  - #define
  - #endif

+ Bir sınıfın veri üyelerini özel ve üye fonksiyonlarını genel yapmak, hata 
ayıklama imkanını artırır; çünkü veri yönetiminde oluşabilecek problemler, 
sınıfın üye fonksiyonları veya 'friend' lerine indirgenmiş olur.

+ Bir nesnenin özel veri üyelerini değiştirebilen bütün üye fonksiyonlar(ve 
'friend' ler), verinin tutarlı bir durumda olduğundan emin olmalıdır.

+ Veri bütünlüğünün yararları otomatik değildir, çünkü veri üyeleri 'private' 
yapılmıştır; programcı geçerlilik kontrolünü kendisi sağlamalıdır. Fakat C++, 
programcılara uygun bir şekilde iyi programlar tasarlama platformu sunar.

---

## 17. BÖLÜM (C++ Sınıfları: II. Kısım)

### TERİMLER

+ abstract data type(ADT): soyut veri tipi(SVT)
+ class scope: sınıf faaliyet alanı
+ composition: birleşim
+ container: taşıyıcı
+ default constructor: varsayılan yapıcı
+ default destructor: varsayılan yıkcı
+ dynamic objects: dinamik nesneler
+ friend class: arkadaş sınıf
+ host object: ev sahibi nesne
+ iterator: yineleyici
+ member access specifier: üye ürişim belirteci
+ member initializer: üye ilk değer atayıcı
+ pop: çek / çıkar / at
+ push: it / ekle / al

### ÖZET

+ Bu bölüm, sınıflar ve veri soyutlama anlatmaya devam ediyor. Aynı zamanda
sınıflar ve operatör overload için altyapı hazırlıyor.

+ En az yetki prensibi, iyi yazılım mühendisliği temel prensiplerindendir.
Peki nasıl uygulanır? Bazı nesneler değiştirilebilir, bazıları değiştirilemez
olmalıdır.

+ 'const' anahtar kelimesi, bir nesnenin değiştirilemez olduğunu belirtmek
için kullanılır. Değiştirme girişimi yazım hatası verir. 

+ C++ derleyicisi, 'const' bir nesne için 'const' olmayan üye fonksiyon
çağrılarına izin vermez.

+ 'const' üye fonksiyonları ile bir nesneyi değiştirmeye çalışmak bir yazım
hatasıdır.

+ Bir fonksiyon, hem bildiriminde hem de tanımlanmasında 'const' olarak
belirlenebilir. Bu onu sabit yapar.

  int A::deger_oku()const{return ozel_veri_uyesi;}

Nesnenin veri üyelerinden birini döndürür ve uygun olarak 'const'
bildirilmiştir.

+ İlginç bir problem de genelde nesneleri değiştirmesi gereken yıkıcıların
durumudur. 'const' nesnelerin yapıcıları ve yıkıcılarının, 'const'
bildirilmesine izin verilmez. Bir yapıcının nesneye düzgün bir şekilde ilk
değerini verebilmesi için nesneyi değiştirmesine izin verilmelidir. Bir
yıkıcı, nesne yıkılmadan önce sonlandırma temizliği yapabilmelidir.  Yapıcı ve
yıkıcıların 'const' tanımlanmaya çalışılması yazım hatasıdır.

+ Nesnenin şimdiki durumunu değiştirmeyecek olan tüm üye fonksiyonları 'const'
bildirin, böylece ihtiyaç duyduğunuzda 'const' nesneler ile birlikte
kullanabilirsiniz.

+ 'const' bir üye fonksiyon 'const' olmayan bir sürümüyle overload edilebilir.
Hangi overload edilmemiş fonksiyonun kullanılacağına, nesnenin 'const' olarak
bildirilip bildirilmediğine bağlı olarak derleyici tarafından karar verilir.

+ 'const' nesnelere ilk değer atanmalıdır. Eğer bu sınıf 'const' veri üyesi
içeriyorsa, sınıfın yapıcısında üye ilk değer atayıcılar verilmelidir.

+ Üye ilk değer atayıcı kullanımı:
  
---

  Arttir::Arttir(int c, int i)
  :arttir(i)
  {sayi = c;}

---

':arttir(i)' gösterimi, arttir' a ilk değerini atamaktadır. Eğer bir çok üye
ilk değer atayıcıya ihtiyacınız olursa, iki nokta üst üsteden(:) sonra
virülle(,) ayırarak ekleyin.

Tüm veri üyelerine, üye ilk değer atayıcısı(:) kulanılarak ilk değerleri
atanabilir, fakat 'const' lar ve referanslara ilk değerleri, bu yöntemle
atanmak zorundadır. Üye nesnelerin de bu yöntemle ilk değer atamalarının
yapılması gerekir. Kalıtımı ele alırken(19.bölüm) göreceğimiz gibi, türetilmiş
sınıfın temel sınıftan olan kısımlarının da bu yolla ilk değer atamalarının
yapılması gerekir.

+ Eğer nesneyi değiştirmiyorlarsa, üye fonksiyonları 'const' olarak bildirin.
Bu, birçok hatayı ortadan kaldırmanıza yardım eder.

+ Bir 'Alarm_Saat' sınıfı ne vakit alarm çalacağını bilmek zorundadır.
Dolayısıyla üye olarak 'Zaman' nesnesi içermesi gerekir. Bu imkana 'birleşim'
denir. Yazılımın tekrar kullanılabilirliğinin en yaygın biçimidir.

+ Bir sınıf, başka sınıfların nesnelerini üye olarak içerebilir.

+ Üye nesneler, bildirildikleri sırada ve kendilerini kapsayan sınıf
nesnesinden(ev sahibi nesne ya da host denir) önce oluşturulur.

+ 'const' üyelerin ve referansları da üye ilk değer atayıcıları(:) listesinde
atamaları yapılır(virgülle ayrılır). 19. bölümde anlatılacağı üzere,
türetilmiş sınıfların temel sınıftan olan kısımlarına da bu yolla ilk değer
atanır.

+ Bir üye nesnenin açık olarak üye ilk değer atayıcısıyla değerinin
atanmasına gerek yoktur. Eğer üye ilk değer atayıcısı yoksa üye nesnenin
varsayılan yapıcısı kapalı olarak çağrılır. Eğer varsa, varsayılan yapıcılar
tarafından verilen değerler 'set()/ayarla()' fonksiyonlarıyla değiştirilir.
Fakat, karmaşık ilk değer atama işlemlerinde bu yöntem önemli miktarda ilave
zaman ve emek gerektirmektedir.

+ Üye nesnelere, üye ilk değer atayıcısı ile ilk değerlerini verin. Bu, üye
nesnelerin iki kez değerlerinin atanması problemini ortadan kaldırır(birincisi
varsayılan yapıcı tarafından, ikincisi set() fonksiyonlarıyla).

+ Eğer bir sınıf, bir başka sınıfın nesnesini üye olarak içeriyorsa, bu
nesneyi 'public' yapmak, nesnenin 'private' veri üyelerinin depolanmasını ve
saklanmasını ortadan kaldırmaz.

+ C++' ta bir çok üye fonksiyon argüman gerektirmez. Bunun sebebi, her bir üye
fonksiyonun çalıştığı nesneye kapalı bir tutamak(pointer biçiminde)
içermesidir. Bu kapalı pointer 'this' olarak adlandırılır.

+ Bir 'friend'(arkadaş) fonksiyon, sınıfın faaliyet alanı dışında tanımlanıp
sınıfın tüm üyelerine(private + protected) erişim izni olan fonksiyondur. Bir
fonksiyon ya da tüm bir sınıf, başka bir sınıf ile 'friend' olacak şekilde
tanımlanabilir. 'friend' fonksiyonları kullanmak performansı artırabilir.
Ayrıca, 'friend' fonksiyonları, sınıf nesneleri ile kullanmak, operatörleri
overload etmek ve yineleyici sınıfları oluşturmak için de kullanırız.
Yineleyici sınıf nesneleri, taşıyıcı sınıftaki nesneleri doğru biçimde seçmek
ve bu nesneler üzerinde işlem yapmak için kullanılırlar. Üye fonksiyonların
kullanılamayacağı bazı işlerde 'friend' fonksiyonları kullanmak uygun
olur(18.bölüm).

+ Arkadaşlık bildirimleri, sınıf tanımlaması içinde herhangi bir yere
yerleştirilebilir. Bir fonksiyonu 'friend' olarak bildirmek için sınıf
tanımlamasındaki fonksiyon prototipinin önüne 'friend' anahtar kelimesini
koyun. 

Örnek:
Sinif_2 sınıfını, Sinif_1 sınıfının arkadaşı olacak şekilde bildirmek için; 
  
  friend class Sinif_2; 

biçimindeki bildirimi, Sinif_1 tanımlamasına ekleyin.

+ Arkadaşlık verilir, alınmaz. Yani, B sınıfının A sınıfının arkadaşı
olabilmesi için, A sınıfının B sınıfını açık olarak 'friend' bildirmesi
gerekir. 

Ayrıca, arkadaşlığın simetri ve geçiş özelliği yoktur; yani sınıf A, B
sınıfının arkadaşı, B sınıfı da C sınıfının arkadaşı ise, B sınıfının A
sınıfının arkadaşı olduğu(arkadaşlık simetrik değildir!) ve A sınıfının C
sınıfının arkadaşı olduğu(arkadaşlık geçişli değildir!) anlamlarını
çıkaramazsınız!

+ C++' ın karma bir dil olması yüzünden, iki tipte de fonksiyon çağrılarının
karışımı olması yaygındır ve genelde bu tür çağrılar arka arkaya yapılır.
Basit veri veya nesneleri geçirmek için C-stili çağrılar, fonksiyonları(veya
mesajları) nesnelere geçirmek için C++ çağrıları kullanılır.

+ Aşırı yüklenmiş fonksiyonları bir sınıfın 'friend' i olarak belirtmek
mümkündür. 'friend' olması istenen her overload fonksiyonun, açık olarak
sınıfın 'friend' i olarak bildirmiş olması gerektirmektedir.

+ Her nesne kendi kendine 'this' denilen pointer' la erişir. Bir nesnenin
'this' pointer' ı nesnenin bir parçası değildir; yani 'this' pointer' ı nesne
üzerinde bir 'sizeof' işlemi sonucu olarak yansıtılmaz. Dahası, 'this'
pointer' ı nesneye derleyici tarafından, her 'static' olmayan üye fonksiyon
çağrısında kapalı olarak, birinci argüman olarak geçirilir.

+ 'static' olmayan her üye fonksiyon, nesnenin adresine 'this' anahtar
kelimesini kullanarak erişir.

+ 'this' göstericisi, kapalı olarak hem veri üyelerine hem de üye
fonksiyonlara bir referans olarak kullanılır.

+ 'this' göstericisi açık olarak da kullanılabilir.

+ 'this' nesnesinin tipi, nesnenin tipine ve 'this' in kullandığı üye
fonksiyonun 'const' olup olmadığına bağlıdır. 

  Örnek:
  - Bir sınıfın(S) sabit olmayan bir üye fonksiyonu için 'this' pointer' ı,
    aynı sınıfın nesnesine 'const' bir pointer tipindedir.
    (S * const)
  
  - Bir sınıfın(S) sabit bir üye fonksiyonu için 'this' pointer' ı, aynı
    sınıfın 'const' bir nesnesine 'const' bir pointer tipindedir. 
    (const S * const)

+ Örnek:

---

void Test::yaz() const // *this' i parantez () arasına almak gerekir.           
{                                                                               
    cout << "        x: " << x << '\n'                                          
         << "  this->x: " << this->x << '\n'                                    
         << "(*this).x: " << (*this).x << endl;                                 
}

---

NOT: (*this).x ' te '*this' etrafındaki parantezler gereklidir çünkü nokta
operatörünün(.) önceliği, (*) operatöründen yüksektir. Parantezler olmadan
'*this.x' deyimi '*(this.x)' gibi olacaktır. Bu yazım hatasıdır çünkü
nokta(.) operatörü bir pointer' la kullanılamaz.

+ 'this' pointer' ının ilginç bir kullanımı da, nesneyi kendi kendine
atamaktan engellemesidir. 18. bölümde göreceğimiz gibi, nesne dinamik ayrılmış
alana, sabit bir pointer içeriyorken, kendi kendine atama yapmak çok ciddi
sorunlara sebep olabilir.

+ 'this' pointer' ının bir başka kullanımı da, ard arda eklenmiş üye fonksiyon
çağrılarına imkan tanımasıdır. Bunu üretildiği sınıfın nesnesine bir referans
döndürmesi ile yapar. Tüm üye fonksiyonlar '*this' ile 'Sinif &' döndürür.

Peki 'this' i referans olarak döndürmek nasıl çalışıyor? 

Nokta operatörü(.) soldan sağa doğru birleştirir. Bu yüzden, 

  s.func_1(1).func_2(2).func_3(3); 

ifaesi ilk önce baştaki 's.func_1(1)' i çalıştırmakta ve bu fonksiyon
çağrısının değeri olarak s nesnesine bir referans döndürmektedir. Geriye kalan
ifade şöyle değerlendirilir:
  
  s.func_2(2).func_(3);

's.func_2(2)' çalıştırıldıktan sonra s' e dönen referans alınır ve son olarak
şöyle değerlendirilir:
  
  s.func_3(3);

NOT: Referans döndürmeyecek fonksiyon, döndürenlerden sonra(en sağa)
yazılmalıdır!(?)

+ 'new' ve 'delete' operatörleri, C' nin 'malloc()' ve 'free()' fonksiyon
çağrılarından, dinamik hafıza ayırmanın(herhangi bir doğal veya kullanıcı
tanımlamalı tip için) daha güzel yollarını sunar.

Örnek:

  TipAdi * TipAdinaPtr;

ANSI C' de, 'TipAdi' tipinde bir nesneyi dinamik olarak oluşturmak için;
  
  TipAdinaPtr = malloc(sizeof(TipAdi));

yazmak gerekiyor. Bu, 'malloc()' fonksiyonuna çağrıyı ve 'sizeof' operatörünün
açık olarak kullanımını gerektirir. ANSI C' den önceki C sürümlerinde, ayrıca
'malloc()' tarafından döndürülecek pointer' ın tipini dönüştürecek (TipAdi *)
dönüşümünü de kullanacaktınız. 'malloc()' fonksiyonu, ayrılmış hafıza bloğuna
ilk değer atayabilecek yöntemler sağlamaz.

C++' ta basitçe:

  TipAdinaPtr = new TipAdi;

yazarsınız. 'new' operatörü doğru boyutta bir nesne oluşturur, nesnenin
yapıcısını çağırır ve doğru tipte bir pointer döndürür. Eğer 'new' boş alan
bulamazsa, ANSI/ISO standartlarından önceki C++ sistemlerinde NULL(0) pointer
döndürür. 'new' ile oluşturduğunuz nesneyi yıkmak ve hafıza alanını
boşaltmak için 'delete' operatörünü aşağıdaki gibi kullanmalısınız.

  delete TipAdinaPtr;

C++, yeni oluşturulan bir nesne için ilk değer sağlayıcı sağlamanıza izin
verir.
  
  double *birseyePtr = new double(3.14159);

Bu ifade, yeni oluşturulmuş double nesnesine 3.14159 ilk değerini atar.

10 elemanlı bir tamsayı dizisi şöyle oluşturulup atanır:

  int *diziPtr = new int[10];

Bu dizi, 
  
  delete[] diziPtr; 

ifadesiyle yok edilir.

GÖrdüğünüz gibi, 'malloc()' ve 'free()' yerine 'new' ve 'delete' kullanma, bir
çok fayda sağlar. Özel olarak 'new' yapıcıyı çağırır, 'delete' sınıfın
yıkıcısını çağırır.

NOT: 23. bölümde, ANSI/ISO C++ standartları bağlamında, 'new' hatalarıyla
nasıl bir "istisna(exception)" "fırlattığını(throw)" ve bu istisnayı nasıl 
"yakalayıp(catch)" başa çıkacağımızı(handle) göreceğiz(exception handling).

+ 'new' operatörü, bir nesne için alan ayırır, nesnenin yapıcısını çalıştırır
ve uygun tipte bir pointer döndürür. Nesne için ayrılmış bu alanı boşaltmak
üzere 'delete' operatörünü kullanın.

+ Nesnelerin dizisi dinamik olarak 'new' ile, 'int *ptr = new int[100];'
ifadesindeki gibi ayrılabilir. Bu ifade, yüz tamsayılık bir dizi için yer
ayırır ve dizinin başlangıç adresini ptr' ye atar. Bu tamsayı dizisi 'delete
[] ptr;' ifadesiyle silinir.

+ Sınıfın her bir nesnesi, sınıfın tüm veri üyelerinin kendilerine ait bir
kopyasına sahiptirler. Bazı özel durumlarda, bir değişkenin sadece bir kopyası
sınıfın tüm nesneleri tarafından paylaşılmaklıdır. 'static' bir sınıf
değişkeni, bu ve başka sebeplerle kullanılırlar.

+ 'static' bir veri üyesi, sınıf düzeyinde bilgiyi(yani, bir sınıfın
özelliğidir, nesnenin değil) gösterir. 'static' üyenin bildirimi, 'static'
anahtar kelimesi ile başlar.

+ Verinin tek bir kopyası yeterliyse 'static' veri kullanın. Bu hafıza
alanından tasarruf sağlar.

+ 'static' veri üyeleri global değişkenler gibi gözükmelerine sağmen, sınıf
faaliyet alanına sahiptirler. 'static' üyeler 'public, private, protected'
olabilirler. 'static' veri üyelerine, dosya faaliyet alanında bir sadece bir
kez ilk değer atanmalıdır.

+ Bir sınıfın 'static' üyelerine, o sınıfın nesnesi aracılığı ile ya da
faaliyet alanı çözünürlük operatörü(eğer üye 'public' ise) kullanılarak, sınıf
adı ile erişilebilir. Bir sınıfın 'private' ve 'protected', sınıfın 'public'
üye fonksiyonlarıyla veya 'friend' leri ile erişilebilir.

+ Bir sınıfın 'static' üyeleri, o sınıfın hiç bir nesnesi yokken bile vardır.
'public static' sınıf üyesine, sınıfın hiçbir nesnesi yokken erişmek için,
veri üyesinin önüne sınıf adını ve ikili faaliyet alanı çözünürlük
operatörünü(::) koyun. 'private static' veya 'protected static' sınıf üyesine,
sınıfın hiç nesnesi yokken erişmek için 'public static' bir fonksiyon
sağlanmış olmalıdır ve fonksiyon önüne sınıf adı ve ikili faaliyet alanı
çözünürlü operatörü(::) konulmalıdır.

+ Bir üye fonksiyon eğer 'static' olmayan sınıf üyelerine erişmiyorsa,
'static' olarak bildirilebilir. 'static' olmayan üye fonksiyonların tersine,
'static' üye fonksiyonunun 'this' göstericisi yoktur.  Çünkü 'static' veri
üyeleri ve 'static' fonksiyonlar, sınıfın nesnesinden bağımsız olarak var
olurlar.

+ Dosya faliyet alanındaki 'static' sınıf değişkeninin tanımına 'static'
anahtar kelimesini eklemek yazım hatasıdır.

+ 'static' bir üye fonksiyonu 'const' bildirmek yazım hatasıdır.

+ 'new' ile dinamik olarak ayrılmış hafızayı boşalttıktan sonra bu alanı
gösteren pointer' ı 0'a ayarlayın. Bu, daha önceden ayrılmış alanla pointer'ın
bağlantısını keser.

+ 'assert' makrosu, '<cassert>' header dosyasında tanımlıdır ve bir koşulun
doğruluğunu test eder. Eğer ifadenin değeri 'false' ise 'assert' bir hata
mesajı üretir ve programın çalışmasını sonlandırmak için 'cstdlib' genel
hizmet dosyasındaki 'abort()' fonksiyonunu çağırır. Bu, bir değişkenin
değerinin doğru olup olmadığını test eden kullanışlı bir hata ayıklama
aracıdır.

İfade 'true(doğru)' ise program durdurulmadan devam edecektir. Eğer bu ifade
false(yanlış) ise satır numarasını, test edilen koşulu ve dosya adını içeren
bir hata mesajı ekrana yazdıracak ve program sonlanacaktır. Böylece programcı,
hatayı bulmak için kodun bu kısmına yoğunlaşabilir. 23. bölümde, çalışma
zamanı hatalarıyla başa çıkmanın daha iyi yollarını anlatacağız. 

Hata ayıklama ifadeleri, hata ayıklama bittiğinde programdan çıkarılmak
zorunda değildir. Program dosyası başına '#define NDEBUG' satırı eklemek veya
derleyici seçeneklerinde bunu belirtmek, programcının her hata ayıklama
ifadesini tek tek elle silmesi yerine, önişlemcinin tüm hata ayıklama
ifadelerini atlamasını sağlar.

NOT: 'abort()' fonksiyonu, hiçbir yıkıcıyı çağırmadan anında programı
sonlandırır.

+ Sınıflar, normalde yapılış ayrıntılarını istemcilerinden gizlerler. Buna
bilgi saklama(information hiding) denir.

+ Yığınlar, son giren ilk çıkar(LIFO) veri yapıları olarak bilinirler. Yığına
itilen(eklenen, push) son eleman, yığından çekilecek(çıkartılacak, pop) ilk
elemandır.

+ Bir sınıfın işlevselliğini, yapılışından bağımsız olarak tanımlamaya veri
soyutlama(data abstaction) denir ve C++ sınıfları soyut veri tipleri(SVT)
olarak tanımlanır.

+ Kullanıcılar, bir sınıfın nasıl yapıldığının ayrıntılarını bilebilmelerine
rağmen bu ayrıntılara bağlı kod yazmamalıdırlar. Bu, özel bir sınıfın
yapılışını, sınıfın 'public' arayüzü değişmediği sürece, sistemin geri
kalanını etkilemeden değiştirilebileceği anlamına gelir.

+ Yüksek seviyeli dillerin görevi, programcının kullanımına uygun bir bakış
açısı sunmaktır. Kabul edilmiş tek bir standart bakış açısı yoktur. Bu, bu
kadar çok programlama dili olmasının bir nedenidir. C++' ta, NYP de bir bakış
açısıdır.

Birçok programlama dili, olayları vurgular. Bu dillerde veri, programın
yapacağı olaylara destek olmak için vardır. Veriye, olaylardan "daha az
ilginç" gözüyle bakılır. Veri "ham" dır. Sadece birkaç doğal tip vardır ve
programcıların kendi veri tiplerini oluşturması zordur.

+ C++, verinin önemini yükseltir. C++' ın öncelikli etkinliği yeni veri
tipleri(yani sınıfları) oluşturmak ve bu veri tiplerindeki nesneler arasındaki
etkileşimi ifade etmektir.

+ Soyut Veri Tipleri, yapısal programlama yerine gelmemiştir. Aksine, yapısal
program geliştirme sürecini iyileştirebilecek ilave biçimlendirme yeteneği
sağlarlar.

+ int, double, char gibi temel veri tipleri de aslında soyut veri
tipleridirler. Zira, 'int' tüm int değerleri tutacak kadar geniş değildir.
'char', yalnızca ASCII karakter setini(128 karakter) tutar, tüm dillerde
kullanılan karakterlerin hepsi çok daha fazladır.

+ Esas nokta, programlama dillerinin sağladığı doğal veri tiplerinin bile
aslında gerçek dünya kavramları ve davranışlarının yaklaşık bir modeli
olduğudur. Soyut veri tipleri, gerçek dünya kavramlarını bir bilgisayar
sistemi içinde tatmin edici duyarlıklıkta gösterme yoludur.

+ Bir soyut veri tipi iki fikre sahiptir; 
  - yeni veri gösterimi,
  - bu yeni veri üstünde yapılacak işlemler.

+ C++' ta programcı, zaten soyut olan doğal veri tiplerini ve hizmetlerini,
daha doyarlık yapmak için sınıfları kullanır.

+ Dizileri 6. bölümde ele almıştık. Bir dizi, bir pointer ve biraz boş
alandan başka bir şey değildir. Eğer programcı dikkatli ve kanaatkar ise bu
basit imkanlar dizi işlemlerini yapmak için yeterlidir. Dizilerle uygulaması
çok güzel olacak birçok işlem vardır fakat bunlar C++' a eklenmemiştir. C++
sınıflarıyla progamcı ham diziler yerine tercih edilebilecekdizi SVT'ni
geliştirebilir.

Dizi sınıfı:
  - indis aralığı kontrolü,
  - 0 ile başlamak yerine gelişigüzel indis aralığı,
  - dizi ataması,
  - dizi karşılaştırması,
  - dizi i/o işlemleri,
  - kendi boyutlarını bilen diziler,
  - daha fazla eleman alabilecek şekilde dinamik olarak genişleyebilen diziler

gibi pek çok yardımcı olacak yeni yetenek sağlayabilir. C++ ufak bir doğal tip
kümesine sahiptir. Sınıflar temel programlama dilini genişletmektedir.

C++ ve NYP öğrenen bir okuyucu, hızla artan ve zengin kütüphanelerle mümkün
olan hızlı, bileşen yönelimli program geliştirmenin avantajını yaşayacaktır.

+ C++, genişletilebilir bir dildir. Dili, yeni tiplerle genişletmek kolay olsa
da esas dilin kendisi değiştirilebilir değildir.

+ 'string' soyut veri tipi: C++, kasıtlı olarak programcılara sadece çok geniş
alanda faaliyet gösterecebilecek sistemler yapabilmek için gerekli ham
yetenekler sunan ufak bir dil olarak yapılmıştır(aletler yapmak için yapılmış
bir alet). Bu dil, performans yüklerini azaltmak için tasarlanmıştır. C++, hem
uygulama programıclığı hem de sistem programcılığı(bu programlar sistem
üzerinde aşırı bir performans gerektirir) için uygundur.

+ Kuyruk soyut veri tipi: Kuyruktaki elemanlar, ilk giren ilk çıkar(FIFO)
sırasıyla döndürülür.  Kuyruğa eklenen ilk eleman, ilk sırada kuyruktan
çıkarılır.

+ Taşıyıcı sınıf ve yineleyici soyut veri tipleri: Taşıyıcı sınıflar(toplama
sınıfları da denir); nesne toplamalarını tutmak için tasarlanmış sınıflardır.
Taşıyıcı sınıflar genelde ekleme, silme, arama, sıralama ve bir elemanının
sınıfın üyesi olup olmadığını test etme gibi servisler sunarlar. Diziler,
yığınlar, kuyruklar, ağaçlar ve bağlı listeler, bazı taşıyıcı sınıf
örnekleridir.

+ Yineleyici nesneleri ya da daha kısa olarak yineleyicileri, taşıyıcı
sınıflarla ilişkilendirmek yaygındır. Bir yineleyici, bir toplamanın sıradaki
elemanını döndüren(ya da toplamanın sıradaki elemanı üzerinde bazı işlemler
yapan) bir nesnedir. Bir sınıf için yineleyici bir kez yazıldığında, sınıftan
sıradaki elemanı elde etmek basitçe ifade edilebilir. Birçok kişi tarafından
okunan bir kitapta pek çok ayraç olabileceği gibi, bir taşıyıcı sınıfın
üzerinde de aynı anda çalışan birkaç yineleyici olabilir. Her bir yineleyici,
kendi "konum" bilgisini yönetir.

+ Bir sınıfın tanımlanması sadece başka bir sınıfa pointer kullanıldığında,
diğer sınıfın sınıf öncü dosyasının(genelde, sınıfın 'private' verilerini
gösterir) '#include' ile eklenmesi gerekli değildir.

### GENEL PROGRAMLAMA HATALARI

+ Nesnenin veri üyelerinden birisini değiştiren üye fonksiyonu 'const'
tanımlamak yazım hatasıdır.

+ Bir sınıfın aynı nesnesi içinde 'const' olmayan bir üye fonksiyonu çağıran
üye fonksiyonu 'const' tanımlamak yazım hatasıdır.

+ Bir 'const' nesneden 'const' olmayan üye fonksiyon çağırmak yazım hatasıdır. 

+ Bir yapıcıyı ya da yıkıcıyı 'const' tanımlamaya çalışmak yazım hatasıdır.

+ 'const' veri üyeleri için üye ilk değer atayıcıları sağlamamak yazım
hatasıdır.

+ Üye ilk değer atayıcısı verilmemiş üye nesnenin sınıfına varsayılan yapıcı
sağlamamak yazım hatasıdır.

+ Üye seçim operatörünü(.) nesneye bir pointer ile birlikte kullanmaya
çalışmak bir yazım hatasıdır. Nokta üye seçim operatörü(.) sadece bir nesne
ile veya nesneye bir referans ile birlikte kullanılabilir.

+ 'new' ve 'delete' biçiminde dinamik hafıza ayırmayı 'malloc()' ve 'free()'
biçiminde dinamik hafıza ayrımaylakarıştırmak mantık hatasıdır. 'malloc()' ile
ayrılmış alan 'delete' ile boşaltılamaz; 'new' tarafından oluşturulmuş
nesneler 'free()' ile yok edilemez.

+ Diziler için 'delete[]' yerine 'delete' kullanmak, çalışma zamanı mantık
hatalarına yol açar. Problemlerden kaçınmak için, dizileri çin ayrılmış olan
'delete[]' operatörüyle, tek bir eleman için ayrılmış alanlar 'delete'
operatörü ile yok edilmelidir.

+ Dosya faliyet alanındaki 'static' sınıf değişkeninin tanımına 'static'
anahtar kelimesini eklemek yazım hatasıdır.

+ 'static' bi üye fonskiyonu 'const' bildirmek yazım hatasıdır.

+ 'static' bir üye fonksiyonu içinde 'this' göstericisine referans göstermek
bir yazım hatasıdır.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Nesnenin şimdiki durumunu değiştirmeyecek olan tüm üye fonksiyonları 'const'
bildirin, böylece ihtiyaç duyduğunuzda 'const' nesneler ile birlikte
kullanabilirsiniz.

+ Tüm arkadaşlık bildirimlerini sınıf başlığından hemen sonra yerleştirin ve
önlerine herhangi bir üye erişim belirteci(public, private, protected)
koymayın.

+ C++, C' yi içerdiğinden, C++ programları 'malloc()' ile oluşturulup 'free()'
ile yok edilen hafıza alanları ve 'new' ile oluşturulup 'delete' ile yok
edilen nesneler kullanabilirler. En iyisi sadece 'new' ve 'delete'
kullanmaktır.

+ Dinamik olarak ayrılmış hafızayı boşalttıktan sonra bu alanı gösteren
pointer' ı 0' a ayarlayın. Bu, daha önceden ayrılmış alanla pointer' ın
bağlantısını keser.

### PERFORMANS İPUÇLARI

+ Değişkenleri ve nesneleri sabit tanımlamak sadece verimli bir yazılım
mühendisliği alıştırması değildir, aynı zamanda performansı da önemli ölçüde
arttırabilir; çünkü bugünün kapsamlı iyileştirici derleyicileri, değişkenler
üzerinden yapılamayacak iyileştirmeleri sabitler üzerinde gerçekleştirebilir.

+ Üye nesnelere, üye ilk değer atayıcısı ile ilk değerlerini verin. Bu, üye
nesnelerin iki kez değerlerinin atanması problemini ortadan kaldırır(birincisi
varsayılan yapıcı tarafından, ikincisi set() fonksiyonlarıyla).

+ Saklama alanı ekonomisi için, her sınıf için, her üye fonksiyonun  sadece
bir kopyası bulunmaktadır ve bu üye fonksiyon, sınıfın her nesnesi tarafından
çağrılır. Öte yandan, her nesne, sınıf veri üyelerinin kendi kopyasını tutar.

+ Verinin tek bir kopyası yeterliyse hafızadan tasarruf sağlamak için 'static'
veri üyelerini kullanın.

  YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ Bir nesneyi 'const' tanımlamak, en az yetki presibini güçlendirmeye yardım
eder. Nesneyi değiştirmeye çalışmak, çalışma zamanı hatalarına neden
olacağından derleme esnasında yakalnır.

+ 'const' kullanmak; düzgün sınıf tasarımı, program tasarımı ve kodlama için
önemlidir.

+ 'const' bir üye fonksiyon, 'const' olmayan bir sürümüyle overload
edilebilir. Hangi overload edilmemiş fonskiyonu kullanacağını derleyici,
nesnenin 'const' olmadığına bakarak karar verir.

+ 'const' bir nesne atama işlemiyle değiştirilemez. Bu yüzden ilk değeri
atanmalıdır. Bir veri üyesi 'const' olarak bildirildiğinde ilk değerini
vermesi için yapıcıya, bir üye ilk değer atayıcı verilmelidir.

+ Sabit sınıf üyelerine ('const' nesneler ve 'const' "değişkenler") üye ilk
değer atayıcı yapısıyla ilk değerleri atanmalıdır; atama operatörü ile
yapılan atamalara izin verilmez.

+ Sınıfın, nesneyi değiştirmeyen tüm üye fonksiyonlarını 'const' olarak
bildirmek iyi bir alıştırmadır. Bu durum, bir sınıftan 'const' bir  nesne
oluşturmayacaksanız garip olacaktır. Fakat, bu tür fonksyonları 'const'
tanımlamanın yararları da vardır. Eğer farkında olmadan nesneyi bu fonksiyonu
ile değiştirmeye kalkarsanız, derleyici hata verecektir.

+ Yazılımın tekrar kullanılabilirliğinin en yaygın biçimi birleşimdir. Bu
şekilde bir sınıf, bir başka sınıf nesnesini üye olarak içerebilir.

+ Eğer bir sınıf, bir başka sınıfın nesnesini üye olarak içeriyorsa, bu
nesneyi 'public' yapmak, nesnenin 'private' veri üyelerinin depolanmasını ve
saklanmasını ortadan kaldırmaz.

+ 'friend' fonskyionların prototipleri, sınıfın tanımlamasında bulunmasına
rağmen, 'friend' fonskiyonlar bir üye fonksiyon değildir.

+ Üye erişim belirteçleri(private, public, protected)' nin  arkadaşlık
bildirimleriyle bir ilişkisi yoktur. Bu yüzden arkadaşlık bildirimleri, sınıf
tanımlamasında herhangi bir yere konulabilir.

+ NYP topluluğundaki bazı insanlar, arkadaşlığın bilgi saklama özelliğini
bozduğunu ve NYP yaklaşımını zayıflattığını düşünürler.

+ C++' ın karma bir dil olması yüzünden, iki tipte de fonksiyon çağrılarının
karışımı olması yaygındır ve genelde bu tür çağrılar arka arkaya yapılır.
Basit veri veya nesneleri geçirmek için C-stili çağrılar, fonksiyonları(veya
mesajları) nesnelere geçirmek için C++ çağrıları kullanılır.

+ Bazı organzasyonlar, kendi yazılım mühendisliği standartlarında
'static' üye fonksiyonlara tüm çağrıları, sınıf adıyla ve nesne
tutamağı(handle) kullanmadan yapmaktadırlar.

+ Bir sınıfın 'static' veri üyeleri be 'static' üye fonksiyonları, sınıfın hiç
bir nesnesi olmasa bile vardır ve kullanılabilir.

+ Programcı sınıf mekanizmasıyla yeni tipler oluşturabilir. Bu yeni tipler,
doğan tipler gibi yaygın şekilde kullanılabilecek şekilde tasarlanabilir. Bu
yüzden, C++, genişletilebilir bir dildir. Dilin bu yeni tiplerle kolaylıkla
genişletilebilmesine rağmen temel dilin kendisi değiştirilemez.

  TEST VE HATA İPUÇLARI:

+ Eğer nesneyi değiştirmiyorlarsa, üye fonksiyonları 'const' olarak bildirin.
Bu, birçok hatayı ortadan kaldırmanıza yardım eder.

+ C++ gibi diller evrim geçirdikçe "hareketli hedef" lerdir. Dile, daha birçok
anahtar kelime eklenecek gibidir. Bu yüzden "nesne" gibi "anlamlı" kelimeleri
belirteç olarak kulanmaktan kaçının. "nesne" kelimesi şimdilik bir C++ anahtar
kelimesi olmamasına rağmen bir gün olabilir ve bu, gelecekte, varolan kodun
yeni derleyicilerde çalışmamasına sebep olabilir.

---

## 18. BÖLÜM (C++ Operatör Overload/Aşırıyükleme)

### TERİMLER

+ cast operator function: dönüşüm operatör fonksiyonu
+ conversion constructor: dönüşüm yapıcısı
+ conversion operator: dönüşüm operatörü
+ copy constructor: kopya yapıcı
+ dangling pointer: sallantılı pointer/gösterici
+ operator overloading: operator overloading/aşırıyüklemesi
+ self assignment: kendi kendine atama
+ user-defined conversion: kullanıcı tanımlı/tanımalamalı dönüşüm

### ÖZET

+ 16. ve 17. bölümlerde, C++ sınıfları ve Soyut Veri Tipleri (SVT) fikrinin
temellerini ele aldık. Sınıf nesnelerinin (yani SVT kopyalarının) yönetimi,
nesnelere (üye fonksiyon çağrısı biçiminde) mesajlar göndererek yapılıyordu.
Bu fonksiyon çağrısı yazımı, bazı sınıflar için özellikle de matematik
sınıfları için karmaşıktır. Bu tür sınıflar için C++'ın nesne yönetimini
belirleyen zengin doğal operatörlerini kullanmak daha iyi olacaktır. Bu
bölümde, C++ operatörlerinin, sınıf nesneleriyle nasıl birlikte
çalıştırılacağını göstereceğiz. Bu işleme, operatör aşırı yükleme denir. C++'
ı, bu yeni olanaklarla genişletmek doğru ve doğaldır. Bu, ayrıca çok büyük
dikkat gerektirir çünkü aşırı yükleme yanlış kullanıldığında program zor
anlaşılabilir bir hale gelebilir.

+ '<<' operatörünün, C++' ta akış ekleme ve bit düzeyinde sola kaydırma
operatörü olmak gibi birçok görevi vardır. Bu operatör overloading örneğidir.
Benzer şekilde '>>' operatörü de overload' dur; hem akış çıkarma, hem de sağa
kaydırma operatörü olarak kullanılır. Bu overload C++ standart kütüphanesinde
tanımlanmıştır.

+ C++, programcıya birçok operatörü aşırı yükleme imkanı sunar. Derleyici,
operatörün kullanımına uygun olan kodu yaratır. Bazı operatörler sıklıkla
aşırı yüklenir, özellikle de atama operatörü ve + ve — gibi bazı aritmetik
operatörleri. Aşırı yüklenmiş operatörlerin yaptığı iş, açık fonksiyon
çağrılarıyla da yapılabilir, fakat operatör biçiminde yazım genelde daha
okunaklıdır.

+ C++, yeni operatörlerin üretilmesine izin vermese de, programcıya birçok
operatörü kullanıldıkları biçime hassas olarak aşırı yükleme imkanı sunar.
Böylece, bu operatörler sınıf nesneleriyle kullanıldıkarı zaman, yeni tipler
uygun anlam taşırlar. Derleyici, operatörün kullanımına uygun olan kodu
oluşturur.

+ Operatör overloading, C++' ın genişletilebilirliğne katkı sağlar.

+ Operatörleri, fonksiyon tanımlamasında (başlık ve gövde ile birlikte)
yaptığımız gibi overload ederiz. Fakat bunu yapmak için fonksiyonun adını,
'operator' anahtar kelimesinin yanına overload edilecek olan operatör
sembolünü koyarak veririz. Örneğin, 'operator+' fonksiyonu, toplama
operatörünü(+) overload etmek için kullanılacaktır.

+ Bir operatörü sınıf nesneleri üzerinde kullanmak için, iki istisna hariç, o
operatörün aşırı yüklenmiş olması gereklidir. Atama operatörü (=), açık
olarak aşırı yüklenmeksizin, her sınıfla kullanılabilir. Atama operatörünün
varsayılan davranışı, sınıfın veri üyelerini üye düzeyinde atamaktır. Adres
operatörü de (&), herhangi bir sınıfın nesnesiyle aşırı yüklemeden
kullanılabilir. Adres operatörü (&), basitçe nesnenin hafızadaki adresini
döndürür. Adres operatörü(&) ayrıca overload edilebilir.

+ Overloading, en çok matematik sınıflarına uygundur.

+ C++ operatör zengini bir dildir. Her operatörün anlamını kavrayan C++
programcıları, yeni sınıflar için operatör overload işlemi yapılmak
istendiğinde mantıklı seçimler yapar.

+ Operatör aşırı yüklemenin önemli noktası, C++' ın doğal tipler için
sağladığı zengin operatör toplamasının kısa ve öz ifadelerini, kullanıcı
tanımlamalı tipler için de sağlamasıdır. Fakat operatör overloading otomatik
değildir. Programcı, istenilen işlemleri yapması için operatör overload eden
fonksiyonlar yazmalıdır. Bazen, bu fonksiyonlar en iyi biçimde üye
fonksiyonlar olacak şekilde, bazen de en iyi 'friend' fonksiyonlar olacak
şekilde ve nadiren üye ve 'friend' olmayan fonksiyonlar olacak şekilde
yapılırlar.

+ Aşırı yüklemenin yanlış kullanımı mümkündür. Örneğin '+' operatörü çıkarma
benzeri bir işlemi, '/' operatörü çarpma işlemi yapacak şekilde overload
edilebilir. Böyle kullanımlar programı anlaşılması zor yapacaktır.

+ Şu operatörler overload edilemez: (.), (.*), (::), (?:), (sizeof)

+ Bir operatörün önceliği, aşırı yüklemeyle değiştirilemez. Bu, operatörlerin
var olan önceliklerinin uygun olmayacağı şekilde aşırı yüklenmesi gibi garip
durumlara yol açabilir. Fakat, bir ifade de aşırı yüklenmiş operatörlerin
çalışma sırasını belirlemek için parantezler kullanılabilir.

+ Bir operatörün işleyişi, overload ile değiştirilemez.

+ Bir operatörün “li”liği (yani, operatörün aldığı operand sayısı)
değiştirilemez; aşırı yüklenmiş tekli operatörler, tekli olarak kalacaktır;
aşırı yüklenmiş ikili operatörler, ikili olarak kalacaktır. C++'ın tek üçlü
operatörü (?:), aşırı yüklenemez!

+ Yeni operatörler yaratmak mümkün değildir; sadece varolan operatörler aşırı
yüklenebilir.

+ Bir operatörün, doğal nesnelerle çalışması, operatör aşırı yüklemesi ile
değiştirilemez. Örneğin programcı, +' nın nasıl iki sayıyı topladığını
değiştiremez. Operatör aşırı yükleme, sadece kullanıcı tanımlı tiplerdeki
nesnelerle veya doğal tipteki nesnelerle kullanıcı tanımlı tiplerdeki
nesnelerin karışımı ile çalışır.

“Atama ve toplama öperatörlerini 
  
  nesne2 = nesne2 + nesne1;

gibi ifadelere imkan vermek için aşırı yüklemek, += operatörünün 

  nesne2 += nesne1;

gibi ifadelere olanak tanımak için aşırı yüklendiği anlamına gelmez.

Bu tür bir davranış, açık olarak + operatörünü aşırı yükleme ile
gerçekleştirilebilir.

+ Operatör fonksiyonları, üye ya da üye olmayan fonksiyonlar olabilir; üye
olmayan fonksiyonlar genelde, performans sebebiyle 'friend' yapılır. Üye
fonksiyonlar, kendi sınıf nesnelerinin argümanlarından birini (ikili
operatörlerin sol argümanı) almak için this göstericisini kapalı olarak
kullanırlar. Her sınıf argümanı, üye olmayan fonksiyon çağrısında açık olarak
sıralanmalıdır.

+ (), ( 1, -> veya herhangi bir atama operatörünü aşırı yüklerken, aşırı
yükleyen fonksiyon, sınıf üyesi olarak bildirilmelidir. Diğer operatörler
için, aşırı yükleyen fonksiyon, üye olmayan bir fonksiyon olabilir

+ Bir operatör fonksiyon sınıf üyesi olsun veya olmasın operatör aynı şekilde
kullanı- lır. Öyleyse, hangi yapılış daha iyidir?

Bir operatör fonksiyonu, üye fonksiyon olarak yapıldığında en soldaki (veya
tek) operand, operatör sınıfının bir sınıf nesnesi veya sınıf nesnesine bir
referans olmalıdır.  Eğer soldaki operand, başka bir sınıf veya doğal tip
nesnesi olmak zorundaysa, bu operatör fonksiyonu, üye olmayan fonksiyon olarak
yapılmalıdır (Bölüm 18.5'teki << ve >> operatörlerini akış ekleme ve akış
çıkarma operatörü olarak aşırı yüklerken olduğu gibi). Üye olmayan bir
operatör fonksiyonunun, eğer 'private' veya 'protected' üyelere doğrudan
ulaşması gerekiyorsa, 'friend' olması gereklidir.

Aşırı yüklenmiş '<<' operatörünün sol operandının, 'cout << sinifNesnesi'
ifadesindeki 'cout' gibi 'ostream&' olması gereklidir, dolayısıyla üye olmayan
bir fonksiyon olması gereklidir. Benzer şekilde, aşırı yüklenmiş '>>'
operatörünün sol operandının 'cin >> sinifNesnesi' ifadesindeki 'cin' gibi
'istream&' olması gereklidir, bu yüzden o da üye olmayan fonksiyon olmalıdır.
Aşırı yüklenmiş operatör fonksiyonlarının performans sebepleriyle bazen
'friend' fonksiyon olması gerekebilir.

+ Bir operatörü üye ve 'friend' olmayan fonksiyon olacak şekilde aşırı
yüklemek mümkündür, fakat sınıfın 'private' veya 'protected' verisine erişmesi
gereken böyle bir fonksiyonun, sınıfın 'public' arayüzünde verilen
'get()/oku()' ve 'set()/ayarla()' fonksiyonlarını kullanmaya ihtiyacı
olacaktır. Bu fonksiyonları çağırmak zayıf performans problemine sebep
olabilir, dolayısıyla bu fonksiyonlar, performansı arttırmak için 'inline'
yapılmalıdır.

+ Eğer soldaki operand, başka bir sınıf veya doğal tip nesnesi olmak
zorundaysa, bu operatör fonksiyonu, üye olmayan fonksiyon olarak yapılmalıdır.

+ Özel bir sınıfın operatör üye fonksiyonları, sadece ikili operatörün sol
operandının o ınıfın nesnesi olduğu zaman veya tekli operatörün tek
operandının o sınıfın nesnesi olduğu zaman çağrılır.

+ Birisinin, bir operatörü aşırı yüklemek için bir üye olmayan fonksiyon
seçmesinin bir başka sebebi de, operatörü değiştirilebilir yapabilmektir.
Örneğin, long int tipinde sayi nesnemiz olduğunu ve DevTamsayi sınıfının
buyukTamsayi1 nesnesi olduğunu (altta çalışan donanımın word büyüklüğü
tarafından sınırlandırılması yerine gelişi güzel büyüklükte tamsayılar içeren
bir sınıf; DevTamsayi sınıfı bölüm alıştırmalarında geliştirilecektir.)
düşünelim. Toplama operatörü (+), DevTamsayi ve long int'in (buyukTamsayi1 -
sayi ifadesindeki gibi ) veya long int ve DevTamsayi'nin (sayi +
buyukTamsayi1) toplamı olarak geçici bir DevTamsayi nesnesi üretir.
Dolayısıyla, toplama operatörünün (normalde olduğu gibi) değiştirilebilir
olması gereklidir.  Problem, eğer toplama operatörü bir üye fonksiyon olarak
aşırı yüklendiyse, sınıf nesnesinin operatörün sol tarafında olması
zorunluluğudur. Bu yüzden, biz de operatörü, DevTamsayi' nin toplamın sağ
tarafında yer alması için üye olmayan 'friend' fonksiyon olarak aşırı
yükleriz. DevTamsayi'yi sol tarafta kullanan operator+ fonksiyonu hâlâ üye
olabilir. Üye olmayan bir fonksiyon, eğer uygun Ayarla ve Oku fonksiyonları
sınıfın public arayüzünde varsa ve özellikle Ayarla ve Oku fonksiyonları
'inline' yapılmışsa, 'friend' olmak zorunda değildir.

+ Bir sınıf için tekli operatör, argümanı olmayan ve 'static' olmayan üye
fonksiyon veya tek argümanı olan (bu argüman ya sınıf nesnesi ya da sınıf
nesnesine bir referans olmak zorundadır) ve üye olmayan fonksiyon olarak aşırı
yüklenebilir. Aşırı yüklenmiş operatörleri yapan üye fonksiyonlar, 'static'
olmamak zorundadır, böylece sınıfın 'static' olmayan verisine ulaşabilirler.
'static' üye fonksiyonların, sadece 'static' veri üyelerine erişebileceğini
unutmayın.

Tekli '!' operatörünü, kullanıcı tanımlamalı 'String' sınıfının bir nesnesinin
boş olup olmadığını test etmek ve bool tipinde bir sonuç döndürmek için aşırı
yükleyebilir gibi tekli bir operatörü, argümansız ve 'static' olmayan bir üye
fonksiyon olarak aşırı yüklediğimiz zaman, eğer s bir 'String' sınıf nesnesi
veya sınıf nesnesine bir referans ise, derleyici '!s' ifadesini görünce
's.operatör!()' çağrısı üretir. s operandı, operator!  String sınıf üye
fonksiyonunun çağrıldığı sınıf nesnesidir. Fonksiyon, sınıf tanımlamasında
aşağıdaki gibi bildirilmiştir.

```c++
class String{
public:
    bool operator!() const;
    ...
};
```

'!' gibi bir tekli operatör, iki farklı yolla; tek argümanlı ve üye olmayan
fonksiyon olarak ya nesne olan bir argümanla (bu, nesnenin kopyasını
gerektirir, böylece fonksiyonun yan etkileri orijinal nesneyi etkilemez), ya
da nesneye bir referans olan argümanla (orijinal nesnenin kopyası yapılmaz, bu
yüzden fonksiyonun tüm yan etkileri orijinal nesneyi etkiler) aşırı
yüklenebilir. Eğer s bir 'String' sınıf nesnesiyse (ya da String sınıf
nesnesine bir referans ise), !s' e, aşağıdaki gibi bildirilmiş 'String'
sınıfının üye olmayan 'friend' fonksiyonunu çağıran operator! (s) ifadesi
yazılmış gibi davranılır.

```c++
class String{
    friend bool operator!(const String &);
    ...
};
```

+ Tekli operatörleri aşırı yüklerken, operatör fonksiyonlarını üye olmayan
'friend' fonksiyon yerine sınıf üye fonksiyonu yapmak tercih edilebilir.
Kesinlikle gerekli olmadığı sürece 'friend' fonksiyon ve 'friend' sınıflardan
kaçının. 'friend'lerin kullanımı, sınıfın depolamasını ortadan kaldırır.

+ Bir ikili operatör, tek argümanlı ve 'static' olmayan üye fonksiyon olarak
veya iki argümanlı (bu argümanlardan birisi sınıf nesnesi veya sınıf nesnesine
bir referans olmalıdır) ve üye olmayan fonksiyon olarak aşırı yüklenebilir.

'+=' ikili operatörünü, kullanıcı tanımlamalı String sınıfının tek argümanlı
ve static olmayan üye fonksiyonu olarak aşırı yüklediğimiz zaman, y ve z
String sınıf nesneiyse, 'y += z' ifadesine, aşağıdaki gibi bildirilen
'operator+=' üye fonksiyonunu çağıran 'y.operator += (z)' ifadesiymiş gibi
davranılır.

```c++
class String{
public:
    const String &operator+= (const String &);
    ...
};
```

Eğer '+=' ikili operatörü, üye olmayan fonksiyon olarak aşırı yüklendiyse, bir
tanesi sınıf nesnesi veya sınıfın nesnesine referans olan iki argüman almak
zorundadır. Eğer y ve z, String sınıf nesneleri veya String sınıf nesnelerine
referans iseler, 'y += z' ifadesine, programda aşağıdaki gibi bildirilen
'operator+=' üye olmayan 'friend' fonksiyonunu çağıran 'operator+=(y, z)'
ifadesi yazılmış gibi davranılır.

```c++
class String{
    friend const String &operator+=(String &, const String &);
    ...
};
```

+ C++'ta dizi yazımı göstericilere bir alternatiftir, dolayısıyla diziler
büyük bir hata potansiyeline sahiptir. Örneğin, bir program, kolaylıkla bir
dizinin her iki sonunun ötesine geçebilir. Çünkü, C++ belirteçlerin dizinin
aralığı dışına düşüp düşmediğini kontrol etmez. İki dizi, eşitlik operatörü
veya ilgili bir operatör ile anlamlı bir şekilde karşılaştırılamaz (çünkü dizi
isimleri aslında dizilerin başlangıç adresine göslericilerdir). Bir dizi,
herhangi bir boydaki diziyi tutmak için tasarlanmış genel amaçlı fonksiyona
geçirileceği zaman, ilave argüman olarak dizi boyu da geçirilmek zorundadır.
Bir dizi, bir başka diziye atama operatörü ile atanamaz (çünkü dizi isimleri
const göstericilerdir ve sabit göstericiler atama operatörünün sol tarafında
kullanılamaz). Bunlar ve diğer olanaklar, dizilerle çalışırken “normal”
gelecek imkanlardır. C++, bu özellikleri sunmaz. Fakat C++, operatör aşırı
yükleme mekanizması ile bu tür dizi olanaklarını gerçekleştirme imkanı sunar.

Bu örekte, belirteçlerin dizinin sınırları içinde kaldığından emin olmak için
aralık kontrolü yapabilen bir dizi sınıfı geliştirilecektir. Sınıf, bir dizi
nesnesinin bir başka dizi nesnesine atama operatörüyle atanmasa imkanı
sağlayacaktır. Bu dizi sınıfının nesneleri, kendi boylarını bileceklerdir.
Böylece, diziyi bir fonksiyona geçirirken, dizi boyunu ayrı bir argüman olarak
geçirmeye gerek kalmayacaktır.  Bütün bir dizi, akış çıkarma ve akış ekleme
operatörleriyle sırasıyla girdi ve çıktı olabilecektir. Dizi
karşılaştırmaları, '==' ve '!=' eşitlik operatörleriyle yapılabilecektir. Dizi
sınıfımız, programda kaç tane dizi nesnesi oluşturulduğunu takip etmek için
'static' bir üye kullanmaktadır.

Bu örnek, veri soyutlama bilginizi keskinleştirecektir. Muhtemelen, bu dizi
sınıfına bir çok iyileştirme önermek isteyeceksiniz. Sınıf geliştirmek ilginç,
yaratıcı ve ente- lektüel olarak zorlayıcı bir olaydır. Amaç, her zaman
“değerli sınıflar” yapmaktır.

+ İlginç olarak, dizi belirteç operatörü [] sadece dizilerle kullanılmak üzere
kısıtlanmamıştır; bağlı listeler, stringler, sözlükler gibi diğer düzenli
taşıyıcı sınıf çeşitlerinden eleman seçmek için kullanılabilir.

+ Bir kopya yapıcı, bir nesneye, aynı sınıfın bir başka nesnesiyle ilk
değerini atamak için kullanılır. Kopya yapıcılar, değere göre çağırma gibi,
bir nesnenin kopyası gerektiğinde ve çağrılan fonksiyondan bir değer geri
döndürürken çağrılırlar.  Kopyalanacak nesne kopya yapıcıya referansa göre
çağırma ile geçirilmelidir.  

+ Çoğu program, farklı tiplerdeki bilgiyi işler. Bazen tüm işlemler aynı tipte
kalır. Örneğin, tamsayı ile tamsayının toplamı tamsayı üretir (tamsayı ile
göslerilemeyecek büyüklükte olmadığı sürece). Fakat genelde, veriyi bir tipten
bir başka tipteki veriye dönüştürmek gerekir. Bu, atamalarda, hesaplamalarda,
fonksiyonlara değerler geçirirken ve fonksiyonlardan değerler geri döndürürken
gerekli olabilir. Derleyici, doğal tipler arasında nasıl dönüşüm yapacağını
bilir. Programcılar, tip dönüşümü ile doğal tipler arasında dönüşümleri
sağlayabilirler.

Peki kullanıcı tanımlamalı tipler için durum nedir?

+ Derleyici, kullanıcı tanımlamalı tipler ve doğal tipler arasında nasıl
dönüşüm yapılacağını bilemez. Programcı bu tür dönüşümleri nasıl olacağını
belirtmelidir. Bu tür dönüşümler dönüşüm yapıcıları ile yapılabilir. Bunlar,
diğer tipteki nesnelere (doğal tipler dahil) özel bir sınıfın nesnelerine
çeviren tek argümanlı yapıcılardır.

+Bir dönüşüm operatörü (tip dönüşüm operatörü olarak da bilinir), bir sınıfın
nesnesini bir başka sınıfın nesnesine veya doğal tipteki bir nesneye
dönüştürmek için kullanılabilir. Bu tür bir dönüşüm operatörü, 'static'
olmayan üye fonksiyon olmalıdır. Bu tip dönüşüm operatörleri 'friend'
fonksiyon olamaz.

    A::operator char * () const; 

fonksiyon prototipi, kullanıcı tanımlamalı A tipindeki bir nesneden, char *
tipinde geçici bir nesne yaratmak için aşırı yüklenmiş tip dönüşüm operatörü
bildirmektedir.  Aşırı yüklenmiş bir tip dönüşüm operatör fonksiyonu, bir geri
dönüş tipi belirtmez; Geri dönüş tipi, nesnenin dönüştürüldüğü tiptir. Eğer s,
bir sınıf nesnesi ise derleyici (char* s) ifadesini görünce, 's.operator
char*()' çağrısı üretir. s operandı, operator char* üye fonksiyonunun
çağrıldığı s sınıf nesnesidir.

Aşırı yüklenmiş dönüşüm operatör fonksiyonları, kullanıcı tanımlamalı
tiplerden doğal tiplere veya diğer kullanıcı tanımlamalı tiplerdeki
nesnelere dönüşüm yapmak in tanımlanabilirler.

    A:: operator int () const;
    A:: operator DigerSinif () const; 

prototipleri, kullanıcı tanımlamalı A tipindeki bir nesneyi, bir tamsayıya ve
kullanıcı tanımlamalı DigerSinif tipindeki bir nesneye çevirmek için aşırı
yüklenmiş dönüşüm operatör fonksiyonlarını bildirmektedir.

Dönüşüm operatörlerinin ve dönüşüm yapıcılarının bir güzel özelliği de gerekli
olduğuunda derleyicinin geçici nesneler yaratmak için derleyicinin bu
fonksiyonları çağırmasıdır. Örneğin, kullanıcı tanımlamalı String sınıfında
bir s nesnesi, program içinde sıradan bir char* beklenen 

    cout << s;

gibi bir yerde görünürse, derleyici nesneyi char *'a çevirmek için aşırı
yüklenmiş operator char* operatör fonksiyonunu çağırır ve ifadede oluşan
char*'ı kullanır.  Siring sınıfımız için sağlanmış bu dönüşüm operatörü ile
'cout' kullanılarak bir String yazdırmak için akış ekleme operatörünün aşırı
yüklenmesine gerek kalmaz.

+ Bir dönüşüm yapıcısı, argümanını, kendi sınıfının bir nesnesine çevirmek
için kullanılan tek argümanlı bir yapıcıdır. Derleyici, bu tür bir yapıcıyı
kapalı olarak çağırabilir.

+ Bir dönüşüm yapıcısı, argümanını, kendi sınıfının bir nesnesine çevirmek
için kullanılan tek argümanlı bir yapıcıdır. Derleyici, bu tür bir yapıcıyı
kapalı olarak çağırabilir.

+ Atama operatörü en sık aşırı yüklenen operatördür. Normalde bir nesneyi aynı
sınıfın bir başka nesnesine atamak için kullanılır, fakat dönüşüm
yapıcılarının kullanımı aracılığıyla, farklı sınıflar arasındaki atamalarda da
kullanılabilir

+ Eğer aşırı yüklenmiş bir atama operatörü tanımlanmamışsa, atamaya yine izin
verilir, fakat varsayılan olarak her veri üyesini üye düzeyinde kopyalama ile
kopyalar. Bazı durumlarda bu kabul edilebilir. Dinamik olarak ayrılmış alanı
göste- Ten göstericiler içeren nesneler için üye düzeyinde kopyalama iki
farklı nesnenin aynı dinamik alanı göstermesiyle sonuçlanır. Bu nesnelerden
herhangi birisinin Yıkıcısı çağrılırsa, dinamik olarak ayrılmış alan silinir.
Eğer diğer nesne bu alanı kullanmak isterse sonuç tanımsızdır.

+ Arttırma operatörünü, önarttırma ve sonarttırma kullanımına izin verecek
şekilde aşırı yüklemek için, her aşırı yüklenmiş operatör fonksiyonu ayrı
işaretlere sahip olmalıdır. Böylece derleyici, hangi '++' sürümünün
kullanılmak üzere istendiğine karar verebilir. Önek sürümleri, aynen diğer
önek tekli operatörler gibi aşırı yüklenir. Sonartırma operatör fonksiyonuna
tek bir işaret sağlamak, fonksiyona 'int' tipinde olması zorunlu olan ikinci
bir argüman vermekle olur. Aslında, kullanıcı bu ikinci argüman için özel bir
değer belirtmez. Sadece, derleyicinin, arttırma ve azaltma operatörlerinin
önek ve sonek versiyonlarını ayrıt etmesine yardımcı olmak için vardır.

+ Artırma operatörünü, önarttırma ve sonarttırma kullanımına İzin verecek
şekilde aşırı yüklemek için, her aşırı yüklenmiş operatör fonksiyonu özel
işaretlere sahip olmalıdır. Böylece, derleyici hangi ++ sürümünün kullanılmak
üzere istendiğine karar verebilir. Önek sürümleri, aynen diğer önek tekli
operatörler gibi aşırı yüklenir.

Örnek olarak, kullanıcı tanımlamalı Tarih sınıfının t1 nesnesi içindeki güne 1
eklemek istediğinizi varsayalım. Derleyici,

    ++t1;

önarttırma ifadesini gördüğü zaman, prototipi

    Tarih & operator++();

olan
    t1.operator++()

üye fonksiyon çağrısını üretir.

Eğer önarttırma, üye olmayan fonksiyon olarak yapılmışsa, derleyici

    ++t1

ifadesini görünce, prototipi Tarih sınıfı içinde

    friend Tarih &operator++ (Tarih &);

olarak bildirilmiş

    operator++(t1)

fonksiyon çağrısını üretir.

Sonarttırma operatörünü aşırı yüklemek biraz zordur, çünkü derleyici aşırı
yüklenmiş önarttırma ve sonarttırma oparatör fonksiyonlarının işaretlerini
ayırt edebilmelidir. C++' ta alışılmış kullanım şekline göre derleyici

    t1++

sonarttırma ifadesini gördüğü zaman, prototipi
    
    Tarih operator++ (int)

olan

    t1.operator++(0)

fonksiyon çağrısını üretecektir. Buradaki sıfır (0), bir “sahte değerdir” ve
son arttırma için kullanılan operator++ argüman listesini, önarttırma için
kullanılan operator++ argüman listesinden ayırt edilebilir yapmak için
kullanılır.

Sonarttırma, üye olmayan bir fonksiyon olarak yapılmışsa, derleyici 

    t1++

ifadesini gördüğü zaman, prototipi 

    friend Tarih operator++(Tarih &, int);

olan, 

    operator++(t1,0); 

fonksiyon çağrısını üretir. O argümanı, sonarttırma için kullanılan operator++
argüman listesini, önarttırma için kullanılan argüman listesinden ayırt
edebilmek için kullanılmıştır.

Bu bölümde önarttırma ve sonarttırma operatörlerini aşırı yüklemek için
anlatılan her şey, önazaltma ve sonazaltma operatörleri için de geçerlidir.

### GENEL PROGRAMLAMA HATALARI

+ Aşırı yükleme yapılamayacak bir operatörü aşırı yüklemeye çalışmak yazım
hatasıdır.

+ Aşırı yükleme ile yeni operatör yaratmaya çalışmak yazım hatasıdır.

+ Bir operatörün doğal nesnelerle çalışma şeklini değiştirmeye çalışmak yazım
hatasıdır.

+ '+' gibi bir operatörü aşırı yüklemenin, '+=' gibi ilgili bir operatörü de
aşırı yükleyeceği veya '==' operatörünü aşırı yüklemenin, '!=' gibi ilgili bir
operatörü aşırı yükleyeceğini varsaymak hatadır. Operatörler sadece açık
olarak aşırı yüklenebilir. Kapalı olarak aşırı yükleme yoktur.

+ Bir operatörün “li”liğini aşırı yükleme ile değiştirmeye çalışmak yazım
hatasıdır.

+ Kopya yapıcının, değere göre çağırma değil referansa göre çağırmayı
kullanmak zorunda olduğuna dikkat edin. Yoksa, kopya yapıcı çağrısı sonsuz
yineleme ile sonuçlanır, çünkü değere göre çağırma durumunda, kopya yapıcıya
geçirilecek olan nesnenin kopyası yapılması gerektiğinden, kopya yapıcının
yinelenerek çağrılmasına neden olur.

+ Eğer kopya yapıcı, kaynak nesnedeki göstericiyi hedef nesnenin göstericisine
kopyalarsa, her iki nesne de aynı dinamik olarak ayrılmış alanı gösterecektir.
Çalışacak ilk yıkıcı, dinamik olarak ayrılmış alanı silecek ve diğer nesnenin
ptr'si tanımsız hale gelecektir, bu duruma “sallantılı gösterici” denir ve
ciddi çalışma zamanı hatası ile sonuçlanır.

+ Bir sınıfın nesneleri, dinamik olarak ayrılmış alan içeriyorken bu sınıf
için aşırı yüklenmiş atama operatörü ve bir kopya yapıcı sağlamamak mantık ha-
tasıdır.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Bir programı, aynı işlemleri açık fonksiyon ağrılarıyla yerine getirmekten
daha okunaklı yaptığı zaman operatör aşırı yüklemeyi kullanın.

+ Operatör aşırı yüklemeyi, aşırı ve tutarsız kullanmaktan kaçının çünkü bu,
programı zor okunur yapabilir

+ Operatörleri, doğal tipteki nesneler üzerindekine benzer veya aynı işlemleri
yapacak şekilde aşırı yükleyin.

+ C++ programlarını aşırı yüklenmiş operatörlerle yazmadan önce
kısıtlamalardan ve bazı operatörlere özel gerekliliklerden haberdar olmak
için, derleyi nizin belgelerine başvurun.

+ İlgili operatörler arasında tutarlılıktan emin olmak için, bir operatörü
diğerini yapmak için kullanın (yani, aşırı yüklemiş '+=' operatörü yapmak için
aşırı yüklenmiş + operatörünü kullanın).

+ Tekli operatörleri aşırı yüklerken, operatör fonksiyonlarını üye olmayan
'friend' fonksiyon yerine sınıf üye fonksiyonu yapmak tercih edilebilir.
Kesinlikle gerekli olmadığı sürece 'friend' fonksiyon ve 'friend' sınıflardan
kaçının. 'friend'lerin kullanımı, sınıfın depolamasını ortadan kaldırır.

### PERFORMANS İPUÇLARI

+ Bir operatörü üye ve 'friend' olmayan fonksiyon olacak şekilde aşırı
yüklemek mümkündür, fakat sınıfın 'private' veya 'protected' verisine erişmesi
gereken böyle bir fonksiyonun, sınıfın 'public' arayüzünde verilen
'get()/oku()' ve 'set()/ayarla()' fonksiyonlarını kullanmaya ihtiyacı
olacaktır. Bu fonksiyonları çağırmak zayıf performans problemine sebep
olabilir, dolayısıyla bu fonksiyonlar, performansı arttırmak için 'inline'
yapılmalıdır.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ Operatör aşırı yüklemesi, C++“ın genişletilebilirliğine katkı sağlar. Bu,
dilin en çekici yönlerinden birisidir.

+ Bir operatörün fonksiyonun en az bir argümanı, sınıf nesnesi veya sınıf
nesnesine bir referans olmalıdır. Bu, programcıların operatörlerin doğal
tiplerle çalışma şeklini değiştirmesini engeller

+ Kullanıcı tanımlamalı tipler için yeni giriş/çıkış olanakları, C++' a,
bildirimleri veya 'ostream' ve 'istream' sınıflarının 'private' veri üyeleri
değiştirilmeden eklenebilir. Bu, C++ programlama dilinin genişletilebilmesinin
bir örneğidir.

+ Yapıcı, yıkıcı, aşırı yüklenmiş atama operatörü ve kopya yapıcı, dinamik
olarak ayrılmış alan kullanan bir sınıf için genelde bir grup olarak
verilirler.

+ Bir sınıf nesnesinin, bir başkasına atanmasını engellemek mümkündür. Bu,
atama operatörünü sınıfın 'private' üyesi olarak bildirerek yapılır.

+ Sınıf nesnelerinin kopyalanmasını engellemek mümkündür. Bunu yapmak için hem
aşırı yüklenmiş atama operatörünü hem de kopya yapıcıyı 'private' yapın.

---

## 19. BÖLÜM (C++ Kalıtımı)

### TERİMLER

+ base class: temel sınıf
+ class hierarchy: sınıf hiyerarşisi
+ composition: birleşim
+ derived class: türetilmiş sınıf
+ has a relationship: 'e sahiptir ilişkisi
+ inheritance: kalıtım
+ is a relationship: bu bir ...' dir ilişkisi
+ knows a relationship: ...' yi bilir ilişkisi
+ subclass: altsınıf
+ superclass: üstsınıf
+ uses a relationship: ...' yı kullanır ilişkisi

### ÖZET

+ Bu ve sonraki bölümlerde, Nesne Yönelimli Programlamanın en önemli iki
yeteneğini ele alacağız: kalıtım ve çokbiçimlilik. 

Kalıtım, yeni sınıfların, varolan sınıflardan, nitelik ve davranışlarını almak
suretiyle yaratıldığı ve yeni sınıfın gerektirdiği yeteneklerle bunların
geçersiz hale getirildiği veya güzelleştirildiği, yazılımın yeniden
kullanılabilirlik biçimidir. Yazılımın yeniden kullanılabilirliği, program
geliştirmede zamandan tasarruf sağlar.  Onaylanmış ve hata ayıklaması yapılmış
yüksek kalitede yazılımın tekrar kullanılmasını teşvik eder, Böylece, bir
sistem, işlevsel hale geldikten sonra problemleri azaltır. Bunlar, heyecan
verici olanaklardır. 

Çokbiçimlilik bize, varolan ve belirtilmek üzere olan çok çeşitli sınıfları
idare etmek için genel biçimde programlar yazma imkanı verir. Kalıtım ve
çokbiçimlilik, yazılımın karmaşıklığını yönetmek için etkili tekniklerdir.

Yeni bir sınıf yaratılırken, tüm veri üyelerini ve üye fonksiyonları baştan
yazmak yerine, programcı yeni sınıfın, daha önceden tanımlanmış temel sınıfın
veri üyelerini ve üye fonksiyonlarını kalıtsal olarak alacak şekilde
tasarlayabilir. Yeni sınıfa 'türetilmiş sınıf' denir. Her türetilmiş sınıf,
daha sonra türetilecek sınıflar için temel sınıf olabilir. Tekli kalıtım ile,
bir sınıf, bir temel sınıftan türetilmiştir. Çoklu kalıtım ile bir sınıf
(muhtemelen birbiriyle ilişkili olmayan) birçok temel sınıftan türetilmiştir.
Tekli kalıtım çok açıkır. Göstereceğimiz bir kaç örnek ile okuyucu, çabucak
etkin duruma gelecektir. Çoklu kalıtım ise karmaşık ve hataya açıktır. Bu
ileri düzey konuyu kısa olarak ele alacağız. Okuyucuyu, bu güçlü özelliği
kullanmadan önce daha fazla çalışması gerektiği konusunda uyarıyoruz.

Türetilmiş bir sınıf, kendi veri üyelerini ve üye fonksiyonlarını ekleyebilir,
böylece türetilmiş sınıf temel sınıfından daha büyük olabilir. Türetilmiş
sınıf, temel sınıfından daha özeldir ve daha küçük bir grup nesneyi temsil
eder. Tekli kalıtımla türetilmiş sınıf, temel sınıfla aynı olarak başlar.
Kalıtımın gerçek gücü, temel sınıftan kalıtsal olarak alınan özelliklere
ekleme, çıkarma veya iyileştirmeler yapabilme yeteneğidir.

C++ üç çeşit kalıtım sunar: 'public, protected' ve 'private'. Bu bölümde,
'public' kalıtım üzerinde duracağız ve diğer iki tür hakkında özet olarak
bilgi vereceğiz. İkinci 'private' kalıtım, birleşime altematif bir biçim
teşkil eder.  Üçünü biçim, 'protected' kalıtım, C++'a göreceli olarak daha
sonra eklenmiştir ve nadiren kullanılmaktadır. 'public' kalıtım ile,
türetilmiş sınıfın her nesnesine, türetilmiş sınıfın temel sınıfının nesnesi
gözüyle bakılabilir.  Fakat, bunun tersi doğru değildir, temel sınıf
nesneleri, türetilmiş sınıfının nesneleri değildir. Biz bu, "Türetilmiş sınıf
nesnesi, temel sınıf nesnesidir” ilişkisinin faydalarını, bazı ilginç yönetim
işlemleri yaparken göreceğiz.  Örneğin, kalıtım aracılığıyla birbiriyle
ilişkili birçok farklı nesneyi, temel sınıf nes- nelerinin bağlı listesi içine
koyacağız. Bu, farklı nesneleri, genel bir yolla işleme imkanı vermektedir.
Bir sonraki bölümde göreceğimiz gibi, bu yetenek (çokbiçimlilik denir) Nesne
Yönelimli Programlamanın temel yakıtlarından birisidir.

Bu bölümde yeni bir üye erişim konirol biçimini, yani protected (korunmuş)
erişimi ilave edeceğiz. Türetilmiş sınıflar ve onların friend'leri protected
temel sınıf üyelerine erişebilirler. Fakat, friend ve türetilmiş sınıf olmayan
üye fonksiyonlar protected temel sınıf üyelerine erişemez.

Yazılım sistemleri yapma tecrübesi gösteriyor ki, kodun önemli bir bölümü
yakın ilişkili özel durumlarla uğraşmaktadır. Bu tür sistemlerde “büyük resmi”
görmek zor olmaktadır. Çünkü, tasarımcıların ve programcıların zihinleri özel
durumlarla meşgul olmaktadır. Nesne yönelimli programlama “Ağaçların arasından
ormanı görmek” için birkaç yol sunmaktadır, buna soyutlama denir.

Eğer bir program, yakın ilişkili özel durumlarla doluysa, özel durumlar
arasında ayrım yapan switch ifadelerini görmek ve her bir durum için işleme
mantığı sağlamak yaygındır. 20. Bölümde böyle bir switch mantığının, kalıtım
ve çokbiçimlilik kullanılarak nasıl daha basit bir mantıkla
değiştirilebileceğini göstereceğiz.

“Bu bir ..'dir” ilişkisi ile “...'e sahiptir” ilişkisini ayırırız. “Bu bir
...'dir” ilişkisi, kalıtımdır. “Bu bir ...'dir” ilişkisinde, türetilmiş sınıf
tipinde bir nesneye, temel sınıf” tipinde bir nesne gözüyle bakılabilir. "..'e
sahiprir” ilişkisi, birleşimdir. “..'e sahiptir” ilişkisinde, bir sınıf verisi
başka sınıfların bir ya da daha fazla nesnesine sahiptir.

Türetilmiş sınıf, temel sınıfın private üyelerine erişemez. Buna izin vermek,
temel sınıfın depolamasını ortadan kaldırır. Fakat, türetilmiş bir sınıf,
temel sınıfının 'public' ve 'protected' üyelerine erişebilir. Kalıtım
aracılığıyla türetilmiş sınıf tarafından erişilmesi gereken temel sınıf
üyeleri, 'private' olarak bildirilmelidir. Türetilmiş bir sınıf, temel sınıfın
'private' üyelerine, sadece temel sınıfın 'public' ve 'protected' arayüzünde
verilen erişim fonksiyonlarıyla erişebilir.

Kalıtımın bir sorunu, türetilmiş sınıfın sahip olmasına gerek olmayan ya da
açıkça olmaması gereken 'public' üye fonksiyonların yapılışını kalıtsal olarak
alabilmesidir. Bir temel sınıf üyesinin yapılışı, türetilmiş sınıf için uygun
olmadığı zaman, bu üye, türetilmiş sınıf içinde uygun bir yapılış ile geçersiz
hale getirilir. Bazı durumlarda, 'public' kalıtım uygun olmamaktadır.  Belki
de en heyecan verici olanı, yeni sınıfların varolan sınıf kütüphanelerini
kalıtsal olarak alabileceği fikridir. Organizasyonlar, kendi sınıf
kütüphanelerini geliştirmekte ve dünya çapında erişilebilen diğer
kütüphanelerin faydasını görmektedirler. İleride, yazılım, çoğunlukla
standartlaştırılmış tekrar kullanılabilen bileşenlerden yapılacaktur. Bu,
gelecekte ihtiyaç duyacağımız daha güçlü yazılım geliştirme zorluklarıyla başa
çıkmamıza yardım edecektir.

+ Tekli kalıtım ile, bir sınıf bir temel sınıftan türetilmiştir. Çoklu kalıtım
ile bir sınıf (muhtemelen birbiriyle ilişkili olmayan) birçok temel sınıftan
türetilmiştir.  Türetilmiş bir sınıf, kendi veri üyelerini ve üye
fonksiyonlarını ekleyebilir, böylece türetilmiş sınıf temel sınıfından daha
büyük olabilir. Türetilmiş sınıf temel sınıfından daha özeldir ve daha küçük
bir grup nesneyi temsil eder.

+ Nesne yönelimli programlamanın gücünün anahtarlarından birisi, yazılımın
tekrar kullanılabilirliğini kalıtım ile gerçekleştirmektir.

+ Programcı yeni sınıfı, daha önceden tanımlanmış temel sınıfın veri üyelerini
ve üye fonksiyonlarını kalıtsal olarak alacak şekilde tasarlayabilir. Yeni
sınıfa türetilmiş sınıf denir.

+ Türetilmiş sınıf, temel sınıfın private üyelerine erişemez. Buna izin
vermek, temel sınıfın depolamasını ortadan kaldırır. Fakat, türetilmiş bir
sınıf, temel sınıfının public ve private üyelerine erişebilir.

+ Bir türetilmiş sınıf, her zaman, temel sınıfın yapıcısını, türetilmiş
sınıfın temel sısnıf üyelerine ilk değer atamak için çağırır.

+ Yıkıcılar, yapıcı çağrılarıyla ters sırada çağrılır, bu yüzden türetilmiş
sınıf yıkıcısı, temel sınıfının yıkıcısından önce çağrılır.

+ Kalıtım, geliştirme sürecinde zamandan tasarruf sağlayan ve daha önceden
kendini kanıtlamış yüksek kalitede yazılımı kullanmayı teşvik eden yazılımın
tekrar kullanılabilirliğini sağlar.

+ Kalıtım, varolan sınıf kütüphanelerinden yapılabilir.

+ Yazılım ileride, çoğunlukla standartlaştırılmış tekrar kullanılabilen
bileşenlerden yapılacaktır

+ Türetilmiş sınıf, temel sınıfının koduna erişilmesine gerek kalmadan
yapılabilir. Fakat, temel sınıfın arayüzüne ve temel sınıfın nesne koduna
ihtiyaç duyulmaktadır.

+ Türetilmiş sınıfın bir nesnesine, temel sınıfının nesnesi gözüyle
bakılabilir. Fakat, bunun tersi doğru değildir.

+ Bir temel sınıf, tekli türetilmiş sınıflarıyla, bir hiyerarşi ilişkisi
içinde var olur.

+ Bir sınıf kendi başına da var olur, fakat bir sınıf kalıtım mekanizmasıyla
kullanıldıdığında bu sınıf ya diğer sınıflara nitelikleri ve davranışları
sağlayan temel sınıf ya da nitelikleri ve davranışları kalıtsal olarak alan
türetilmiş sınıf olur.

+ Bir kalıtım hiyerarşisi, fiziksel sistemin elverdiği ölçüde detaylı
olabilir.

+ Hiyerarşiler, karmaşıklığı anlayıp yönetmek için kullanışlı araçlardır.
Yazılım karmaşıklaştıkça, C++, kalıtım ve çokbiçimlilik aracılığıyla,
hiyerarşik yapıları destekleyen mekanizmalar sağlar.

+ Bir temel sınıf göstericisini, türetilmiş sınıf göstericisine dönüştürmek
için açık olarak bir dönüşüm kullanılabilir. Bu tür bir göstericinin
gösterdiği nesneye, gerçekte türetilmiş sınıf tipinde bir nesneyi göstermediği
sürece erişilmemelidir.

+ 'protected' erişim, 'public' erişim ve 'private' erişim arasında bir koruma
seviyesidir.  Bir temel sınıfın 'protected' üyelerine sadece temel sınıfın
üyeleri ve 'friend'leri ile türetilmiş sınıfın üye fonksiyonları ve
'friend'leri erişebilir. Başka hiçbir fonksiyon, temel sınıfın 'protected'
üyelerine erişemez.

+ 'protected' üyeler, türetilmiş sınıflara verilen hakları genişletir fakat
sınıfa ait olmayan ve 'friend' olmayan fonksiyonların hakkını reddeder.

+ Bir sınıfı temel sınıftan türetirken, temel sınıf ya 'public' ya 'protected'
ya da 'private' olarak bildirilir

+ Bir temel sınıftan 'public' kalıtımla bir sınıf türetirken, temel sınıfın
'public' üyeleri, türetilmiş sınıfın 'public' üyeleri olur ve temel sınıfın
'protected' üyeleri, türetilmiş sınıfın 'protected' üyeleri olur.

+ Bir temel sınıftan 'protected' kalıtımla bir sınıf türetirken, temel sınıfın
'public' ve 'protected' üyeleri, türetilmiş sınıfın 'protected' üyeleri olur.

+ Bir temel sınıftan 'private' kalıtımla bir sınıf türetirken, temel sınıfın
'public' ve 'protected' üyeleri, türetilmiş sınıfın 'private' üyeleri olur.

+ Bir temel sınıf, 'doğrudan temel sınıf' veya 'dolaylı temel sınıf' olabilir.
Bir türetilmiş sınıfın doğrudan temel sınıfı açık olarak listelenir. Dolaylı
temel sınıf, türetilmiş sınıfın başlığında açık olarak listelenmez, aksine,
dolaylı temel sınıf hiyerarşide iki veya daha fazla üst seviyeden kalıtımla
alınır.

+ Bir temel sınıf üyesi türetilmiş sınıf için uygun olmadığı zaman, türetilmiş
sınıfta bu üyeyi yeniden tanımlarız.

+ “Bu bir ...' dir” ilişkisi ile “...' e sahiptir” ilişkisini ayırmak
önemlidir. "...'e sahiptir” ilişkisinde bir sınıf nesnesi, bir başka sınıfın
nesnesini üye olarak içermektedir. “Bu bir ...'dir” ilişkisinde, dir
türetilmiş sınıf nesnesine temel sınıf nesnesi gibi davranılabilir. “Bu bir
...' dir” kalıtımdır, "...'e sahiptir” ise birleşimdir.

+ Bir türetilmiş sınıf nesnesi temel sınıf nesnesine atanabilir. Bu tür bir
atama anlamlıdır çünkü, türetilmiş sınıf, temel sınıfın her üyesine karşılık
gelen üyelere sahiptir.

+ Türetilmiş sınıf nesnesine bir gösterici, kapalı olarak temel sınıf
nesnesine bir göstericiye dönüştürülebilir.

+ Bir temel sınıf göstericisi, türetilmiş sınıf göstericisine açık olarak
dönüştürülebilir. Fakat hedef, türetilmiş sınıf nesnesi olmalıdır.

+ Bir temel sınıf genelliği temsil eder. Temel sınıftan türetilen tüm
sınıflar, temel sınıfın yeteneklerini kalıtımla alırlar. Nesne yönelimli
tasarım sürecinde, tasarımcı, genelliği arar ve istenilen temel sınıfı
oluşturmak için genelliği “çarpanlarına ayırır”. Ardından türetilmiş sınıflar,
temel sınıftan kalıtımla alınan yeteneklerin ilerisine özelleştirilir.

+ Bir yığın türetilmiş sınıf bildirimini okumak kafa karıştırıcı olabilir
çünkü, kalıtımla alınan üyeler gösterilmemektedir. Fakat, bununla birlikte
türetilmiş sınıfta gösterilirler. Benzer problem türetilmiş sınıfın
belgelerinde de olabilir.

+ “...'e sahiptir” ilişkisi yeni sınıfları, varolan sınıfların birleşimi
olarak oluşturmanın örneğidir.

+ “...yi bilir” ilişkisi başka nesnelere gösterici veya referans içeren nesne
örneğidir, böylece bu nesneler, diğer nesnelerin farkında olabilir.

+ Üye nesne yapıcıları, nesnelerin bildiriliş sırasıyla çağrılır. Kalıtımda,
temel sınıf yapıcıları kalıtım belirtildiği sırada ve türetilmiş sınıf
yapıcılarından önce çağrılır.

+ Bir türetilmiş sınıf nesnesi için, ilk önce temel sınıf yapıcısı çağrılır
daha sonra (üye nesne yapıcılarını çağırabilecek) türetilmiş sınıf yapıcısı
çağrılır.

+ Türetilmiş sınıf nesneleri yıkıldıkları zaman, yıkıcılar yapıcıların ters
sırasında çağrılır, İlk önce türetilmiş sınıf yıkıcısı çağrılır, daha sonra
temel sınıf yıkıcısı çağrılır.

+ Bir sınıf birden çok temel sınıftan türetilebilir, buna çoklu kalıtım denir.

+ Çoklu kalıtım, iki nokta üst üste (:) kalıtım belirtecinden sonra virgül ile
ayrılmış temel sınıf listesi ile belirtilir.

+ Türetilmiş sınıf yapıcısı, temel sınıflarının her biri için temel sınıf
yapıcısını üye ilk değer atayıcı yazımıyla Temel sınıf yapıcıları, temel
sınıfların kalıtımda bildiriliş sırasıyla çağrılır.

### GENEL PROGRAMLAMA HATALARI

+ Bir temel sınıf nesnesine türetilmiş sınıf nesnesi gibi davranmak hatalara
se- bep olabilir.

+ “Temel sınıf nesnesini gösteren bir temel sınıf göstericisini açık olarak
türetilmiş sınıf göstericisine dönüştürmek ve sonra o nesne içinde olmayan
türetilmiş sınıf üyelerine erişmeye çalışmak, çalışma zamanlı mantık
hatalarına sebep olabilir.

+ Temel sınıf üye fonksiyonu, türetilmiş sınıfta geçersiz hale getirilirken,
genelde temel sınıf sürümünü çağıran türetilmiş sınıf sürümünü çağırmak ve
bazı ilave işler yapmak yaygındır. Temel sınıf üye fonksiyonlarına referans
gösterirken faaliyet alanı çözünürlük operatörü kullanmamak sonsuz yinelemeye
sebep olur, çünkü türetilmiş sınıf üye fonksiyonu aslında kendisini çağırır.
Bu, sistemin hafızayı tüketmesine ve ölümcül çalışma zamanı hatalarına sebep
olur.

+ Bir türetilmiş sınıfı, temel sınıfının bir nesnesine atamak ve arkasından
yeni temel sınıftan, sadece türetilmiş sınıfta bulunan üyelere referans
göstermeye çalışmak yazım hatasıdır.

+ Bir temel sınıf göstericisini türetilmiş sınıf göstericisine dönüştürmek,
eğer bu gösterici temel sınıfta bulunmayan, istenilen türetilmiş sınıf üyesine
referans göstermek için kullanılırsa hatalara sebep olabilir.

### PERFORMANS İPUÇLARI

+ Performans esas sorun olduğunda, programcılar, kalıtımla aktardıkları
sınıfların kaynak kodunu görmek isteyebilir. Böylelikle, kodlarını, performans
ihtiyaçlarını karşılayacak şekilde ayarlayabilirler.

+ Eğer kalıtımla üretilmiş sınıflar olmaları gerekenden daha büyükse, hafıza
ve işlem israfına sebep olabilirler. İhtiyaçlarınıza en yakın sınıfları
kalıtımla alın.

### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ Genel olarak, bir sınıfın tüm veri üyelerini private olarak bildirin ve
'protected'i sadece sistemleri tek bir performans gerekliliğini karşılamak
üzere ayarlamaya ihtiyaç duyduğumuzda “son çare” olarak kullanın.

+ Türetilmiş bir sınıf, temel sınıfının private üyelerine doğrudan erişemez.

+ Temel sınıfın ve ve türetilmiş sınıfın, başka sınıfların nesnelerini
içerdiğini ve türetilmiş sınıfın bir nesnesini oluşturduğumuz varsayalım.
Türetilmiş sınıfın nesnesi oluşturulduğunda ilk önce temel sınıfın üye
nesnelerinin yapıcıları çalıştırılır. Ardından, türetilmiş sınıfın yapıcısı
çalıştırılır. Yıkıcılar, yapıcılarının çağrılışının ters sırasında
çağrılırlar.

+ Üye nesneler, sınıf tanımlamasındaki bildiriliş sıralarında yapılır. Üye ilk
değer atayıcıların listeleniş sırası, yapım sırasını etkilemez.

+ Kalıtımda, temel sınıf yapıcıları, türetilmiş sınıf tanımlamasında
belirtilen kalıtım sırasıyla çağrılır. Temel sınıf yapıcılarının, türetilmiş
sınıf üye ilk değer atayıcılarında listeleniş sırası, yapımı etkilemez.

+ Teoride, kullanıcıların kalıtımla aldıkları sınıfların kaynak kodunu
görmelerine gerek yoktur. Pratikte ise, bu kodları lisanslayanlar,
müşterilerin genelde kaynak kodunu da istediklerini söylemektedir.
Programcılar, hâlâ, başka insanların yazdığı kodları, kendi programlarının
kodlarına eklemeye gönülsüz gözükmektedir.

+ Türetilmiş sınıf oluşturmak, temel sınıfın nesne veya kaynak kodunu
etkilemez. Temel sınıfın bütünlüğü kalıtım ile korunmaktadır.

+ Nesne yönelimli bir sistemde sınıflar genelde yakın ilişkilidir. Genel
davranışları ve nitelikleri “çarpanlarına ayırın” ve bunları temel sınıfa
yerleştirin.  Daha sonra, türetilmiş sınıfları oluşturmak için kalıtımı
kullanın.

+ Türetilmiş bir sınıf temel sınıfının nitelik ve davranışlarını içerir.
Türetilmiş sınıf ayrıca ilave nitelik ve davranışlar da içerebilir. Kalıtım
ile, temel sınıf türetilmiş sınıftan ayrı olarak derlenebilir. Türetilmiş
sınıfın sadece ilave nitelik ve davranışlarının, türetilmiş sınıfı oluşturmak
üzere bunları temel sınıf ile birleştirebilmek için derlenmesi yeterlidir.

+ Temel sınıfta yapılan değişiklikler, temel sınıfın 'public' ve 'protected'
arayüzleri değişmediği sürece türetilmiş sınıfın değiştirilmesine gerektirmez.
Fakat, türetilmiş sınıfın tekrar derlenmesi gerekebilir.

+ Bir başka sınıfın üyesi olan bir sınıf değiştirildiği zaman, üye sınıfın
'public' arayüzü değişmediği sürece, kendisini içeren sınıfın değiştirilmesine
gerek yoktur. Fakat birleşim sınıfının tekrar derlenmesine gerek olabilir.

---

## 20. BÖLÜM (C++ Sanal Fonksiyonları ve Çokbiçimlilik)

### TERİMLER

+ abstract base class: soyut temel sınıf
+ base class pointer: temel sınıf göstericisi
+ class hierarchy: sınıf hiyerarşisi
+ concrete class: somut sınıf
+ derived class: türetilmiş sınıf
+ direct base class: doğrudan temel sınıf
+ dynamic binding: dinamik bağlama
+ early binding: ön bağlama
+ inheritance: kalıtım/miras
+ polymorphism: çok biçimlilik
+ pure virtual function: saf sanal fonksiyon
+ virtual function table: sanal fonksiyon tablosu

### ÖZET

+ virtual fonksiyonlar ve çokbiçimlilik ile daha kolay genişletilebilir
sistemleri yapmak mümkündür. Programlar, program geliştirilmesi sırasında var
olmayan sınıfları da işleyecek şekilde yazılabilir.

+ virtual fonksiyonlar ve çokbiçimli programlama switeh mantığına olan
ihtiyacı ortadan kaldırır. Programcı, eşdeğer mantığı otomatik olarak
gerçekleştirmek için virtual (sanal) fonksiyon mekanizmasını kullanabilir.
Dolayısıyla, switch mantığından kaynaklanan hatalardan kaçınmış olacaktır.
Nesnenin gösterimi ve yapılışıyla ilgili karar veren istemci kodlar, zayıf
sınıf tasarımını gösterir.

+ Türetilmiş sınıflar, gerekli olduğunda temel sınıfın virtual fonksiyonunun
kendi sürümlerini sunabilir, fakat bu sürümler yapılmamışsa, temel sınıfın
virtual fonksiyonu kullanılır,

+ Eğer bir virtual fonksiyon, bir nesneye adı ve nokta üye erişim operatörü
kullanı larak, referansa göre çağrılmışsa, referans derleme anında çözümlenir
(buna statik bağlama denir) ve çağrılan virtual fonksiyon, o nesnenin
sınıfında tanımlanan (veya kalıtımla alınan) virtual fonksiyondur.

+ Sınıfları, programcı hiç nesne oluşturmayacakmış gibi tanımlamanın
kullanışlı olacağı durumlar vardır. Bu tür sınıflara soyu sınıflar denir. Bu
sınıflar kalıtım durumunda temel sınıf olarak kullanıldıklarından dolayı bu
sınıfları normalde soyut temel sınıflar olarak adlandırılır. Bir soyut temel
sınıftan hiç bir nesne oluşturulamaz.

+ Nesnelerinin oluşturulabildiği sınıflara sonu sınıflar denir. Bir sınıf, bir
ya da daha fazla virtual fonksiyonu “saf” hale getirilerek soyut yapılır.

+ Bir saf virtual fonksiyon, bildiriminde = O ilk değer atayıcısı olan
fonksiyondur.

+ Eğer bir sınıf saf bir virtual fonksiyonu olan bir sınıftan türetilmişse ve
türetilmiş sınıfın içinde bu virtual fonksiyonun tanımlaması hiç verilmemişse,
o virtual fonksiyon türetilmiş sınıfta saf olarak kalır. Sonuç olarak,
türetilmiş sınıf da bir soyut sınıf olur.

+ C++ çokbiçimliliğe imkan tanımaktadır. Çokbiçimlilik, birbirleriyle
kalıtımla ilişkili olan farklı sınıfların nesnelerinin aynı mesaja (yani, üye
fonksiyon çağrısına) farklı yanıt vermesidir.

+ Çokbiçimlilik virtual fonksiyonlarla uygulanır.

+ Bir temel sınıf göstericisi (ya da referansı) aracılığıyla, virtual
fonksiyonu kullanmak üzere bir istek yapıldığında, C++, nesneyle ilgili uygun
türetilmiş sınıfın doğru geçersiz kılan fonksiyonunu seçer.

+ Virtual fonksiyonların ve çokbiçimliliğin kullanımıyla, bir üye fonksiyon
çağrısı, çağrıyı alan nesnenin tipine göre farklı hareketlere sebep olur.

+ Soyut temel sınıfların nesnelerini oluşturamasak da, soyut temel sınıflara
göstericiler ve referanslar bildirebiliriz. Bu gibi gösterici ve referanslar,
türetilmiş sınıf nesnelerini, bu nesneler somut sınıflardan oluşturulduğu
sürece, çokbiçimli yönetmek için kullanılabilir.

+ Yeni tipteki sınıflar sisteme düzenli olarak eklenir. Yeni sınıflar dinamik
bağlama (geç bağlama olurak da bilinir) ile yerleştirlirler. Bir virtual
fonksiyon çağrısının derlenir nesnenin tipinin çalışma anında bilinmesine
gerek yoktur. Çalışma anında virtual fonksiyon çağrısı, çağrılan nesnenin
uygun üye fonksiyonu ile eşleştirilir.

+ Dinamik bağlama, Bağımsız Yazılım Üreticilerinin (BYÜ), yazılımı, herhangi
bir şirket sırrını açığa vermeden dağıtmalarını sağlar. Yazılım dağıtımı
sadece öncü dosyalar ve nesne dosyalarından oluşabilir. Hiçbir kaynak kodun
gösterilmesine gerek yoktur. Daha sonra, yazılım geliştiricileri kalıtımı
kullanarak BYÜ"ler tarafından sağanan sınıflardan yeni sınıflar türetebilir.
BYÜ”lerin sağladığı sınıflarla çalışan yazılım, bu türetilmiş sınıflar ile de
çalışmaya devam edecek ve dinamik bağlama ile, bu sınıflarda verilen geçersiz
hale getirilmiş virtual fonksiyonları kullanacaktır.

+ Dinamik bağlama, çalışma zamanında bir virtual üye fonksiyon çağrısının, o
sınıf için uygun olan virtual fonksiyona yönlendirilmesini gerektirir. Bir
virtual fonksiyon.  tablosu (vtable denir), fonksiyon göstericilerinden oluşan
bir dizi olarak yapılır virtual fonksiyonu olan her sınıfın vtable'ı vardır.
Sınıftaki her virtual fonksiyon için, wtable'da, o sınıfın bir nesnesinin
kullanacağı virtual fonksiyon sürümüne bir gösterici içeren kayıt bulunur.
Özel bir sınıf için kullanılacak virtual fonksiyon, o sınıf içinde tanımlanmış
fonksiyon ya da hiyerarşide daha yukarıda bulunan bir temel sınıftan doğrudan
veya dolaylı olarak kalıtımla alınmış bir fonksiyon olabilir.

+ Temel bir sınıf bir virtual fonksiyon sağladığı zaman, türetilmiş sınıf o
virtual fonksiyonu sınıf içinde geçersiz hale getirebilir, fakat böyle yapması
zorunlu degildir. Dolayısıyla türetilmiş sınıf, virtual üye fonksiyonun, temel
sınıf sürümünü kullanabilir ve bu wtable'da belirtilir.

+ virtual fonksiyonu olan her sınıf nesnesi, o sınıfın vtable'ını gösteren bir
gösterici içerir. vtable'daki uygun fonksiyon göstericisi alınır ve çağrıyı
tamamlamak üzere göstericinin gösterdiği nesneye erişilir. Bu işlem, genelde
yapılabilecek en iyi istemci koddan daha az çalışma zamanı yükü getirir.

+ Eğer bir sınıf virtual fonksiyonlar içeriyorsa, temel sınıf yıkıcısını
virtual olarak bildirin, Bu, temel sınıfla aynı isimde olmamalarına rağmen,
tüm türetilmiş sınıf yıkıcılarını da virtual yapar. Eğer hiyerarşideki bir
nesne, türetilmiş sınıf nesnesini gösteren bir temel sınıf göstericisine
delete operatörü uygulanarak, açıkça yıkılırsa uygun sınıfın yıkıcısı
çağrılır.

+ vtable'ında bir ya da daha fazla sıfır olan herhangi bir sınıf soyut
sınıftır.  vtable göstericileri O olmayan sınıflar (Nokta, Daire ve Silindir
gibi) somut sınıflardır.

### GENEL PROGRAMLAMA HATALARI

+ Bir soyut sınıfın (yani, bir ya da daha fazla saf virtual fonksiyon içeren
sınıf) nesnesini oluşturmaya çalışmak yazım hatasıdır.

+ Yapıcılar virtual olamazlar. Bir yapıcıyı virtual bildirmek yazım hatasıdır.

### İYİ PROGRAMLAMA ALIŞTIRMALARI

+ Bazı fonksiyonlar, sınıf hiyerarşisinde, üst sıradaki sınıflardaki
bildirimleri yüzünden kapalı olarak virtual olsalar da, bu fonksiyonları
hiyerarşi içinde her yerde açıkça virtual olarak bildirmek program
okunurluğunu destekler.

+ Eğer bir sınıfın virtual fonksiyonu varsa, sınıf için gerekli olmasa bile
bir virtual yıkıcı sağlayın. Bu sınıftan türetilecek sınıflar, daha düzgün
çağrılması gereken yıkıcılar içeriyor olabilir.

### PERFORMANS İPUÇLARI

+ Çokbiçimlilik, virtual fonksiyonlar ve dinamik bağlama ile uygulandığında
etkili olmaktadır. Programcı, bu imkanları sistemin performansını en az ölçüde
etkileyecek şekilde kullanabilir.

+ Sanal fonksiyonlar ve dinamik bağlama, switeh mantığının tersine, çok bi
çimli programlamaya imkan tanır. C++ iyileştirici derleyicileri, normalde en
az el yazımı switch tabanlı mantık kadar verimli çalışacak şekilde kod
yaratır.  Her iki şekilde de, çokbiçimliliğin getirdiği yük bir çok uygulama
için kabul edilebilir. Fakat, çok katı performans gerektiren gerçek zamanlı
(real-time) uygulamalar gibi durumlarda, çokbiçimliliğin getirdiği yük çok
yüksek olabilir.
 
### YAZILIM MÜHENDİSLİĞİ GÖZLEMLERİ

+ virtual fonksiyonları ve çokbiçimliliği kullanmanın ilginç bir getirisi de
programların basit görünmesidir. Bu programlar, daha basit ardışıl kod ile
daha az.  dallanma mantığı içermektedir. Bu, program testini, hata
ayıklamasını, bakımını ve hatalardan kaçınmayı kolaylaştırır.

+ Bir fonksiyon virtual olarak bildirildikten sonra, bir sınıf tarafından
virtual olarak bildirilmeden geçersiz hale getirilse bile, bulunduğu konumdan
aşağıya doğru tüm kalıtım hiyerarşisi boyunca virtual olarak kalır.

+ Bir türetilmiş sınıf, bir virtual fonksiyonu virtual fonksiyon olmayacak şe-
kilde tanımlamak istediği zaman, türetilmiş sınıf, temel sınıfının virtual
fonksiyon tanımlamasını kalıtsal olarak alır.

+ Eğer bir sınıf, saf bir virtual fonksiyonu olan bir sınıftan türetil miş
sınıfın içinde bu virtual fonksiyonun tanımlaması verilmemişse fonksiyon
türetilmiş sınıfta saf olarak kalır. Sonuç olarak, türetilmiş sınıf da bir
soyut sınıf olur.

+ Programcı, virtual fonksiyonlar ve çokbiçimlilik ile genel durumlarla
ilgilenip çalışma zamanı ortamını, özelliklerle ilgilenmek üzere yalnız
bırakabilir.  Programcı, nesnelerin tipini bile bilmeden, bu nesnelere uygun
şekilde davranmak için bu nesneleri yönetebilir.

+ Çokbiçimlilik, genişletilebilirliği destekler: Çokbiçimli davranışları
çağırmak için yazılmış yazılımlar, mesajların gönderildiği nesnelerin
tiplerinden bağımsız olarak yazılırlar. Dolayısıyla, varolan mesajlara yanıt
verebilecek yeni tipler, temel sistemde değişiklik yapmadan böyle bir sisteme
eklenebilir. Yeni nesneler oluşturan istemci kodlar haricinde, programların
tekrar derlenmesine gerek yoktur.

+ Bir soyut sınıf, sınıf hiyerarşisinin farklı üyeleri için bir arayüz
tanımlar. Bir soyut sınıf, türetilmiş sınıflarda tanımlanacak saf virtual
fonksiyonlar içerir. Hiyerarşideki tüm fonksiyonlar, aynı arayüzü
çokbiçimlilik aracılığıyla kullanabilirler.

+ Bir sınıf, bir temel sınıftan, arayüzü ve/veya yapılışı kalıtımla alabilir.
Hiyerarşiler, yapılış kalıtımı için, hiyerarşi içindeki işlevselliklerinin
ması istenerek tasarlanırlar. Her yeni türetilmişmış bir ya da daha fazla üye
fonksiyonu kalıtımla alır, ve yeni türetilmiş sınıf, temel sınıf
tanımlamalarını kullanır. Hiyerarşiler, arayüz kalıtımı için, hiyerarşi
içindeki işlevselliklerinin düşük olması istenerek tasarlanırlar. Bir temel
sınıf, hiyerarşideki her sınıf için tanımlanmış olması gereken fonksiyonlar
belirtir (yani, aynı işarete sahiptirler). Fakat, her bir türetilmiş sınıf, bu
fonksiyonların kendi sürümlerini sağlamalıdır.
