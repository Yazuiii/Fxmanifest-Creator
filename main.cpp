#include <iostream>
#include <fstream>
#include <string>

void createFXManifest(const std::string& name, const std::string& version, const std::string& description, const std::string& author) {
    // FXManifest erstellen
    std::ofstream file("fxmanifest.lua");

    if (file.is_open()) {
        file << "-- Generated FXManifest" << std::endl;
        file << "fx_version 'cerulean'" << std::endl;
        file << "game 'gta5'" << std::endl;
        file << std::endl;
        file << "author '" << author << "'" << std::endl;
        file << "description '" << description << "'" << std::endl;
        file << "version '" << version << "'" << std::endl;
        file << std::endl;
        file << "client_scripts {" << std::endl;
        file << "    'client/client.lua'," << std::endl;  // Client-Skript im Ordner "client"
        file << "}" << std::endl;
        file << "server_scripts {" << std::endl;
        file << "    'server/server.lua'," << std::endl;  // Server-Skript im Ordner "server"
        file << "}" << std::endl;
        file << std::endl;
        file << "dependencies {" << std::endl;
        file << "    -- Add any dependencies here" << std::endl;
        file << "}" << std::endl;

        file.close();
        std::cout << "fxmanifest.lua wurde erfolgreich erstellt!" << std::endl;
    } else {
        std::cout << "Fehler beim Erstellen der Datei!" << std::endl;
    }
}

int main() {
    std::string name, version, description, author;

    // Benutzer nach den erforderlichen Informationen fragen
    std::cout << "Geben Sie den Namen des Scripts ein: ";
    std::getline(std::cin, name);

    std::cout << "Geben Sie die Version des Scripts ein: ";
    std::getline(std::cin, version);

    std::cout << "Geben Sie eine Beschreibung des Scripts ein: ";
    std::getline(std::cin, description);

    std::cout << "Geben Sie den Autor des Scripts ein: ";
    std::getline(std::cin, author);

    // FXManifest erstellen
    createFXManifest(name, version, description, author);

    return 0;
}
