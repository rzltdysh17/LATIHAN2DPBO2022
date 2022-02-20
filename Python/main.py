from memory import Memory


# Setter
data = Memory()
data.setPrice(500000)
data.setIdProduct("RAM2400")
data.setBrand("Kingston")
data.setModel("DDR4")
data.setFrequency("2400CC")
data.setMemorySize("8GB")
data.setSupportsCuda("-")

# Print Data
print("========================================")
print("Deskripsi Memory :")
print("========================================")
print("Harga           : "+ str (data.getPrice()))
print("ID Produk       : "+ str (data.getIdProduct()))
print("Merk            : "+ str (data.getBrand()))
print("Model           : "+ str (data.getModel()))
print("Frekuensi       : "+ str (data.getFrequency()))
print("Ukuran Memori   : "+ str (data.getMemorySize()))
print("Support Cuda    : "+ str (data.getSupportsCuda()))
print("========================================")