class Main
{
    public static void main(String[] args)
    {
        Memory data;

        data = new Memory();
        data.setPrice(500000);
        data.setIdProduct("RAM2400");
        data.setBrand("Kingston");
        data.setModel("DDR4");
        data.setFrequency("2400CC");
        data.setMemorySize("8GB");
        data.setSupportsCuda("-");
        
        System.out.println("========================================");
        System.out.println("Deskripsi Memory :");
        System.out.println("========================================");
        System.out.println("Harga           : "+ data.getPrice());
        System.out.println("ID Produk       : "+ data.getIdProduct());
        System.out.println("Merk            : "+ data.getBrand());
        System.out.println("Model           : "+ data.getModel());
        System.out.println("Frekuensi       : "+ data.getFrequency());
        System.out.println("Ukuran Memori   : "+ data.getMemorySize());
        System.out.println("Support Cuda    : "+ data.getSupportsCuda());
        System.out.println("========================================");
    }
}
