// Kelas Memory Turunan Kelas Hardware
class Memory extends Hardware
{
    // Atribut Private
    private String frequency;
    private String MemorySize;
    private String supportsCuda;
 
    // Constructor
    Memory() 
    {

    }

    // Prosedur Getter dan Setter
    public String getFrequency() {
        return frequency;
    }

    public void setFrequency(String frequency) {
        this.frequency = frequency;
    }

    public String getMemorySize() {
        return MemorySize;
    }

    public void setMemorySize(String memorySize) {
        MemorySize = memorySize;
    }

    public String getSupportsCuda() {
        return supportsCuda;
    }

    public void setSupportsCuda(String supportsCuda) {
        this.supportsCuda = supportsCuda;
    }
    
}
