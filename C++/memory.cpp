#include <string>
#include <iostream>
#include "hardware.cpp"

using namespace std;

// Kelas Memory Turunan Kelas Hardware
class Memory : public Hardware
{
    // Atribut Private
    private:
        string frequency;
        string memorySize;
        string supportsCuda;

    // Atribut Public
    public:
        // Constructor
        Memory()
        {
        
        }

        // Constructor Input
        Memory(string frequency, string memorySize, string supportsCuda)
        {
            this->frequency = frequency;
            this->memorySize = memorySize;     
            this->supportsCuda = supportsCuda;
        }

        // Prosedur Setter
        void setFrequency(string frequency)
        {
            this->frequency = frequency;
        }

        void setMemorySize(string memorySize)
        {
            this->memorySize = memorySize;
        }

        void setSupportsCuda(string supportsCuda)
        {
            this->supportsCuda = supportsCuda;
        }

        // Fungsi Getter
        string getFrequency()
        {
            return this->frequency;
        }

        string getMemorySize()
        {
            return this->memorySize;
        }

        string getSupportsCuda()
        {
            return this->supportsCuda;
        }

        // Destructor
        ~Memory()
        {

        };
};