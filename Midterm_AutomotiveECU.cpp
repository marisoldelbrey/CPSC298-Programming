#include <iostream>

class MachVECU {
private:
    bool hydraulicJacksActivated;
    bool infraredLightsActivated;
    bool specialGripTiresActivated;

    void activateHydraulicJacks() {
        hydraulicJacksActivated = !hydraulicJacksActivated;
        std::cout << "Hydraulic Jacks " << (hydraulicJacksActivated ? "activated" : "deactivated") << std::endl;
    }

    void activateInfraredLights() {
        infraredLightsActivated = !infraredLightsActivated;
        std::cout << "Infrared Lights " << (infraredLightsActivated ? "activated" : "deactivated") << std::endl;
    }

    void activateSpecialGripTires() {
        specialGripTiresActivated = !specialGripTiresActivated;
        std::cout << "Special Grip Tires " << (specialGripTiresActivated ? "activated" : "deactivated") << std::endl;
    }

    void activateAutoJack() {
        if (hydraulicJacksActivated) {
            std::cout << "Auto-Jack cannot be activated while Hydraulic Jacks are deployed." << std::endl;
        } else {
            activateSpecialGripTires(); // Auto-Jack deactivates Special Grip Tires
            std::cout << "Auto-Jack activated" << std::endl;
        }
    }

public:
    MachVECU() : hydraulicJacksActivated(false), infraredLightsActivated(false), specialGripTiresActivated(false) {}

    ~MachVECU() {}

    void handleCommand(char command) {
        switch (command) {
            case 'A':
                activateHydraulicJacks();
                break;
            case 'B':
                activateAutoJack();
                break;
            case 'E':
                activateInfraredLights();
                break;
            case 'X':
                std::cout << "Turning off ignition. Program ended." << std::endl;
                exit(0);
            default:
                std::cout << "Invalid command. Please enter A, B, E, or X." << std::endl;
        }
    }
};

int main() {
    MachVECU ecu;
    
    while (true) {
        std::cout << "Steering Wheel Controls: Enter A (Hydraulic Jacks), B (Auto-Jack), E (Infrared Lights), X (Turn off ignition): ";
        char command;
        std::cin >> command;

        ecu.handleCommand(command);
    }

    return 0;
}
