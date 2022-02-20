from product import Product

# Kelas Hardware Turunan Kelas Product
class Hardware(Product):
    __brand = ""
    __model = ""

    # Constructor
    def __init__(self, brand = "", model = ""):
        self.__brand = brand
        self.__model = model

    # Setter
    def setBrand(self, brand):
        self.__brand = brand

    def setModel(self, model):
        self.__model = model

    # Getter
    def getBrand(self):
        return self.__brand
    
    def getModel(self):
        return self.__model
