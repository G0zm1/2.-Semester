#include <iostream>
#include <fstream>

int Read(char* FileName, int Anzahl, int* Values);
    
int Read(char* FileName, int Anzahl, int* Values) {
    std::ifstream file(FileName);
    std::cout << "[Studi-Debug] File: " << FileName << std::endl;
    

    if (!file.is_open()) {
    std::cout << "failed to open file! " << std::endl;
    return -1;
        }

    for (int i=0; i < Anzahl; ++i) {
        file >> Values[i];
        }

        file.close();
    return 0;
    
}

int main() {
    int Anzahl = 100;
    int* Values = new int[Anzahl];
    
    if (Values == nullptr) {
        std::cout<<"Die Speicherreservierung ist fehlgeschlagen! " <<std::endl;
        
        return -1;
    }
    
    char FileName[] = "mw.dat";
    
    int readValues = Read(FileName, Anzahl, Values);
   
    std::cout << "Werte wurden aus der Datei: " << FileName << " gelesen." << std::endl;
    
    
    delete[] Values;
    return 0;
    
    
}
