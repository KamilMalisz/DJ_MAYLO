

#include <iostream>

#include <fstream>

#include <string>

 

int main() {

    std::string plusiki;

    std::string data;

    std::string imie;

    std::string nazwisko;
    std::string data_ur;

 

    std::cout << "Podaj datę: ";

    std::cin >> data;

    std::cout << "Podaj imię dziecka: ";

    std::cin >> imie;

    std::cout << "Podaj nazwisko: ";

    std::cin >> nazwisko;

    std::cout << "Podaj datę urodzenia: ";

    std::cin >> data_ur;

    std::cout << "Wpisz plusy i minusy bez odstępów: ";

    std::cin >> plusiki;

 

    // Tworzenie pliku

    std::ofstream file("diagnoza.txt");

    if (!file) {

        std::cerr << "Nie można otworzyć pliku!" << std::endl;

        return 1;

    }

 

    file << "Zawiercie, " << data << std::endl;

    file << "Diagnoza pedagogiczna" << std::endl;

    file << "Imię, nazwisko: " << imie << " " << nazwisko << std::endl;

    file << "Data urodzenia: " << data_ur << std::endl;

    file << "Mocne strony dziecka:" << std::endl;

    file << "Rozwój ruchowy:" << std::endl;

 

    if (plusiki[0] == '+') {

        file << "Stoi na palcach i utrzymuje się co najmniej 1 sekundę, nie opadając na całe stopy. ";

    }

    if (plusiki[1] == '+') {

        file << "Stoi na palcach i robi co najmniej trzy kroki, nie opadając na całe stopy. ";

    }

    if (plusiki[2] == '+') {

        file << "Rzuca piłkę do badającego i łapie oraz odrzuca ją. ";

    }

    if (plusiki[3] == '+') {

        file << "Naśladuje proste układy ruchowe w zabawach. ";

    }

    if (plusiki[4] == '+') {

        file << "Chodzi po schodach w górę krokiem naprzemiennym oraz krokiem odstawno-dostawnym lub na przemiennym. ";

    }

    if (plusiki[5] == '+') {

        file << "Jeździ na dziecięcym rowerze trójkołowym lub dwukołowym posiadającą kółka boczne, naciskając naprzemiennie na pedały. ";

    }

 

    file << std::endl;

    file << "W zakresie rozwoju motoryki precyzyjnej i lateralizacji:" << std::endl;

 

    if (plusiki[6] == '+') {

        file << "Przedziera kartkę papieru na pół ruchem rąk w przeciwnych kierunkach od i do siebie po demonstracji. ";

    }

    if (plusiki[7] == '+') {

        file << "Nawleka w dowolnej kolejności duże oraz małe koraliki z zestawu koralików. ";

    }

    if (plusiki[8] == '+') {

        file << "Powtarza sekwencję kolejnych naciśnięć przycisków w zabawce z przyciskami palcem wskazującym przy zachowaniu kierunku od lewej do prawej strony (po demonstracji). ";

    }

    if (plusiki[9] == '+') {

        file << "Rysuje kredkami postać człowieka w formie głowonoga z zaznaczeniem części twarzy oraz kończyn w formie kresek lub kółek. ";

    }

    if (plusiki[10] == '+') {

        file << "Trzyma kredkę w lekko zgiętych palcach przeciwstawiając kciuk pozostałym palcom. ";

    }

    if (plusiki[11] == '+') {

        file << "W czynnościach precyzyjnych posługuje się przeważnie prawą lub lewą ręką. ";

    }

 

    file << std::endl;

    file << "W zakresie rozwoju spostrzegania wzrokowego i koordynacji wzrokowo-ruchowej:" << std::endl;

 

    if (plusiki[12] == '+') {

        file << "Wskazuje krótszą kreskę spośród dwóch narysowanych przez badającego, a następnie dłuższą po odwróceniu kartki. ";

    }

    if (plusiki[13] == '+') {

        file << "Łączy w całość obrazki przeciętne na cztery części w pionie i poziomie, gdy obrazki podawane są osobno. ";

    }

    if (plusiki[14] == '+') {

        file << "Składa kwadratową kartkę papieru na pół i jeszcze raz na pół tak, by powstał mały kwadrat (po demonstracji i patrząc na wzór wykonywany przez badającego).  ";

    }

    if (plusiki[15] == '+') {

        file << "Dopasowuje klocki w kształcie koła, kwadratu, trójkąta i prostokąta do odpowiedniego otworu w układance i po odwróceniu deski o 180 stopni znajduje właściwe miejsca ułożenia elementów. ";

    }

    if (plusiki[16] == '+') {

        file << "Buduje most z pięciu klocków (po demonstracji i patrząc na wzór ułożony przez badającego). ";

    }

    if (plusiki[17] == '+') {

        file << "Układa kwadrat czterech klocków (po demonstracji i rozłożeniu wzoru przez badającego). ";

    }

 

    file << std::endl;

    file << "W sferze rozwoju komunikowania się i mowy: " << std::endl;

 

    if (plusiki[18] == '+') {

        file << "Wskazuje odpowiednie kolory na obrazkach w książeczce. ";

    }

    if (plusiki[19] == '+') {

        file << "Rozpoznaje zwierzęta oraz meble w książeczce na podstawie pytań dotyczących ich cech i funkcji. ";

    }

    if (plusiki[20] == '+') {

        file << "Nazywa czynności przedstawione na obrazkach w książeczce. ";

    }

    if (plusiki[21] == '+') {

        file << "Opowiada treść obrazka do opisywania tworząc proste zdania. ";

    }

    if (plusiki[22] == '+') {

        file << "Powtarza rymowankę (po wyuczeniu i demonstracji). ";

    }

    if (plusiki[23] == '+') {

        file << "Wymowa jest jeszcze ”dziecięca”, lecz zrozumiała dla osób z najbliższego otoczenia; okresowo może pojawiać się powtarzanie sylab i słów. ";

    }

 

    file << std::endl;

    file << "W sferze rozwoju emocjonalno-społecznego: " << std::endl;

 

    if (plusiki[24] == '+') {

        file << "Po zadaniu pytania odpowiada, jak ma na imię i na nazwisko. ";

    }

    if (plusiki[25] == '+') {

        file << "Naśladuje i kontynuuje zabawę tematyczne - ”gotuje” mieszając łyżeczką w kubku; karmi łyżeczką lalkę; usypia lalkę (po demonstracji). ";

    }

    if (plusiki[26] == '+') {

        file << "Wyraża własne potrzeby w jasny dla innych sposób - zachowaniem, gestem, mową. ";

    }

    if (plusiki[27] == '+') {

        file << "W większości częściowo kontroluje swoje emocje i dostosowuje ich siłę do sytuacji; gdy złości się lub płacze, to uspokaja się po chwili; na ogół nie reaguje histerycznie czy agresywnie. ";

    }

    if (plusiki[28] == '+') {

        file << "Komunikuje się oraz współdziała z innymi osobami podczas zadań i zabawy, stosuje się do reguł prostych zabaw: czeka na swoją kolej, wykonuje polecenia, naśladuje innych. ";

    }

    if (plusiki[29] == '+') {

        file << "Rozstaje się z bliską osobą pozostając z innymi dorosłymi lub w grupie przedszkolnej (może wymagać okresu oswojenia). ";

    }

 

    file<<std::endl;

    file<<"W zakresie rozwoju funkcji behawioralnych z wywiadu z rodzicem: ";

    file<<std::endl;

   

        if(plusiki[30] == '+'){

        file<<"Samodzielnie zjada podany posiłek, siedząc przy stole: pije z kubka; zjada pieczywo, kanapkę, herbatnik lub owoc; potrafi jeść łyżką i nie wylewa z niej; umie nabijać kawałki jedzenia na widelec. ";

    }

        if(plusiki[31] == '+'){

        file<<"Zgłasza w odpowiednim czasie potrzebę skorzystania z ubikacji w ciągu dnia, czasami jeszcze wymaga przypominania.Tylko sporadycznie moczy się w nocy. ";

    }

        if(plusiki[32] == '+'){

        file<<"Wykonuje podstawowe czynności higieniczne. ";

    }

        if(plusiki[33] == '+'){

        file<<"Rozbiera się i samodzielnie zakłada większość części garderoby, gdy osoba dorosła przygotowuje mu je i udziela pomocy w trudniejszych czynnościach. ";

    }

        if(plusiki[34] == '+'){

        file<<"Sprząta zabawki po zabawie: wkłada do pudełka, odkłada na półkę. ";

    }

        if(plusiki[35] == '+'){

        file<<"Samodzielnie zasypia i spokojnie przesypia całą noc, czasami może się przebudzć i wołać rodziców, ale szybko potrafi się uspokoić. ";

    }

   

   

    file<<std::endl;

    file<<"W zakresie wiedzy i umiejętności uczenia się: ";

    file<<std::endl;

   

        if(plusiki[36] == '+'){

        file<<"Klaszcze w rytm piosenki (po demonstracji). ";

    }

        if(plusiki[37] == '+'){

        file<<"Rysuje ołówkiem figury geometryczne (koło, krzyż, kwadrat) według wzoru znajdującego się w książeczce. ";

    }

        if(plusiki[38] == '+'){

        file<<"Liczy co najmniej pięć klocków. ";

    }

        if(plusiki[39] == '+'){

        file<<"Umieszcza na polecenie klocek: na, przed, za i obok auta. ";

    }

        if(plusiki[40] == '+'){

        file<<"Dobiera identyczne kształty w pary z zestawu par kształtów. ";

    }

        if(plusiki[41] == '+'){

        file<<"Skupia się przez co najmniej 15 minut na ulubionych zabawach i doprowadza je do końca. ";

    }

   

    //-------------------------------------------minusiki-------------------------------------

   

    file << "Słabe strony dziecka:" << std::endl;

    file << "Rozwój ruchowy:" << std::endl;

 

    if (plusiki[0] == '-') {

        file << "Nie stoi na palcach i nie utrzymuje się co najmniej 1 sekundę, opadając na całe stopy. ";

    }

    if (plusiki[1] == '-') {

        file << "Nie stoi na palcach i nie robi co najmniej trzech kroków, opadając na całe stopy. ";

    }

    if (plusiki[2] == '-') {

        file << "Nie rzuca piłki do badającego ani nie łapie oraz nie odrzuca jej. ";

    }

    if (plusiki[3] == '-') {

        file << "Nie naśladuje prostych układów ruchowych w zabawach. ";

    }

    if (plusiki[4] == '-') {

        file << "Nie chodzi po schodach w górę krokiem naprzemiennym oraz krokiem odstawno-dostawnym ani na przemiennym. ";

    }

    if (plusiki[5] == '-') {

        file << "Nie jeździ na dziecięcym rowerze trójkołowym lub dwukołowym z kółkami bocznymi, nie naciskając naprzemiennie na pedały. ";

    }

 

    file << std::endl;

    file << "W zakresie rozwoju motoryki precyzyjnej i lateralizacji:" << std::endl;

 

    if (plusiki[6] == '-') {

        file << "Nie przedziera kartki papieru na pół ruchem rąk w przeciwnych kierunkach po demonstracji. ";

    }

    if (plusiki[7] == '-') {

        file << "Nie nawleka w dowolnej kolejności dużych ani małych koralików z zestawu koralików. ";

    }

    if (plusiki[8] == '-') {

        file << "Nie powtarza sekwencji kolejnych naciśnięć przycisków w zabawce palcem wskazującym, nie zachowując kierunku od lewej do prawej strony (po demonstracji). ";

    }

    if (plusiki[9] == '-') {

        file << "Nie rysuje kredkami postaci człowieka w formie głowonoga z zaznaczeniem części twarzy ani kończyn w formie kresek lub kółek. ";

    }

    if (plusiki[10] == '-') {

        file << "Nie trzyma kredki w lekko zgiętych palcach, przeciwstawiając kciuk pozostałym palcom. ";

    }

    if (plusiki[11] == '-') {

        file << "W czynnościach precyzyjnych nie posługuje się przeważnie prawą lub lewą ręką. ";

 

    file << std::endl;

    file << "W zakresie rozwoju spostrzegania wzrokowego i koordynacji wzrokowo-ruchowej:" << std::endl;

 

    if (plusiki[12] == '-') {

        file << "Nie wskazuje krótszej kreski spośród dwóch narysowanych przez badającego, a następnie dłuższej po odwróceniu kartki. ";

    }

    if (plusiki[13] == '-') {

        file << "Nie łączy w całość obrazków przeciętnych na cztery części w pionie i poziomie, gdy obrazki podawane są osobno. ";

    }

    if (plusiki[14] == '-') {

        file << "Nie składa kwadratowej kartki papieru na pół i jeszcze raz na pół, tak by powstał mały kwadrat (po demonstracji i patrząc na wzór wykonywany przez badającego). ";

    }

    if (plusiki[15] == '-') {

        file << "Nie dopasowuje klocków w kształcie koła, kwadratu, trójkąta i prostokąta do odpowiedniego otworu w układance, a po odwróceniu deski o 180 stopni nie znajduje właściwych miejsc ułożenia elementów. ";

    }

    if (plusiki[16] == '-') {

        file << "Nie buduje mostu z pięciu klocków (po demonstracji i patrząc na wzór ułożony przez badającego). ";

    }

    if (plusiki[17] == '-') {

        file << "Nie układa kwadratu z czterech klocków (po demonstracji i rozłożeniu wzoru przez badającego). ";

    }

 

    file << std::endl;

    file << "W sferze rozwoju komunikowania się i mowy: " << std::endl;

 

    if (plusiki[18] == '-') {

        file << "Nie wskazuje odpowiednich kolorów na obrazkach w książeczce. ";

    }

    if (plusiki[19] == '-') {

        file << "Nie rozpoznaje zwierząt ani mebli w książeczce na podstawie pytań dotyczących ich cech i funkcji. ";

    }

    if (plusiki[20] == '-') {

        file << "Nie nazywa czynności przedstawionych na obrazkach w książeczce. ";

    }

    if (plusiki[21] == '-') {

        file << "Nie opowiada treści obrazka do opisywania, tworząc proste zdania. ";

    }

    if (plusiki[22] == '-') {

        file << "Nie powtarza rymowanki (po wyuczeniu i demonstracji). ";

    }

    if (plusiki[23] == '-') {

        file << "Wymowa nie jest 'dziecięca', ani nie jest zrozumiała dla osób z najbliższego otoczenia; nie pojawia się okresowo powtarzanie sylab i słów. ";

    }

 

    file << std::endl;

    file << "W sferze rozwoju emocjonalno-społecznego: " << std::endl;

 

    if (plusiki[24] == '-') {

        file << "Nie odpowiada na zadane pytanie, jak ma na imię i nazwisko. ";

    }

    if (plusiki[25] == '-') {

        file << "Nie naśladuje ani nie kontynuuje zabawy tematycznej - 'nie gotuje' mieszając łyżeczką w kubku; nie karmi łyżeczką lalki; nie usypia lalki (po demonstracji). ";

    }

    if (plusiki[26] == '-') {

        file << "Nie wyraża własnych potrzeb w jasny dla innych sposób - zachowaniem, gestem, mową. ";

    }

    if (plusiki[27] == '-') {

        file << "W większości nie kontroluje swoich emocji ani nie dostosowuje ich siły do sytuacji; gdy się złości lub płacze, nie uspokaja się po chwili; na ogół reaguje histerycznie lub agresywnie. ";

    }

    if (plusiki[28] == '-') {

        file << "Nie komunikuje się ani nie współdziała z innymi osobami podczas zadań i zabawy, nie stosuje się do reguł prostych zabaw: nie czeka na swoją kolej, nie wykonuje poleceń, nie naśladuje innych. ";

    }

    if (plusiki[29] == '-') {

        file << "Nie rozstaje się z bliską osobą, pozostając z innymi dorosłymi lub w grupie przedszkolnej (może wymagać długiego okresu oswojenia się z nową sytuacją). ";

    }

 

    file << std::endl;

    file << "W zakresie rozwoju funkcji behawioralnych z wywiadu z rodzicem: " << std::endl;

 

    if (plusiki[30] == '-') {

        file << "Nie samodzielnie zjada podany posiłek, siedząc przy stole: nie pije z kubka; nie zjada pieczywa, kanapki, herbatnika ani owocu; nie potrafi jeść łyżką ani nie wylewa z niej; nie umie nabijać kawałków jedzenia na widelec. ";

    }

    if (plusiki[31] == '-') {

        file << "Nie zgłasza w odpowiednim czasie potrzeby skorzystania z ubikacji w ciągu dnia, czasami jeszcze wymaga przypominania; często moczy się w nocy. ";

    }

    if (plusiki[32] == '-') {

        file << "Nie wykonuje podstawowych czynności higienicznych. ";

    }

    if (plusiki[33] == '-') {

        file << "Nie rozbiera się ani nie zakłada samodzielnie większości części garderoby, gdy osoba dorosła przygotowuje mu je i udziela pomocy w trudniejszych czynnościach. ";

    }

    if (plusiki[34] == '-') {

        file << "Nie sprząta zabawek po zabawie: nie wkłada do pudełka, nie odkłada na półkę. ";

    }

    if (plusiki[35] == '-') {

        file << "Nie zasypia samodzielnie i nie przesypia spokojnie całej nocy. ";

    }

 

    file << std::endl;

    file << "W zakresie wiedzy i umiejętności uczenia się: " << std::endl;

 

    if (plusiki[36] == '-') {

        file << "Nie klaszcze w rytm piosenki (po demonstracji). ";

    }

    if (plusiki[37] == '-') {

        file << "Nie rysuje ołówkiem figur geometrycznych (koło, krzyż, kwadrat) według wzoru znajdującego się w książeczce. ";

    }

    if (plusiki[38] == '-') {

        file << "Nie liczy co najmniej pięciu klocków. ";

    }

    if (plusiki[39] == '-') {

        file << "Nie umieszcza na polecenie klocka: na, przed, za i obok auta. ";

    }

    if (plusiki[40] == '-') {

        file << "Nie dobiera identycznych kształtów w pary z zestawu par kształtów. ";

    }

    if (plusiki[41] == '-') {

        file << "Nie skupia się przez co najmniej 15 minut na ulubionych zabawach ani nie doprowadza ich do końca. ";

    }

 

 

   

 

    file.close(); // Zamknięcie pliku

 

    file << "Wyniki zostały zapisane w pliku diagnoza.txt." << std::endl;

 

    return 0;

}

}