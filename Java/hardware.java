// Kelas Hardware Turunan Kelas Product
class Hardware extends Product
{
    // Atribut Private
    private String brand;
    private String model;

    // Constructor
    Hardware()
    {
       
    }

    // Prosedur Setter dan Getter
    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

}
