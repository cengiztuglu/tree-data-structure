
#define UZUNLUK 68	//dizilerde yer alan eleman sayÄ±sÄ±



struct Dugum {		//Agacta yer alan her bir dugumun veri yapisi
    int veri; 		//Dugumde tutulan veri
    Dugum* sag;	//Dugumun sag cocuguna isaretci
    Dugum* sol;  	//Dugumun sol cocuguna isaretci


};

struct IkiliSiralamaAgaci {	//Ikili siralama agaci veri yapisi
    Dugum* kok;			//Agac kokune isaretci
    void agacKur(int*);	//Dizi isaretcisi alir ve dizinin elemanlarini ikili siralama agacina uygun sekilde yerlestirir
    void agacKapat();		//Agacin dugumleri icin alinan bellek gozlerini program sonlanmadan hemen once iade eder

};


bool DFS(Dugum*, int);	//Ilk derinlik arama fonksiyonu bir agac koku ve aranacak deger parametrelerini alir
bool BFS(Dugum*, int);//Ilk genislik arama fonksiyonu bir agac koku ve aranacak deger parametrelerini alir