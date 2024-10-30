#include <iostream>
#include <string>

class Processor {
    std::string model;
    int cores;
    float frequency;

public:
    Processor(const std::string& model, int cores, float frequency)
        : model(model), cores(cores), frequency(frequency) {}

    void display() const {
        std::cout << "Processor: " << model << ", Cores: " << cores
            << ", Frequency: " << frequency << "GHz" << std::endl;
    }
};
class RAM {
    int capacity;
    int frequency;

public:
    RAM(int capacity, int frequency) : capacity(capacity), frequency(frequency) {}

    void display() const {
        std::cout << "RAM: " << capacity << "GB, Frequency: " << frequency << "MHz" << std::endl;
    }
};

class Storage {
    int capacity;
    std::string type;

public:
    Storage(int capacity, const std::string& type) : capacity(capacity), type(type) {}

    void display() const {
        std::cout << "Storage: " << capacity << "GB, Type: " << type << std::endl;
    }
};


class GraphicsCard {
    std::string model;
    int memory;

public:
    GraphicsCard(const std::string& model, int memory) : model(model), memory(memory) {}

    void display() const {
        std::cout << "Graphics Card: " << model << ", Memory: " << memory << "GB" << std::endl;
    }
};

class Motherboard {
    std::string model;
    std::string chipset;

public:
    Motherboard(const std::string& model, const std::string& chipset)
        : model(model), chipset(chipset) {}

    void display() const {
        std::cout << "Motherboard: " << model << ", Chipset: " << chipset << std::endl;
    }
};

class PowerSupply {
    int wattage;

public:
    PowerSupply(int wattage) : wattage(wattage) {}

    void display() const {
        std::cout << "Power Supply: " << wattage << "W" << std::endl;
    }
};

class Computer {
    Processor processor;
    RAM ram;
    Storage storage;
    GraphicsCard graphicsCard;
    Motherboard motherboard;
    PowerSupply powerSupply;

public:
    Computer(const Processor& processor, const RAM& ram, const Storage& storage,
        const GraphicsCard& graphicsCard, const Motherboard& motherboard,
        const PowerSupply& powerSupply)
        : processor(processor), ram(ram), storage(storage),
        graphicsCard(graphicsCard), motherboard(motherboard), powerSupply(powerSupply) {}

    void displaySpecs() const {
        std::cout << "Computer Specifications:" << std::endl;
        processor.display();
        ram.display();
        storage.display();
        graphicsCard.display();
        motherboard.display();
        powerSupply.display();
    }
};
    
int main() {
    Processor processor("Intel Core i9", 8, 3.6);
    RAM ram(16, 3200);
    Storage storage(512, "SSD");
    GraphicsCard graphicsCard("NVIDIA RTX 3070", 10);
    Motherboard motherboard("ASUS ROG STRIX", "Z490");
    PowerSupply powerSupply(750);

    Computer myComputer(processor, ram, storage, graphicsCard, motherboard, powerSupply);
    myComputer.displaySpecs();

    return 0;
}

