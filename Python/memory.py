from hardware import Hardware

# Kelas Memory Turunan Kelas Hardware
class Memory(Hardware):
    __frequency = ""
    __memorySize = ""
    __supportsCuda = ""

    # Constructor
    def __init__(self, frequency = "", memorySize = "", supportsCuda = ""):
        self.__frequency = frequency
        self.__memorySize = memorySize
        self.__supportsCuda = supportsCuda

    # Setter
    def setFrequency(self, frequency):
        self.__frequency = frequency

    def setMemorySize(self, memorySize):
        self.__memorySize = memorySize
    
    def setSupportsCuda(self, supportsCuda):
        self.__supportsCuda = supportsCuda

    # Getter
    def getFrequency(self):
        return self.__frequency
    
    def getMemorySize(self):
        return self.__memorySize

    def getSupportsCuda(self):
        return self.__supportsCuda
