#include <string>
#include <iostream>
#include "product.cpp"

using namespace std;

// Kelas Hardware Turunan Kelas Product
class Hardware : public Product
{
    // Atribut Private
    private:
        string brand;
        string model;

    // Atribut Public
    public:
        // Constructor
        Hardware()
        {
        
        }

        // Constructor Input
        Hardware(string brand, string model)
        {
            this->brand = brand;
            this->model = model;     
        }

        // Prosedur Setter
        void setBrand(string brand)
        {
            this->brand = brand;
        }

        void setModel(string model)
        {
            this->model = model;
        }

        // Fungsi Getter
        string getBrand()
        {
            return this->brand;
        }

        string getModel()
        {
            return this->model;
        }

        // Destructor
        ~Hardware()
        {

        };
};