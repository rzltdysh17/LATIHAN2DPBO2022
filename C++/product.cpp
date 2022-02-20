#include <string>
#include <iostream>

using namespace std;

// Kelas Product
class Product
{
    // Atribut Private
    private:
        int price;
        string idProduct;

    // Atribut Public
    public:
        // Constructor
        Product()
        {
        
        }

        // Constructor Input
        Product(int price, string idProduct)
        {
            this->price = price;
            this->idProduct = idProduct;     
        }

        // Prosedur Setter
        void setPrice(int price)
        {
            this->price = price;
        }

        void setIdProduct(string idProduct)
        {
            this->idProduct = idProduct;
        }

        // Fungsi Getter
        int getPrice()
        {
            return this->price;
        }

        string getIdProduct()
        {
            return this->idProduct;
        }

        // Destructor
        ~Product()
        {

        };
};