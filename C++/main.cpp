#include "Memory.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    // Setter
    Memory data;
    data.setPrice(500000);
    data.setIdProduct("RAM2400");
    data.setBrand("Kingston");
    data.setModel("DDR4");
    data.setFrequency("2400CC");
    data.setMemorySize("8GB");
    data.setSupportsCuda("-");

    // Print Data
    cout << "========================================" << endl;
    cout << "Deskripsi Memory :" << endl;
    cout << "========================================" << endl;
    cout << "Harga           : "<< data.getPrice() << endl;
    cout << "ID Produk       : "<< data.getIdProduct() << endl;
    cout << "Merk            : "<< data.getBrand() << endl;
    cout << "Model           : "<< data.getModel() << endl;
    cout << "Frekuensi       : "<< data.getFrequency() << endl;
    cout << "Ukuran Memori   : "<< data.getMemorySize() << endl;
    cout << "Support Cuda    : "<< data.getSupportsCuda() << endl;
    cout << "========================================" << endl;        
    return 0;
}