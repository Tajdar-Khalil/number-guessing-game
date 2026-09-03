#include <iostream>

// Define ANSI color codes for easy formatting
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

int main() {
    // 1. Elaborate ASCII Art Header using Color
    std::cout << CYAN << BOLD;
    std::cout << "  ____   _  _____  _      _   _  _   _  _____  _____ \n";
    std::cout << " |  _ \\ | |/ /_ _|| |    | | | || \\ | ||_ _  ||_ _  |\n";
    std::cout << " | |_) || ' /  | | | |    | | | ||  \\| |  / /   / / \n";
    std::cout << " |  __/ |  <   | | | |___ | |_| || |\\  | / /   / /  \n";
    std::cout << " |_|    |_|\\_\\|___||_____| \\___/ |_| \\_||___| |___| \n";
    std::cout << "                                                    \n";
    std::cout << RESET;

    // Subtitle section
    std::cout << MAGENTA << " =================================================== " << RESET << "\n";
    std::cout << YELLOW << "            ADVENTURER'S GAME STATS TRACKER          " << RESET << "\n";
    std::cout << MAGENTA << " =================================================== " << RESET << "\n\n";

    // 2. Aligned Data Columns using \t
    // Table Headers
    std::cout << BOLD << "ID\tCHARACTER NAME\t\tCLASS\t\tLEVEL\tSTATUS" << RESET << "\n";
    std::cout << "-------------------------------------------------------------\n";

    // Data Row 1 - Green for active/healthy status
    std::cout << "001\t" << "Aethelgard\t\t" << "Paladin\t\t" << "42\t" << GREEN << "[ACTIVE]" << RESET << "\n";

    // Data Row 2 - Red for fallen/dead status
    std::cout << "002\t" << "Morgath the Sly\t\t" << "Rogue\t\t" << "19\t" << RED << "[FALLEN]" << RESET << "\n";

    // Data Row 3 - Yellow for resting/away status
    std::cout << "003\t" << "Seraphina\t\t" << "Mage\t\t" << "35\t" << YELLOW << "[RESTING]" << RESET << "\n";

    // Data Row 4 - Blue for questing status
    std::cout << "004\t" << "Garrick\t\t\t" << "Ranger\t\t" << "28\t" << BLUE << "[QUESTING]" << RESET << "\n";

    std::cout << "-------------------------------------------------------------\n\n";

    // Footer statement
    std::cout << GREEN << BOLD << "System Status: All data rendering completely synchronized." << RESET << "\n";

    return 0;
}

